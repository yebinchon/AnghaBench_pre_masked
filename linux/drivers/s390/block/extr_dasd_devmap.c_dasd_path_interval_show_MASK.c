
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {int path_interval; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int VAR_1 ;
 struct dasd_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (char*,int ,char*,int ) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_2,
   struct device_attribute *VAR_3, char *VAR_4)
{
 struct dasd_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(FUNC_4(VAR_2));
 if (FUNC_0(VAR_5))
  return -VAR_0;
 VAR_6 = FUNC_3(VAR_4, VAR_1, "%lu\n", VAR_5->path_interval);
 FUNC_2(VAR_5);
 return VAR_6;
}
