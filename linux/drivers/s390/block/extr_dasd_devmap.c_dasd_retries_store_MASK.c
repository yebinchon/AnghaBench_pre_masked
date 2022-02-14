
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {unsigned long default_retries; } ;
typedef size_t ssize_t ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 struct dasd_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dasd_device*) ;
 scalar_t__ FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct dasd_device *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_1(FUNC_4(VAR_3));
 if (FUNC_0(VAR_7))
  return -VAR_2;

 if ((FUNC_3(VAR_5, 10, &VAR_8) != 0) ||
     (VAR_8 > VAR_0)) {
  FUNC_2(VAR_7);
  return -VAR_1;
 }

 if (VAR_8)
  VAR_7->default_retries = VAR_8;

 FUNC_2(VAR_7);
 return VAR_6;
}
