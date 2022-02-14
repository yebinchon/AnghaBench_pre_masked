
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_ctx {int dummy; } ;
struct qedi_conn {int dummy; } ;
struct iscsi_conn {struct qedi_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct iscsi_cls_conn*) ;
 int FUNC_1 (struct iscsi_cls_conn*) ;
 struct qedi_ctx* FUNC_2 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_3 (int ) ;
 int FUNC_4 (struct qedi_ctx*,struct qedi_conn*) ;

__attribute__((used)) static void FUNC_5(struct iscsi_cls_conn *VAR_0)
{
 struct iscsi_conn *VAR_1 = VAR_0->dd_data;
 struct qedi_conn *VAR_2 = VAR_1->dd_data;
 struct Scsi_Host *VAR_3;
 struct qedi_ctx *VAR_4;

 VAR_3 = FUNC_3(FUNC_1(VAR_0));
 VAR_4 = FUNC_2(VAR_3);

 FUNC_4(VAR_4, VAR_2);
 FUNC_0(VAR_0);
}
