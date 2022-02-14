
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_rtc_drv {int lock; } ;
struct rtc_wkalrm {int time; scalar_t__ enabled; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 struct sirfsoc_rtc_drv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *,unsigned long*) ;
 unsigned long FUNC_3 (struct sirfsoc_rtc_drv*,int ) ;
 int FUNC_4 (struct sirfsoc_rtc_drv*,int ,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_5,
  struct rtc_wkalrm *VAR_6)
{
 unsigned long VAR_7, VAR_8;
 struct sirfsoc_rtc_drv *VAR_9;
 VAR_9 = FUNC_0(VAR_5);

 if (VAR_6->enabled) {
  FUNC_2(&(VAR_6->time), &VAR_8);

  FUNC_5(&VAR_9->lock);

  VAR_7 = FUNC_3(VAR_9, VAR_2);
  if (VAR_7 & VAR_4) {




   FUNC_1(VAR_5, "An old alarm was set, will be replaced by a new one\n");
  }

  FUNC_4(VAR_9, VAR_0, VAR_8 << VAR_1);
  VAR_7 &= ~0x07;




  VAR_7 |= VAR_3;

  VAR_7 |= VAR_4;
  FUNC_4(VAR_9, VAR_2, VAR_7);

  FUNC_6(&VAR_9->lock);
 } else {





  FUNC_5(&VAR_9->lock);

  VAR_7 = FUNC_3(VAR_9, VAR_2);
  if (VAR_7 & VAR_4) {

   VAR_7 &= ~0x07;

   VAR_7 |= (VAR_3);

   VAR_7 &= ~(VAR_4);

   FUNC_4(VAR_9, VAR_2,
        VAR_7);
  }

  FUNC_6(&VAR_9->lock);
 }

 return 0;
}
