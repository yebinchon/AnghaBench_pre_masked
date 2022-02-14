
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_rtc_drv {int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct sirfsoc_rtc_drv* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (struct sirfsoc_rtc_drv*,int ) ;
 int FUNC_2 (struct sirfsoc_rtc_drv*,int ,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2,
  unsigned int VAR_3)
{
 unsigned long VAR_4 = 0x0;
 struct sirfsoc_rtc_drv *VAR_5;

 VAR_5 = FUNC_0(VAR_2);

 FUNC_3(&VAR_5->lock);

 VAR_4 = FUNC_1(VAR_5, VAR_0);
 if (VAR_3)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;

 FUNC_2(VAR_5, VAR_0, VAR_4);

 FUNC_4(&VAR_5->lock);

 return 0;

}
