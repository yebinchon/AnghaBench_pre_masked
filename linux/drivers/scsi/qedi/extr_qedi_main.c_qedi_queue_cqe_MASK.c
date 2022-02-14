
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int itid; } ;
struct TYPE_8__ {size_t conn_id; int cqe_type; } ;
union iscsi_cqe {TYPE_4__ cqe_solicited; TYPE_3__ cqe_common; } ;
typedef size_t u32 ;
typedef void* u16 ;
struct qedi_work {int is_solicited; int list; void* que_idx; int cqe; struct qedi_ctx* qedi; } ;
struct qedi_percpu_s {int work_list; } ;
struct TYPE_6__ {struct qedi_conn** conn_cid_tbl; } ;
struct qedi_ctx {int dbg_ctx; TYPE_1__ cid_que; } ;
struct qedi_conn {TYPE_2__* cls_conn; } ;
struct TYPE_10__ {int is_solicited; int list; void* que_idx; int cqe; struct qedi_ctx* qedi; } ;
struct qedi_cmd {TYPE_5__ cqe_work; } ;
struct iscsi_conn {int dummy; } ;
struct TYPE_7__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;





 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 struct qedi_work* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,union iscsi_cqe*,int) ;
 struct qedi_cmd* FUNC_6 (struct qedi_ctx*,int ) ;

__attribute__((used)) static int FUNC_7(struct qedi_ctx *VAR_1, union iscsi_cqe *VAR_2,
     u16 VAR_3, struct qedi_percpu_s *VAR_4)
{
 struct qedi_work *VAR_5;
 struct qedi_conn *VAR_6;
 struct iscsi_conn *VAR_7;
 struct qedi_cmd *VAR_8;
 u32 VAR_9;
 int VAR_10 = 0;

 VAR_9 = VAR_2->cqe_common.conn_id;
 VAR_6 = VAR_1->cid_que.conn_cid_tbl[VAR_9];
 if (!VAR_6) {
  FUNC_2(&VAR_1->dbg_ctx,
     "Session no longer exists for cid=0x%x!!\n",
     VAR_9);
  return -1;
 }
 VAR_7 = VAR_6->cls_conn->dd_data;

 switch (VAR_2->cqe_common.cqe_type) {
 case 131:
 case 130:
  VAR_8 = FUNC_6(VAR_1, VAR_2->cqe_solicited.itid);
  if (!VAR_8) {
   VAR_10 = -1;
   break;
  }
  FUNC_0(&VAR_8->cqe_work.list);
  VAR_8->cqe_work.qedi = VAR_1;
  FUNC_5(&VAR_8->cqe_work.cqe, VAR_2, sizeof(union iscsi_cqe));
  VAR_8->cqe_work.que_idx = VAR_3;
  VAR_8->cqe_work.is_solicited = 1;
  FUNC_4(&VAR_8->cqe_work.list, &VAR_4->work_list);
  break;
 case 128:
 case 132:
 case 129:
  VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
  if (!VAR_5) {
   VAR_10 = -1;
   break;
  }
  FUNC_0(&VAR_5->list);
  VAR_5->qedi = VAR_1;
  FUNC_5(&VAR_5->cqe, VAR_2, sizeof(union iscsi_cqe));
  VAR_5->que_idx = VAR_3;
  VAR_5->is_solicited = 0;
  FUNC_4(&VAR_5->list, &VAR_4->work_list);
  break;
 default:
  VAR_10 = -1;
  FUNC_1(&VAR_1->dbg_ctx, "FW Error cqe.\n");
 }
 return VAR_10;
}
