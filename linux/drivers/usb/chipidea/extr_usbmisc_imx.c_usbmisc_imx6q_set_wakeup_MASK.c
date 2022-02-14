
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_usbmisc_data {int index; int dev; } ;
struct imx_usbmisc {int lock; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct imx_usbmisc* FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6
 (struct imx_usbmisc_data *VAR_5, bool VAR_6)
{
 struct imx_usbmisc *VAR_7 = FUNC_0(VAR_5->dev);
 unsigned long VAR_8;
 u32 VAR_9;
 u32 VAR_10 = (VAR_3 |
  VAR_2 | VAR_1);
 int VAR_11 = 0;

 if (VAR_5->index > 3)
  return -VAR_0;

 FUNC_3(&VAR_7->lock, VAR_8);
 VAR_9 = FUNC_2(VAR_7->base + VAR_5->index * 4);
 if (VAR_6) {
  VAR_9 |= VAR_10;
 } else {
  if (VAR_9 & VAR_4)
   FUNC_1("wakeup int at ci_hdrc.%d\n", VAR_5->index);
  VAR_9 &= ~VAR_10;
 }
 FUNC_5(VAR_9, VAR_7->base + VAR_5->index * 4);
 FUNC_4(&VAR_7->lock, VAR_8);

 return VAR_11;
}
