
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int irq; } ;
struct net_device {int irq; } ;
struct device {int dummy; } ;
struct TYPE_8__ {unsigned long base_addr; } ;
struct TYPE_7__ {int interrupt; } ;
struct TYPE_6__ {struct net_device* dev; struct device* bus_dev; } ;
typedef TYPE_1__ DFX_board_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ VAR_0 ;
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
 unsigned long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 unsigned long VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (unsigned long) ;
 TYPE_1__* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int,unsigned long) ;
 int FUNC_8 (struct pci_dev*,int ,int*) ;
 int FUNC_9 (struct pci_dev*,int ,int) ;
 TYPE_3__* FUNC_10 (struct device*) ;
 struct pci_dev* FUNC_11 (struct device*) ;
 TYPE_2__* FUNC_12 (struct device*) ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_31)
{
 DFX_board_t *VAR_32 = FUNC_6(VAR_31);
 struct device *VAR_33 = VAR_32->bus_dev;
 int VAR_34 = FUNC_3(VAR_33);
 int VAR_35 = FUNC_1(VAR_33);
 int VAR_36 = FUNC_2(VAR_33);
 int VAR_37 = VAR_0 || VAR_36;
 u8 VAR_38;

 FUNC_0("In dfx_bus_init...\n");


 VAR_32->dev = VAR_31;



 if (VAR_36)
  VAR_31->irq = FUNC_12(VAR_33)->interrupt;
 if (VAR_35) {
  unsigned long VAR_39 = FUNC_10(VAR_33)->base_addr;


  FUNC_7(0, VAR_39 + VAR_25);


  VAR_38 = FUNC_5(VAR_39 + VAR_24);
  VAR_38 &= VAR_9;
  VAR_38 >>= VAR_10;

  switch (VAR_38) {
  case 128:
   VAR_31->irq = 9;
   break;

  case 131:
   VAR_31->irq = 10;
   break;

  case 130:
   VAR_31->irq = 11;
   break;

  case 129:
   VAR_31->irq = 15;
   break;
  }
  VAR_38 = 0;
  FUNC_7(VAR_38, VAR_39 + VAR_17);
  VAR_38 = VAR_12;
  FUNC_7(VAR_38, VAR_39 + VAR_16);

  VAR_38 = VAR_29;
  FUNC_7(VAR_38, VAR_39 + VAR_21);
  VAR_38 = (VAR_14 - 1) & ~3;
  FUNC_7(VAR_38, VAR_39 + VAR_20);

  VAR_38 = 0;
  FUNC_7(VAR_38, VAR_39 + VAR_19);
  VAR_38 = VAR_11;
  FUNC_7(VAR_38, VAR_39 + VAR_18);

  VAR_38 = VAR_29;
  FUNC_7(VAR_38, VAR_39 + VAR_23);
  VAR_38 = (VAR_13 - 1) & ~3;
  FUNC_7(VAR_38, VAR_39 + VAR_22);


  VAR_38 = VAR_27;
  if (VAR_37)
   VAR_38 |= VAR_28;
  else
   VAR_38 |= VAR_26;
  FUNC_7(VAR_38, VAR_39 + VAR_15);





  VAR_38 = VAR_30;
  FUNC_7(VAR_38, VAR_39 + VAR_25);





  VAR_38 = FUNC_5(VAR_39 + VAR_11);
  if (VAR_37)
   VAR_38 |= VAR_7;
  else
   VAR_38 &= ~VAR_7;
  FUNC_7(VAR_38, VAR_39 + VAR_11);


  VAR_38 = FUNC_5(VAR_39 + VAR_24);
  VAR_38 |= VAR_8;
  FUNC_7(VAR_38, VAR_39 + VAR_24);
 }
 if (VAR_34) {
  struct pci_dev *VAR_40 = FUNC_11(VAR_33);



  VAR_31->irq = VAR_40->irq;



  FUNC_8(VAR_40, VAR_1, &VAR_38);
  if (VAR_38 < VAR_3) {
   VAR_38 = VAR_2;
   FUNC_9(VAR_40, VAR_1, VAR_38);
  }


  VAR_38 = VAR_6 | VAR_5;
  FUNC_4(VAR_32, VAR_4, VAR_38);
 }
}
