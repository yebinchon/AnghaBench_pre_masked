
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_uid {char* vendor; } ;
struct dasd_device {TYPE_1__* discipline; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_uid ) (struct dasd_device*,struct dasd_uid*) ;} ;


 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int VAR_0 ;
 struct dasd_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (char*,int ,char*,char*) ;
 int FUNC_4 (struct dasd_device*,struct dasd_uid*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct dasd_device *VAR_4;
 struct dasd_uid VAR_5;
 char *VAR_6;

 VAR_4 = FUNC_1(FUNC_5(VAR_1));
 VAR_6 = "";
 if (FUNC_0(VAR_4))
  return FUNC_3(VAR_3, VAR_0, "%s\n", VAR_6);

 if (VAR_4->discipline && VAR_4->discipline->get_uid &&
     !VAR_4->discipline->get_uid(VAR_4, &VAR_5))
   VAR_6 = VAR_5.vendor;

 FUNC_2(VAR_4);

 return FUNC_3(VAR_3, VAR_0, "%s\n", VAR_6);
}
