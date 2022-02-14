
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct rtc_time {int dummy; } ;
struct mxc_rtc_data {int clk; scalar_t__ ioaddr; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mxc_rtc_data* FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int const,struct rtc_time*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct mxc_rtc_data *VAR_3 = FUNC_2(VAR_1);
 const int VAR_4 = FUNC_1(VAR_3->clk);

 if (!VAR_4) {
  const time64_t VAR_5 = FUNC_3(VAR_3->ioaddr + VAR_0);

  FUNC_4(VAR_5, VAR_2);
  FUNC_0(VAR_3->clk);
  return 0;
 }
 return VAR_4;
}
