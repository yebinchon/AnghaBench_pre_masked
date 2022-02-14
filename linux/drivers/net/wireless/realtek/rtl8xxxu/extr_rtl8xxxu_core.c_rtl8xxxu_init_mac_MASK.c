
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl8xxxu_reg8val {int reg; int val; } ;
struct rtl8xxxu_priv {scalar_t__ rtl_chip; TYPE_1__* udev; TYPE_2__* fops; } ;
struct TYPE_4__ {struct rtl8xxxu_reg8val* mactable; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int,int) ;

__attribute__((used)) static int
FUNC_2(struct rtl8xxxu_priv *VAR_4)
{
 struct rtl8xxxu_reg8val *VAR_5 = VAR_4->fops->mactable;
 int VAR_6, VAR_7;
 u16 VAR_8;
 u8 VAR_9;

 for (VAR_6 = 0; ; VAR_6++) {
  VAR_8 = VAR_5[VAR_6].reg;
  VAR_9 = VAR_5[VAR_6].val;

  if (VAR_8 == 0xffff && VAR_9 == 0xff)
   break;

  VAR_7 = FUNC_1(VAR_4, VAR_8, VAR_9);
  if (VAR_7 != 1) {
   FUNC_0(&VAR_4->udev->dev,
     "Failed to initialize MAC "
     "(reg: %04x, val %02x)\n", VAR_8, VAR_9);
   return -VAR_0;
  }
 }

 if (VAR_4->rtl_chip != VAR_3 && VAR_4->rtl_chip != VAR_2)
  FUNC_1(VAR_4, VAR_1, 0x0a);

 return 0;
}
