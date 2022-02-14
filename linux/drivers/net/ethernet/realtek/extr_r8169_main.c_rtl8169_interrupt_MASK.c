
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct rtl8169_private {int irq_mask; scalar_t__ mac_version; int napi; TYPE_1__ wk; int dev; int phydev; int irq_enabled; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rtl8169_private*,int) ;
 int FUNC_5 (struct rtl8169_private*) ;
 int FUNC_6 (struct rtl8169_private*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_7, void *VAR_8)
{
 struct rtl8169_private *VAR_9 = VAR_8;
 u32 VAR_10 = FUNC_5(VAR_9);

 if (!VAR_9->irq_enabled || (VAR_10 & 0xffff) == 0xffff ||
     !(VAR_10 & VAR_9->irq_mask))
  return VAR_1;

 if (FUNC_8(VAR_10 & VAR_6)) {
  FUNC_3(VAR_9->dev);
  goto out;
 }

 if (VAR_10 & VAR_2)
  FUNC_2(VAR_9->phydev);

 if (FUNC_8(VAR_10 & VAR_5 &&
     VAR_9->mac_version == VAR_4)) {
  FUNC_1(VAR_9->dev);

  FUNC_7(VAR_3, VAR_9->wk.flags);
 }

 FUNC_6(VAR_9);
 FUNC_0(&VAR_9->napi);
out:
 FUNC_4(VAR_9, VAR_10);

 return VAR_0;
}
