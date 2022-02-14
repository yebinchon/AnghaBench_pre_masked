
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rtl8xxxu_priv {scalar_t__ rtl_chip; TYPE_2__* fops; TYPE_1__* udev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int (* reset_8051 ) (struct rtl8xxxu_priv*) ;} ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_4 (struct rtl8xxxu_priv*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct rtl8xxxu_priv *VAR_8)
{
 struct device *VAR_9 = &VAR_8->udev->dev;
 int VAR_10 = 0, VAR_11;
 u32 VAR_12;


 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_12 = FUNC_1(VAR_8, VAR_5);
  if (VAR_12 & VAR_1)
   break;
 }

 if (VAR_11 == VAR_7) {
  FUNC_0(VAR_9, "Firmware checksum poll timed out\n");
  VAR_10 = -VAR_0;
  goto exit;
 }

 VAR_12 = FUNC_1(VAR_8, VAR_5);
 VAR_12 |= VAR_2;
 VAR_12 &= ~VAR_3;
 FUNC_2(VAR_8, VAR_5, VAR_12);





 VAR_8->fops->reset_8051(VAR_8);


 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_12 = FUNC_1(VAR_8, VAR_5);
  if (VAR_12 & VAR_3)
   break;

  FUNC_5(100);
 }

 if (VAR_11 == VAR_7) {
  FUNC_0(VAR_9, "Firmware failed to start\n");
  VAR_10 = -VAR_0;
  goto exit;
 }




 if (VAR_8->rtl_chip == VAR_6)
  FUNC_3(VAR_8, VAR_4, 0x0f);
exit:
 return VAR_10;
}
