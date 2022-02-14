
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct rtc_time {int dummy; } ;
struct mxc_rtc_data {scalar_t__ ioaddr; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct mxc_rtc_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mxc_rtc_data*) ;
 int FUNC_2 (struct device*,scalar_t__) ;
 int FUNC_3 (struct mxc_rtc_data*) ;
 int FUNC_4 (struct rtc_time*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct mxc_rtc_data *VAR_3 = FUNC_0(VAR_1);
 time64_t VAR_4 = FUNC_4(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_5(VAR_4, VAR_3->ioaddr + VAR_0);
 FUNC_2(VAR_1, VAR_3->ioaddr);
 return FUNC_3(VAR_3);
}
