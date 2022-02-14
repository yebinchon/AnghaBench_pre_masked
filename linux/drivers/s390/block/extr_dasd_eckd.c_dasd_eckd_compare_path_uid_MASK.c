
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_uid {int dummy; } ;
struct dasd_eckd_private {int uid; } ;
struct dasd_device {int dummy; } ;


 int FUNC_0 (struct dasd_eckd_private*) ;
 int FUNC_1 (struct dasd_device*,struct dasd_uid*) ;
 int FUNC_2 (struct dasd_uid*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct dasd_device *VAR_0,
          struct dasd_eckd_private *VAR_1)
{
 struct dasd_uid VAR_2;

 FUNC_0(VAR_1);
 FUNC_1(VAR_0, &VAR_2);

 return FUNC_2(&VAR_2, &VAR_1->uid, sizeof(struct dasd_uid));
}
