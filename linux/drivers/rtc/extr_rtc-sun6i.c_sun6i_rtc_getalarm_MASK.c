
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun6i_rtc_dev {int alarm; int lock; scalar_t__ base; } ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sun6i_rtc_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct sun6i_rtc_dev *VAR_5 = FUNC_0(VAR_3);
 unsigned long VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 FUNC_3(&VAR_5->lock, VAR_6);
 VAR_8 = FUNC_1(VAR_5->base + VAR_1);
 VAR_7 = FUNC_1(VAR_5->base + VAR_2);
 FUNC_4(&VAR_5->lock, VAR_6);

 VAR_4->enabled = !!(VAR_8 & VAR_0);
 VAR_4->pending = !!(VAR_7 & VAR_0);
 FUNC_2(VAR_5->alarm, &VAR_4->time);

 return 0;
}
