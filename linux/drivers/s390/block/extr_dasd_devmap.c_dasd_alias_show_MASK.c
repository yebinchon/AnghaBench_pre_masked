
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_uid {scalar_t__ type; } ;
struct dasd_device {TYPE_1__* discipline; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_uid ) (struct dasd_device*,struct dasd_uid*) ;} ;


 scalar_t__ FUNC_0 (struct dasd_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dasd_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct dasd_device*,struct dasd_uid*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
          struct device_attribute *VAR_3, char *VAR_4)
{
 struct dasd_device *VAR_5;
 struct dasd_uid VAR_6;

 VAR_5 = FUNC_1(FUNC_5(VAR_2));
 if (FUNC_0(VAR_5))
  return FUNC_3(VAR_4, "0\n");

 if (VAR_5->discipline && VAR_5->discipline->get_uid &&
     !VAR_5->discipline->get_uid(VAR_5, &VAR_6)) {
  if (VAR_6.type == VAR_0 ||
      VAR_6.type == VAR_1) {
   FUNC_2(VAR_5);
   return FUNC_3(VAR_4, "1\n");
  }
 }
 FUNC_2(VAR_5);

 return FUNC_3(VAR_4, "0\n");
}
