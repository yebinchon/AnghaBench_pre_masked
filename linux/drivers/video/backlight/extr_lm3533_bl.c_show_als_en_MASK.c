
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
 int FUNC_1 (struct lm3533_bl*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct lm3533_bl *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = FUNC_1(VAR_5);
 u8 VAR_7;
 u8 VAR_8;
 bool VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_5->lm3533, VAR_0, &VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_8 = 1 << (2 * VAR_6);
 VAR_9 = VAR_7 & VAR_8;

 return FUNC_3(VAR_4, VAR_1, "%d\n", VAR_9);
}
