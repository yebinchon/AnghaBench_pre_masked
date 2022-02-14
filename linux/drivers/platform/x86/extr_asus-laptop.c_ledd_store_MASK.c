
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_laptop {scalar_t__ ledd_status; int handle; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct asus_laptop* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct asus_laptop *VAR_6 = FUNC_0(VAR_2);
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_4, 0, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 if (FUNC_3(VAR_6->handle, VAR_1, VAR_8)) {
  FUNC_2("LED display write failed\n");
  return -VAR_0;
 }

 VAR_6->ledd_status = (u32) VAR_8;
 return VAR_5;
}
