
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlnx_rtc_dev {scalar_t__ reg_base; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct xlnx_rtc_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, struct rtc_time *VAR_5)
{
 u32 VAR_6;
 unsigned long VAR_7;
 struct xlnx_rtc_dev *VAR_8 = FUNC_0(VAR_4);

 VAR_6 = FUNC_1(VAR_8->reg_base + VAR_2);

 if (VAR_6 & VAR_1) {




  FUNC_2(FUNC_1(VAR_8->reg_base + VAR_0), VAR_5);
 } else {







  VAR_7 = FUNC_1(VAR_8->reg_base + VAR_3) - 1;
  FUNC_2(VAR_7, VAR_5);
 }

 return 0;
}
