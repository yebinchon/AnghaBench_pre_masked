
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtl8xxxu_rfregval {int reg; int val; } ;
struct rtl8xxxu_priv {TYPE_1__* udev; } ;
typedef enum rtl8xxxu_rfpath { ____Placeholder_rtl8xxxu_rfpath } rtl8xxxu_rfpath ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct rtl8xxxu_priv *VAR_1,
     struct rtl8xxxu_rfregval *VAR_2,
     enum rtl8xxxu_rfpath VAR_3)
{
 int VAR_4, VAR_5;
 u8 VAR_6;
 u32 VAR_7;

 for (VAR_4 = 0; ; VAR_4++) {
  VAR_6 = VAR_2[VAR_4].reg;
  VAR_7 = VAR_2[VAR_4].val;

  if (VAR_6 == 0xff && VAR_7 == 0xffffffff)
   break;

  switch (VAR_6) {
  case 0xfe:
   FUNC_2(50);
   continue;
  case 0xfd:
   FUNC_1(5);
   continue;
  case 0xfc:
   FUNC_1(1);
   continue;
  case 0xfb:
   FUNC_4(50);
   continue;
  case 0xfa:
   FUNC_4(5);
   continue;
  case 0xf9:
   FUNC_4(1);
   continue;
  }

  VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_6, VAR_7);
  if (VAR_5) {
   FUNC_0(&VAR_1->udev->dev,
     "Failed to initialize RF\n");
   return -VAR_0;
  }
  FUNC_4(1);
 }

 return 0;
}
