
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlnx_rtc_dev {scalar_t__ reg_base; } ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct xlnx_rtc_dev* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct device*,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 struct xlnx_rtc_dev *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;

 VAR_4 = FUNC_1(&VAR_2->time);

 FUNC_2((u32)VAR_4, (VAR_3->reg_base + VAR_0));

 FUNC_3(VAR_1, VAR_2->enabled);

 return 0;
}
