
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3533_bl {int lm3533; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct lm3533_bl* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (struct lm3533_bl*) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct lm3533_bl *VAR_6 = FUNC_0(VAR_2);
 int VAR_7 = FUNC_2(VAR_6);
 int VAR_8;
 u8 VAR_9;
 u8 VAR_10;
 int VAR_11;

 if (FUNC_1(VAR_4, 0, &VAR_8))
  return -VAR_0;

 VAR_10 = 1 << (2 * VAR_7);

 if (VAR_8)
  VAR_9 = VAR_10;
 else
  VAR_9 = 0;

 VAR_11 = FUNC_3(VAR_6->lm3533, VAR_1, VAR_9,
         VAR_10);
 if (VAR_11)
  return VAR_11;

 return VAR_5;
}
