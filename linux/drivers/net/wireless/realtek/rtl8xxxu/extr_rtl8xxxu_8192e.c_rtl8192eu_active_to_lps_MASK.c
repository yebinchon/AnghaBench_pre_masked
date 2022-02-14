
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_4 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_5 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct rtl8xxxu_priv *VAR_12)
{
 struct device *VAR_13 = &VAR_12->udev->dev;
 u8 VAR_14;
 u16 VAR_15;
 u32 VAR_16;
 int VAR_17, VAR_18;

 FUNC_5(VAR_12, VAR_9, 0xff);

 VAR_17 = 100;
 VAR_18 = -VAR_4;



 do {
  VAR_16 = FUNC_2(VAR_12, VAR_7);
  if (!VAR_16) {
   VAR_18 = 0;
   break;
  }
 } while (VAR_17--);

 if (!VAR_17) {
  FUNC_0(VAR_13, "Failed to flush TX queue\n");
  VAR_18 = -VAR_4;
  goto out;
 }


 VAR_14 = FUNC_3(VAR_12, VAR_8);
 VAR_14 &= ~VAR_10;
 FUNC_5(VAR_12, VAR_8, VAR_14);

 FUNC_6(2);


 VAR_14 = FUNC_3(VAR_12, VAR_8);
 VAR_14 &= ~VAR_11;
 FUNC_5(VAR_12, VAR_8, VAR_14);


 VAR_15 = FUNC_1(VAR_12, VAR_5);
 VAR_15 &= 0xff00;
 VAR_15 |= (VAR_1 | VAR_0);
 FUNC_4(VAR_12, VAR_5, VAR_15);

 VAR_15 = FUNC_1(VAR_12, VAR_5);
 VAR_15 &= ~VAR_2;
 FUNC_4(VAR_12, VAR_5, VAR_15);

 VAR_14 = FUNC_3(VAR_12, VAR_6);
 VAR_14 |= VAR_3;
 FUNC_5(VAR_12, VAR_6, VAR_14);

out:
 return VAR_18;
}
