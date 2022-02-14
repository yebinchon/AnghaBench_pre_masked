
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {TYPE_1__* discipline; } ;
struct ccw_device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* host_access_count ) (struct dasd_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*) ;
 struct dasd_device* FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (struct dasd_device*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (struct dasd_device*) ;
 struct ccw_device* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
   char *VAR_4)
{
 struct ccw_device *VAR_5 = FUNC_6(VAR_2);
 struct dasd_device *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 if (!VAR_6->discipline)
  VAR_7 = -VAR_0;
 else if (!VAR_6->discipline->host_access_count)
  VAR_7 = -VAR_1;
 else
  VAR_7 = VAR_6->discipline->host_access_count(VAR_6);

 FUNC_3(VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_4(VAR_4, "%d\n", VAR_7);
}
