
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct skge_hw {int intr_mask; struct pci_dev* pdev; TYPE_1__** dev; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int name; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct skge_hw*) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int) ;
 int FUNC_5 (struct skge_hw*,int) ;
 int FUNC_6 (struct skge_hw*,int ) ;
 int FUNC_7 (struct skge_hw*,int ,int ) ;
 int FUNC_8 (struct skge_hw*,int ,int ) ;
 int FUNC_9 (struct skge_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct skge_hw *VAR_34)
{
 struct pci_dev *VAR_35 = VAR_34->pdev;
 u32 VAR_36 = FUNC_6(VAR_34, VAR_0);

 if (FUNC_2(VAR_34)) {

  if (VAR_36 & (VAR_14|VAR_16))
   FUNC_7(VAR_34, VAR_30, VAR_22);
  if (VAR_36 & (VAR_15|VAR_17))
   FUNC_7(VAR_34, VAR_31, VAR_22);
 } else {

  if (VAR_36 & VAR_11)
   FUNC_9(VAR_34, VAR_6, VAR_7);
 }

 if (VAR_36 & VAR_20) {
  FUNC_0(&VAR_35->dev, "Ram read data parity error\n");
  FUNC_7(VAR_34, VAR_4, VAR_28);
 }

 if (VAR_36 & VAR_21) {
  FUNC_0(&VAR_35->dev, "Ram write data parity error\n");
  FUNC_7(VAR_34, VAR_4, VAR_29);
 }

 if (VAR_36 & VAR_12)
  FUNC_5(VAR_34, 0);

 if (VAR_36 & VAR_13)
  FUNC_5(VAR_34, 1);

 if (VAR_36 & VAR_18) {
  FUNC_0(&VAR_35->dev, "%s: receive queue parity error\n",
   VAR_34->dev[0]->name);
  FUNC_8(VAR_34, VAR_1, VAR_5);
 }

 if (VAR_36 & VAR_19) {
  FUNC_0(&VAR_35->dev, "%s: receive queue parity error\n",
   VAR_34->dev[1]->name);
  FUNC_8(VAR_34, VAR_2, VAR_5);
 }

 if (VAR_36 & (VAR_9|VAR_10)) {
  u16 VAR_37, VAR_38;

  FUNC_3(VAR_35, VAR_23, &VAR_38);
  FUNC_3(VAR_35, VAR_26, &VAR_37);

  FUNC_0(&VAR_35->dev, "PCI error cmd=%#x status=%#x\n",
   VAR_38, VAR_37);


  VAR_37 &= VAR_27;
  FUNC_9(VAR_34, VAR_3, VAR_33);
  FUNC_4(VAR_35, VAR_23,
          VAR_38 | VAR_25 | VAR_24);
  FUNC_4(VAR_35, VAR_26, VAR_37);
  FUNC_9(VAR_34, VAR_3, VAR_32);


  VAR_36 = FUNC_6(VAR_34, VAR_0);
  if (VAR_36 & VAR_10) {
   FUNC_1(&VAR_34->pdev->dev, "unable to clear error (so ignoring them)\n");
   VAR_34->intr_mask &= ~VAR_8;
  }
 }
}
