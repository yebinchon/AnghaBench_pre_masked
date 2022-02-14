
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adp5520_bl {int cached_daylight_max; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char const*,size_t,int ) ;
 struct adp5520_bl* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
   struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 struct adp5520_bl *VAR_5 = FUNC_1(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, 10, &VAR_5->cached_daylight_max);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_0(VAR_1, VAR_3, VAR_4, VAR_0);
}
