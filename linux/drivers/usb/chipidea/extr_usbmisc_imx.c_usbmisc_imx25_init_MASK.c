
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_usbmisc_data {int index; int oc_pol_active_low; int oc_pol_configured; int dev; } ;
struct imx_usbmisc {int lock; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct imx_usbmisc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct imx_usbmisc_data *VAR_18)
{
 struct imx_usbmisc *VAR_19 = FUNC_0(VAR_18->dev);
 unsigned long VAR_20;
 u32 VAR_21 = 0;

 if (VAR_18->index > 1)
  return -VAR_0;

 FUNC_2(&VAR_19->lock, VAR_20);
 switch (VAR_18->index) {
 case 0:
  VAR_21 = FUNC_1(VAR_19->base);
  VAR_21 &= ~(VAR_16 | VAR_15);
  VAR_21 |= (VAR_1 & VAR_2) << VAR_17;
  VAR_21 |= (VAR_14 | VAR_13);





  if (VAR_18->oc_pol_configured && VAR_18->oc_pol_active_low)
   VAR_21 &= ~VAR_13;

  FUNC_4(VAR_21, VAR_19->base);
  break;
 case 1:
  VAR_21 = FUNC_1(VAR_19->base);
  VAR_21 &= ~(VAR_9 | VAR_8 | VAR_5);
  VAR_21 |= (VAR_3 & VAR_2) << VAR_10;
  VAR_21 |= (VAR_7 | VAR_6 | VAR_11 |
   VAR_12 | VAR_4);





  if (VAR_18->oc_pol_configured && VAR_18->oc_pol_active_low)
   VAR_21 &= ~VAR_6;

  FUNC_4(VAR_21, VAR_19->base);

  break;
 }
 FUNC_3(&VAR_19->lock, VAR_20);

 return 0;
}
