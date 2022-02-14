
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct de_private {int dev; int pdev; int lock; int tx_tail; int tx_head; int rx_tail; } ;
typedef int irqreturn_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct de_private*,int) ;
 int FUNC_1 (struct de_private*) ;
 int FUNC_2 (struct de_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_16 ;
 int FUNC_5 (int ,char*,int,int ) ;
 struct de_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct de_private*,int ,struct net_device*,char*,int,int,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_12 (int VAR_17, void *VAR_18)
{
 struct net_device *VAR_19 = VAR_18;
 struct de_private *VAR_20 = FUNC_6(VAR_19);
 u32 VAR_21;

 VAR_21 = FUNC_3(VAR_7);
 if ((!(VAR_21 & (VAR_3|VAR_2))) || (VAR_21 == 0xFFFF))
  return VAR_1;

 FUNC_7(VAR_20, VAR_16, VAR_19, "intr, status %08x mode %08x desc %u/%u/%u\n",
    VAR_21, FUNC_3(VAR_6),
    VAR_20->rx_tail, VAR_20->tx_head, VAR_20->tx_tail);

 FUNC_4(VAR_7, VAR_21);

 if (VAR_21 & (VAR_12 | VAR_11)) {
  FUNC_1(VAR_20);
  if (VAR_21 & VAR_11)
   FUNC_4(VAR_13, VAR_8);
 }

 FUNC_10(&VAR_20->lock);

 if (VAR_21 & (VAR_15 | VAR_14))
  FUNC_2(VAR_20);

 if (VAR_21 & (VAR_5 | VAR_4))
  FUNC_0(VAR_20, VAR_21);

 FUNC_11(&VAR_20->lock);

 if (VAR_21 & VAR_10) {
  u16 VAR_22;

  FUNC_8(VAR_20->pdev, VAR_9, &VAR_22);
  FUNC_9(VAR_20->pdev, VAR_9, VAR_22);
  FUNC_5(VAR_20->dev,
      "PCI bus error, status=%08x, PCI status=%04x\n",
      VAR_21, VAR_22);
 }

 return VAR_0;
}
