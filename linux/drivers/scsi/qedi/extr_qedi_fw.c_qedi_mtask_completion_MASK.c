
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hdr_first_byte; } ;
struct TYPE_6__ {TYPE_1__ common; } ;
struct TYPE_7__ {TYPE_2__ iscsi_hdr; } ;
union iscsi_cqe {TYPE_3__ cqe_common; } ;
typedef int uint16_t ;
typedef int u32 ;
struct qedi_ctx {int dbg_ctx; } ;
struct qedi_conn {TYPE_4__* cls_conn; } ;
struct iscsi_task {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct TYPE_8__ {struct iscsi_conn* dd_data; } ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qedi_ctx*,union iscsi_cqe*,struct iscsi_task*,struct qedi_conn*) ;
 int FUNC_2 (struct qedi_ctx*,union iscsi_cqe*,struct iscsi_task*,struct qedi_conn*) ;
 int FUNC_3 (struct qedi_ctx*,union iscsi_cqe*,struct iscsi_task*,struct qedi_conn*,int ) ;
 int FUNC_4 (struct qedi_ctx*,union iscsi_cqe*,struct iscsi_task*,struct qedi_conn*) ;
 int FUNC_5 (struct qedi_ctx*,union iscsi_cqe*,struct iscsi_task*,struct qedi_conn*) ;
 int FUNC_6 (struct qedi_ctx*,union iscsi_cqe*,struct iscsi_task*,struct iscsi_conn*) ;

__attribute__((used)) static void FUNC_7(struct qedi_ctx *VAR_0,
      union iscsi_cqe *VAR_1,
      struct iscsi_task *VAR_2,
      struct qedi_conn *VAR_3, uint16_t VAR_4)
{
 struct iscsi_conn *VAR_5;
 u32 VAR_6;

 VAR_6 = VAR_1->cqe_common.iscsi_hdr.common.hdr_first_byte;
 VAR_5 = VAR_3->cls_conn->dd_data;

 switch (VAR_6) {
 case 130:
 case 134:
  FUNC_6(VAR_0, VAR_1, VAR_2, VAR_5);
  break;
 case 133:
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 129:
  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 132:
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 131:
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 default:
  FUNC_0(&VAR_0->dbg_ctx, "unknown opcode\n");
 }
}
