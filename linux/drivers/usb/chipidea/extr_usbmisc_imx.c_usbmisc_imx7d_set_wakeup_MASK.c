
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_usbmisc_data {int dev; } ;
struct imx_usbmisc {int lock; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct imx_usbmisc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6
 (struct imx_usbmisc_data *VAR_4, bool VAR_5)
{
 struct imx_usbmisc *VAR_6 = FUNC_1(VAR_4->dev);
 unsigned long VAR_7;
 u32 VAR_8;
 u32 VAR_9 = (VAR_2 |
  VAR_1 | VAR_0);

 FUNC_3(&VAR_6->lock, VAR_7);
 VAR_8 = FUNC_2(VAR_6->base);
 if (VAR_5) {
  FUNC_5(VAR_8 | VAR_9, VAR_6->base);
 } else {
  if (VAR_8 & VAR_3)
   FUNC_0(VAR_4->dev, "wakeup int\n");
  FUNC_5(VAR_8 & ~VAR_9, VAR_6->base);
 }
 FUNC_4(&VAR_6->lock, VAR_7);

 return 0;
}
