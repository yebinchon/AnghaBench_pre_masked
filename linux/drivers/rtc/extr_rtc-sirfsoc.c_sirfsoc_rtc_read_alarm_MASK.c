
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_rtc_drv {int overflow_rtc; int lock; } ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sirfsoc_rtc_drv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rtc_wkalrm*,int ,int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (struct sirfsoc_rtc_drv*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6,
  struct rtc_wkalrm *VAR_7)
{
 unsigned long VAR_8, VAR_9;
 struct sirfsoc_rtc_drv *VAR_10;

 VAR_10 = FUNC_0(VAR_6);

 FUNC_4(&VAR_10->lock);

 VAR_9 = FUNC_3(VAR_10, VAR_2);

 VAR_8 = FUNC_3(VAR_10, VAR_1);
 FUNC_1(VAR_7, 0, sizeof(struct rtc_wkalrm));






 if (VAR_9 > VAR_8)
  FUNC_2((VAR_10->overflow_rtc + 1)
    << (VAR_0 - VAR_3)
    | VAR_8 >> VAR_3, &(VAR_7->time));
 else
  FUNC_2(VAR_10->overflow_rtc
    << (VAR_0 - VAR_3)
    | VAR_8 >> VAR_3, &(VAR_7->time));
 if (FUNC_3(VAR_10, VAR_4) & VAR_5)
  VAR_7->enabled = 1;

 FUNC_5(&VAR_10->lock);

 return 0;
}
