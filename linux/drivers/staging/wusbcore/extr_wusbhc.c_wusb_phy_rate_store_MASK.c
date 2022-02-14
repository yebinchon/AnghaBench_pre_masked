
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct wusbhc {scalar_t__ phy_rate; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,char*,scalar_t__*) ;
 struct wusbhc* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
       struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct wusbhc *VAR_6 = FUNC_1(VAR_2);
 uint8_t VAR_7;
 ssize_t VAR_8;

 VAR_8 = FUNC_0(VAR_4, "%hhu", &VAR_7);
 if (VAR_8 != 1)
  return -VAR_0;
 if (VAR_7 >= VAR_1)
  return -VAR_0;

 VAR_6->phy_rate = VAR_7;
 return VAR_5;
}
