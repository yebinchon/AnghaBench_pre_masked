
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {int flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (int ,int *) ;
 struct dasd_device* FUNC_2 (int ) ;
 int FUNC_3 (struct dasd_device*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct dasd_device *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_2(FUNC_5(VAR_3));
 if (FUNC_0(VAR_7))
  return -VAR_2;
 if (FUNC_4("reset", VAR_5))
  FUNC_1(VAR_0, &VAR_7->flags);
 else
  VAR_8 = -VAR_1;
 FUNC_3(VAR_7);

 if (VAR_8)
  return VAR_8;
 else
  return VAR_6;
}
