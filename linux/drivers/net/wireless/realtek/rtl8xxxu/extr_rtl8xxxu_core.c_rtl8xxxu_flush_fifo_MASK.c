
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl8xxxu_priv {TYPE_1__* udev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ,int ) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_5 (struct rtl8xxxu_priv*,int ,int) ;

int FUNC_6(struct rtl8xxxu_priv *VAR_7)
{
 struct device *VAR_8 = &VAR_7->udev->dev;
 u32 VAR_9;
 int VAR_10, VAR_11;

 FUNC_5(VAR_7, VAR_4, 0xff);

 VAR_9 = FUNC_2(VAR_7, VAR_3);
 VAR_9 |= VAR_5;
 FUNC_4(VAR_7, VAR_3, VAR_9);

 VAR_10 = 100;
 VAR_11 = -VAR_0;

 do {
  VAR_9 = FUNC_2(VAR_7, VAR_3);
  if (VAR_9 & VAR_6) {
   VAR_11 = 0;
   break;
  }
 } while (VAR_10--);

 FUNC_3(VAR_7, VAR_2, 0);
 FUNC_4(VAR_7, VAR_1, 0x80000000);
 FUNC_1(2);

 if (!VAR_10)
  FUNC_0(VAR_8, "Failed to flush FIFO\n");

 return VAR_11;
}
