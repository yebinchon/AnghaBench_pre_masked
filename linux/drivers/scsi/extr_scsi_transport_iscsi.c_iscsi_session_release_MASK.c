
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cls_session {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct iscsi_cls_session*,char*) ;
 struct iscsi_cls_session* FUNC_1 (struct device*) ;
 struct Scsi_Host* FUNC_2 (struct iscsi_cls_session*) ;
 int FUNC_3 (struct iscsi_cls_session*) ;
 int FUNC_4 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct iscsi_cls_session *VAR_1 = FUNC_1(VAR_0);
 struct Scsi_Host *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_4(VAR_2);
 FUNC_0(VAR_1, "Completing session release\n");
 FUNC_3(VAR_1);
}
