
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlnx_rtc_dev {unsigned long calibval; scalar_t__ reg_base; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct xlnx_rtc_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rtc_time*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5, struct rtc_time *VAR_6)
{
 struct xlnx_rtc_dev *VAR_7 = FUNC_0(VAR_5);
 unsigned long VAR_8;






 VAR_8 = FUNC_1(VAR_6) + 1;





 VAR_7->calibval &= VAR_0;
 FUNC_2(VAR_7->calibval, (VAR_7->reg_base + VAR_1));

 FUNC_2(VAR_8, VAR_7->reg_base + VAR_4);
 FUNC_2(VAR_2, VAR_7->reg_base + VAR_3);

 return 0;
}
