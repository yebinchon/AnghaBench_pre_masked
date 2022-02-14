
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {TYPE_1__* discipline; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int VAR_0 ;
 struct dasd_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (char*,int ,char*,...) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct dasd_device *VAR_4;
 ssize_t VAR_5;

 VAR_4 = FUNC_1(FUNC_4(VAR_1));
 if (FUNC_0(VAR_4))
  goto out;
 else if (!VAR_4->discipline) {
  FUNC_2(VAR_4);
  goto out;
 } else {
  VAR_5 = FUNC_3(VAR_3, VAR_0, "%s\n",
          VAR_4->discipline->name);
  FUNC_2(VAR_4);
  return VAR_5;
 }
out:
 VAR_5 = FUNC_3(VAR_3, VAR_0, "none\n");
 return VAR_5;
}
