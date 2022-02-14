
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
typedef int u32 ;
typedef int u16 ;
struct rtl8xxxu_reg32val {int reg; int val; } ;
struct rtl8xxxu_priv {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int,int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct rtl8xxxu_priv *VAR_1,
      struct rtl8xxxu_reg32val *VAR_2)
{
 int VAR_3, VAR_4;
 u16 VAR_5;
 u32 VAR_6;

 for (VAR_3 = 0; ; VAR_3++) {
  VAR_5 = VAR_2[VAR_3].reg;
  VAR_6 = VAR_2[VAR_3].val;

  if (VAR_5 == 0xffff && VAR_6 == 0xffffffff)
   break;

  VAR_4 = FUNC_1(VAR_1, VAR_5, VAR_6);
  if (VAR_4 != sizeof(VAR_6)) {
   FUNC_0(&VAR_1->udev->dev,
     "Failed to initialize PHY\n");
   return -VAR_0;
  }
  FUNC_2(1);
 }

 return 0;
}
