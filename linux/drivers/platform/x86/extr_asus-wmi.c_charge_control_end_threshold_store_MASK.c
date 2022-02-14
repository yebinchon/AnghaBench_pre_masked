
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int*) ;
 int VAR_3 ;
 int FUNC_1 (char const*,int,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
        struct device_attribute *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 VAR_9 = FUNC_1(VAR_6, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 < 0 || VAR_8 > 100)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_0, VAR_8, &VAR_10);
 if (VAR_9)
  return VAR_9;

 if (VAR_10 != 1)
  return -VAR_2;




 VAR_3 = VAR_8;
 return VAR_7;
}
