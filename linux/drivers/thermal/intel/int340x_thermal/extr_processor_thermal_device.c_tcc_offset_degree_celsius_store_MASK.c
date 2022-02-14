
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (int ,int*) ;
 int VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
    struct device_attribute *VAR_5, const char *VAR_6,
    size_t VAR_7)
{
 u64 VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_2(VAR_2, &VAR_8);
 if (VAR_10)
  return VAR_10;

 if (!(VAR_8 & FUNC_0(30)))
  return -VAR_0;

 if (FUNC_1(VAR_6, 0, &VAR_9))
  return -VAR_1;

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_3 = VAR_9;

 return VAR_7;
}
