
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_rtc_info {int i2c; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pm860x_rtc_info* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, unsigned int VAR_3)
{
 struct pm860x_rtc_info *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3)
  FUNC_1(VAR_4->i2c, VAR_1, VAR_0, VAR_0);
 else
  FUNC_1(VAR_4->i2c, VAR_1, VAR_0, 0);
 return 0;
}
