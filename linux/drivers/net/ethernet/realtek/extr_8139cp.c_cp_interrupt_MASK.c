
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct cp_private {int lock; int pdev; int mii_if; int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct cp_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ) ;
 int VAR_18 ;
 int FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (struct net_device*,char*,int,int) ;
 struct cp_private* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct cp_private*,int ,struct net_device*,char*,int,int ,int) ;
 int FUNC_12 (struct cp_private*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ,int ,int*) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static irqreturn_t FUNC_19 (int VAR_19, void *VAR_20)
{
 struct net_device *VAR_21 = VAR_20;
 struct cp_private *VAR_22;
 int VAR_23 = 0;
 u16 VAR_24;
 u16 VAR_25;

 if (FUNC_18(VAR_21 == ((void*)0)))
  return VAR_2;
 VAR_22 = FUNC_10(VAR_21);

 FUNC_16(&VAR_22->lock);

 VAR_25 = FUNC_3(VAR_3);
 if (!VAR_25)
  goto out_unlock;

 VAR_24 = FUNC_3(VAR_4);
 if (!VAR_24 || (VAR_24 == 0xFFFF))
  goto out_unlock;

 VAR_23 = 1;

 FUNC_11(VAR_22, VAR_18, VAR_21, "intr, status %04x cmd %02x cpcmd %04x\n",
    VAR_24, FUNC_4(VAR_0), FUNC_3(VAR_1));

 FUNC_5(VAR_4, VAR_24 & ~VAR_17);


 if (FUNC_18(!FUNC_13(VAR_21))) {
  FUNC_5(VAR_3, 0);
  goto out_unlock;
 }

 if (VAR_24 & (VAR_11 | VAR_9 | VAR_8 | VAR_10))
  if (FUNC_8(&VAR_22->napi)) {
   FUNC_6(VAR_3, VAR_16);
   FUNC_1(&VAR_22->napi);
  }

 if (VAR_24 & (VAR_15 | VAR_14 | VAR_13 | VAR_12))
  FUNC_2(VAR_22);
 if (VAR_24 & VAR_5)
  FUNC_7(&VAR_22->mii_if, FUNC_12(VAR_22), 0);


 if (VAR_24 & VAR_7) {
  u16 VAR_26;

  FUNC_14(VAR_22->pdev, VAR_6, &VAR_26);
  FUNC_15(VAR_22->pdev, VAR_6, VAR_26);
  FUNC_9(VAR_21, "PCI bus error, status=%04x, PCI status=%04x\n",
      VAR_24, VAR_26);


 }

out_unlock:
 FUNC_17(&VAR_22->lock);

 return FUNC_0(VAR_23);
}
