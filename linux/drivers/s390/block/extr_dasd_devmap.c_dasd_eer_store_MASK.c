
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 size_t FUNC_1 (struct dasd_device*) ;
 struct dasd_device* FUNC_2 (int ) ;
 int FUNC_3 (struct dasd_device*) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (struct dasd_device*) ;
 scalar_t__ FUNC_6 (char const*,int ,unsigned int*) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct dasd_device *VAR_5;
 unsigned int VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_2(FUNC_7(VAR_1));
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 if (FUNC_6(VAR_3, 0, &VAR_6) || VAR_6 > 1)
  return -VAR_0;

 if (VAR_6)
  VAR_7 = FUNC_4(VAR_5);
 else
  FUNC_3(VAR_5);

 FUNC_5(VAR_5);

 return VAR_7 ? : VAR_4;
}
