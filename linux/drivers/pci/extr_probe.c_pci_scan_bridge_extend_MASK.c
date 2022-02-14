
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {scalar_t__ hdr_type; int dev; } ;
struct TYPE_2__ {unsigned int end; scalar_t__ start; } ;
struct pci_bus {unsigned int number; unsigned int primary; int bridge_ctl; struct pci_bus* parent; TYPE_1__ busn_res; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,TYPE_1__*) ;
 struct pci_bus* FUNC_1 (struct pci_bus*,struct pci_dev*,int) ;
 int FUNC_2 (struct pci_bus*,int,unsigned int) ;
 int FUNC_3 (struct pci_bus*,int) ;
 int FUNC_4 (struct pci_dev*,char*,unsigned int,unsigned int,int) ;
 int FUNC_5 (struct pci_bus*) ;
 int FUNC_6 (struct pci_dev*,unsigned int*,unsigned int*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct pci_bus* FUNC_8 (int ,int) ;
 int FUNC_9 (struct pci_dev*,char*,unsigned int,unsigned int) ;
 int FUNC_10 (struct pci_dev*,int ,int*) ;
 int FUNC_11 (struct pci_dev*,int ,int*) ;
 unsigned int FUNC_12 (struct pci_bus*) ;
 int FUNC_13 (struct pci_bus*,unsigned int) ;
 int FUNC_14 (struct pci_dev*,char*,...) ;
 int FUNC_15 (struct pci_dev*,int ,int) ;
 int FUNC_16 (struct pci_dev*,int ,int) ;
 int FUNC_17 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,char*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_22(struct pci_bus *VAR_8, struct pci_dev *VAR_9,
      int VAR_10, unsigned int VAR_11,
      int VAR_12)
{
 struct pci_bus *VAR_13;
 int VAR_14 = (VAR_9->hdr_type == VAR_4);
 u32 VAR_15, VAR_16, VAR_17 = 0;
 u16 VAR_18;
 u8 VAR_19, VAR_20, VAR_21;
 int VAR_22 = 0;
 bool VAR_23;
 u8 VAR_24, VAR_25;
 int VAR_26;





 FUNC_19(&VAR_9->dev);

 FUNC_10(VAR_9, VAR_5, &VAR_15);
 VAR_19 = VAR_15 & 0xFF;
 VAR_20 = (VAR_15 >> 8) & 0xFF;
 VAR_21 = (VAR_15 >> 16) & 0xFF;

 FUNC_4(VAR_9, "scanning [bus %02x-%02x] behind bridge, pass %d\n",
  VAR_20, VAR_21, VAR_12);

 if (!VAR_19 && (VAR_19 != VAR_8->number) && VAR_20 && VAR_21) {
  FUNC_14(VAR_9, "Primary bus is hard wired to 0\n");
  VAR_19 = VAR_8->number;
 }


 if (!VAR_12 &&
     (VAR_19 != VAR_8->number || VAR_20 <= VAR_8->number ||
      VAR_20 > VAR_21)) {
  FUNC_9(VAR_9, "bridge configuration invalid ([bus %02x-%02x]), reconfiguring\n",
    VAR_20, VAR_21);
  VAR_22 = 1;
 }





 FUNC_11(VAR_9, VAR_2, &VAR_18);
 FUNC_17(VAR_9, VAR_2,
         VAR_18 & ~VAR_3);

 FUNC_7(VAR_9);

 if ((VAR_20 || VAR_21) && !FUNC_18() &&
     !VAR_14 && !VAR_22) {
  unsigned int VAR_27;





  if (VAR_12)
   goto out;







  VAR_13 = FUNC_8(FUNC_5(VAR_8), VAR_20);
  if (!VAR_13) {
   VAR_13 = FUNC_1(VAR_8, VAR_9, VAR_20);
   if (!VAR_13)
    goto out;
   VAR_13->primary = VAR_19;
   FUNC_2(VAR_13, VAR_20, VAR_21);
   VAR_13->bridge_ctl = VAR_18;
  }

  VAR_27 = FUNC_12(VAR_13);
  if (VAR_27 > VAR_21)
   FUNC_14(VAR_9, "bridge has subordinate %02x but max busn %02x\n",
     VAR_21, VAR_27);


  if (VAR_21 > VAR_10)
   VAR_10 = VAR_21;
 } else {





  if (!VAR_12) {
   if (FUNC_18() || VAR_22 || VAR_14)
    FUNC_16(VAR_9, VAR_5,
             VAR_15 & ~0xffffff);
   goto out;
  }


  FUNC_17(VAR_9, VAR_6, 0xffff);


  VAR_23 = FUNC_6(VAR_9, &VAR_24, &VAR_25);
  if (VAR_23)
   VAR_26 = VAR_24;
  else
   VAR_26 = VAR_10 + 1;






  VAR_13 = FUNC_8(FUNC_5(VAR_8), VAR_26);
  if (!VAR_13) {
   VAR_13 = FUNC_1(VAR_8, VAR_9, VAR_26);
   if (!VAR_13)
    goto out;
   FUNC_2(VAR_13, VAR_26,
      VAR_8->busn_res.end);
  }
  VAR_10++;
  if (VAR_11)
   VAR_11--;

  VAR_15 = (VAR_15 & 0xff000000)
        | ((unsigned int)(VAR_13->primary) << 0)
        | ((unsigned int)(VAR_13->busn_res.start) << 8)
        | ((unsigned int)(VAR_13->busn_res.end) << 16);





  if (VAR_14) {
   VAR_15 &= ~0xff000000;
   VAR_15 |= VAR_0 << 24;
  }


  FUNC_16(VAR_9, VAR_5, VAR_15);

  if (!VAR_14) {
   VAR_13->bridge_ctl = VAR_18;
   VAR_10 = FUNC_13(VAR_13, VAR_11);
  } else {






   for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
    struct pci_bus *VAR_28 = VAR_8;
    if (FUNC_8(FUNC_5(VAR_8),
       VAR_10+VAR_16+1))
     break;
    while (VAR_28->parent) {
     if ((!FUNC_18()) &&
         (VAR_28->busn_res.end > VAR_10) &&
         (VAR_28->busn_res.end <= VAR_10+VAR_16)) {
      VAR_17 = 1;
     }
     VAR_28 = VAR_28->parent;
    }
    if (VAR_17) {






     VAR_16 /= 2;
     break;
    }
   }
   VAR_10 += VAR_16;
  }






  if (VAR_23)
   VAR_10 = VAR_25;
  FUNC_3(VAR_13, VAR_10);
  FUNC_15(VAR_9, VAR_7, VAR_10);
 }

 FUNC_21(VAR_13->name,
  (VAR_14 ? "PCI CardBus %04x:%02x" : "PCI Bus %04x:%02x"),
  FUNC_5(VAR_8), VAR_13->number);


 while (VAR_8->parent) {
  if ((VAR_13->busn_res.end > VAR_8->busn_res.end) ||
      (VAR_13->number > VAR_8->busn_res.end) ||
      (VAR_13->number < VAR_8->number) ||
      (VAR_13->busn_res.end < VAR_8->number)) {
   FUNC_0(&VAR_9->dev, "devices behind bridge are unusable because %pR cannot be assigned for them\n",
     &VAR_13->busn_res);
   break;
  }
  VAR_8 = VAR_8->parent;
 }

out:
 FUNC_17(VAR_9, VAR_2, VAR_18);

 FUNC_20(&VAR_9->dev);

 return VAR_10;
}
