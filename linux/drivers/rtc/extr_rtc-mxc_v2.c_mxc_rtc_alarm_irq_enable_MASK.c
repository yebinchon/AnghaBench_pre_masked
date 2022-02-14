
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxc_rtc_data {int dummy; } ;
struct device {int dummy; } ;


 struct mxc_rtc_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mxc_rtc_data*,unsigned int) ;
 int FUNC_2 (struct mxc_rtc_data*) ;
 int FUNC_3 (struct mxc_rtc_data*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, unsigned int VAR_1)
{
 struct mxc_rtc_data *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = FUNC_2(VAR_2);

 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_2, VAR_1);
 return FUNC_3(VAR_2);
}
