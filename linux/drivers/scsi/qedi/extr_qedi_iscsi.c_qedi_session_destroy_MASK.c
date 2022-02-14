
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_ctx {int dummy; } ;
struct iscsi_session {int dummy; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct Scsi_Host {int dummy; } ;


 struct qedi_ctx* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct iscsi_cls_session*) ;
 struct Scsi_Host* FUNC_2 (struct iscsi_cls_session*) ;
 int FUNC_3 (struct qedi_ctx*,struct iscsi_session*) ;

__attribute__((used)) static void FUNC_4(struct iscsi_cls_session *VAR_0)
{
 struct iscsi_session *VAR_1 = VAR_0->dd_data;
 struct Scsi_Host *VAR_2 = FUNC_2(VAR_0);
 struct qedi_ctx *VAR_3 = FUNC_0(VAR_2);

 FUNC_3(VAR_3, VAR_1);
 FUNC_1(VAR_0);
}
