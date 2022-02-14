
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_bl {int cb; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct lm3533_bl* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct lm3533_bl *VAR_5 = FUNC_0(VAR_1);
 u8 VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_3, 0, &VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_2(&VAR_5->cb, VAR_6);
 if (VAR_7)
  return VAR_7;

 return VAR_4;
}
