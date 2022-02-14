
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct iscsi_tcp_conn {struct cxgbi_conn* dd_data; } ;
struct iscsi_endpoint {struct cxgbi_endpoint* dd_data; } ;
struct iscsi_conn {TYPE_2__* session; struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct cxgbi_sock {int callback_lock; struct iscsi_conn* user_data; int tid; TYPE_3__* cdev; } ;
struct TYPE_4__ {int pgsz_idx_dflt; } ;
struct cxgbi_ppm {TYPE_1__ tformat; } ;
struct cxgbi_endpoint {struct cxgbi_conn* cconn; int chba; struct cxgbi_sock* csk; } ;
struct cxgbi_conn {struct cxgbi_endpoint* cep; int chba; scalar_t__ task_idx_bits; } ;
struct TYPE_6__ {int (* csk_ddp_setup_pgidx ) (struct cxgbi_sock*,int ,int ) ;struct cxgbi_ppm* (* cdev2ppm ) (TYPE_3__*) ;} ;
struct TYPE_5__ {scalar_t__ cmds_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct iscsi_conn*) ;
 int FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_cls_session*,struct iscsi_cls_conn*,int) ;
 struct iscsi_endpoint* FUNC_4 (int ) ;
 int FUNC_5 (struct iscsi_tcp_conn*) ;
 int FUNC_6 (int,char*,struct iscsi_cls_session*,struct iscsi_cls_conn*,struct iscsi_endpoint*,struct cxgbi_conn*,struct cxgbi_sock*) ;
 struct cxgbi_ppm* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct cxgbi_sock*,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct iscsi_cls_session *VAR_2,
    struct iscsi_cls_conn *VAR_3,
    u64 VAR_4, int VAR_5)
{
 struct iscsi_conn *VAR_6 = VAR_3->dd_data;
 struct iscsi_tcp_conn *VAR_7 = VAR_6->dd_data;
 struct cxgbi_conn *VAR_8 = VAR_7->dd_data;
 struct cxgbi_ppm *VAR_9;
 struct iscsi_endpoint *VAR_10;
 struct cxgbi_endpoint *VAR_11;
 struct cxgbi_sock *VAR_12;
 int VAR_13;

 VAR_10 = FUNC_4(VAR_4);
 if (!VAR_10)
  return -VAR_1;


 VAR_11 = VAR_10->dd_data;
 VAR_12 = VAR_11->csk;

 VAR_9 = VAR_12->cdev->cdev2ppm(VAR_12->cdev);
 VAR_13 = VAR_12->cdev->csk_ddp_setup_pgidx(VAR_12, VAR_12->tid,
          VAR_9->tformat.pgsz_idx_dflt);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_3(VAR_2, VAR_3, VAR_5);
 if (VAR_13)
  return -VAR_1;


 VAR_8->task_idx_bits = (FUNC_0(VAR_6->session->cmds_max - 1)) + 1;

 FUNC_9(&VAR_12->callback_lock);
 VAR_12->user_data = VAR_6;
 VAR_8->chba = VAR_11->chba;
 VAR_8->cep = VAR_11;
 VAR_11->cconn = VAR_8;
 FUNC_10(&VAR_12->callback_lock);

 FUNC_2(VAR_6);
 FUNC_1(VAR_6);

 FUNC_6(1 << VAR_0,
  "cls 0x%p,0x%p, ep 0x%p, cconn 0x%p, csk 0x%p.\n",
  VAR_2, VAR_3, VAR_10, VAR_8, VAR_12);

 FUNC_5(VAR_7);

 return 0;
}
