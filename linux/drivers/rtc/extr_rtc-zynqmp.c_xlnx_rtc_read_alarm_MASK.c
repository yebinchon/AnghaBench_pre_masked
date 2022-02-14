
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlnx_rtc_dev {scalar_t__ reg_base; } ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct xlnx_rtc_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct xlnx_rtc_dev *VAR_5 = FUNC_0(VAR_3);

 FUNC_2(FUNC_1(VAR_5->reg_base + VAR_0), &VAR_4->time);
 VAR_4->enabled = FUNC_1(VAR_5->reg_base + VAR_2) & VAR_1;

 return 0;
}
