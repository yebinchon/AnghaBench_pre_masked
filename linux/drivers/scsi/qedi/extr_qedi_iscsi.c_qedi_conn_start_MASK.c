
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_ctx {int dummy; } ;
struct qedi_conn {scalar_t__ abrt_conn; int flags; struct qedi_ctx* qedi; } ;
struct iscsi_conn {struct qedi_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct iscsi_conn*,char*) ;
 int FUNC_2 (struct iscsi_cls_conn*) ;
 int FUNC_3 (struct qedi_ctx*,struct qedi_conn*) ;

__attribute__((used)) static int FUNC_4(struct iscsi_cls_conn *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_3->dd_data;
 struct qedi_conn *VAR_5 = VAR_4->dd_data;
 struct qedi_ctx *VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->qedi;

 VAR_7 = FUNC_3(VAR_6, VAR_5);
 if (VAR_7) {
  FUNC_1(VAR_1, VAR_4,
      "conn_start: FW offload conn failed.\n");
  VAR_7 = -VAR_0;
  goto start_err;
 }

 FUNC_0(VAR_2, &VAR_5->flags);
 VAR_5->abrt_conn = 0;

 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7) {
  FUNC_1(VAR_1, VAR_4,
      "iscsi_conn_start: FW offload conn failed!!\n");
 }

start_err:
 return VAR_7;
}
