
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_usbmisc_data {int index; scalar_t__ disable_oc; int dev; } ;
struct imx_usbmisc {int lock; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct imx_usbmisc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct imx_usbmisc_data *VAR_4)
{
 struct imx_usbmisc *VAR_5 = FUNC_0(VAR_4->dev);
 unsigned long VAR_6;
 u32 VAR_7;

 switch (VAR_4->index) {
 case 0:
  VAR_7 = VAR_3;
  break;
 case 1:
  VAR_7 = VAR_1;
  break;
 case 2:
  VAR_7 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(&VAR_5->lock, VAR_6);
 if (VAR_4->disable_oc)
  VAR_7 = FUNC_1(VAR_5->base) | VAR_7;
 else
  VAR_7 = FUNC_1(VAR_5->base) & ~VAR_7;
 FUNC_4(VAR_7, VAR_5->base);
 FUNC_3(&VAR_5->lock, VAR_6);

 return 0;
}
