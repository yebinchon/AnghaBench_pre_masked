
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int device; int dev; } ;
struct TYPE_2__ {int topo; struct pci_dev* pdev; } ;
struct intel_ntb_dev {int bar4_split; TYPE_1__ ntb; int * reg; int hwerr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct intel_ntb_dev*) ;
 int FUNC_6 (struct intel_ntb_dev*) ;
 int FUNC_7 (struct intel_ntb_dev*,int) ;
 int FUNC_8 (struct intel_ntb_dev*,int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_9(struct intel_ntb_dev *VAR_11)
{
 struct pci_dev *VAR_12;
 u8 VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = VAR_11->ntb.pdev;

 switch (VAR_12->device) {






 case 129:
 case 134:
 case 139:
 case 128:
 case 133:
 case 138:
 case 130:
 case 135:
 case 140:
 case 131:
 case 136:
 case 141:
 case 132:
 case 137:
 case 142:
  VAR_11->hwerr_flags |= VAR_6;
  break;
 }

 switch (VAR_12->device) {



 case 130:
 case 135:
 case 140:
 case 131:
 case 136:
 case 141:
 case 132:
 case 137:
 case 142:
  VAR_11->hwerr_flags |= VAR_5;
  break;
 }

 switch (VAR_12->device) {




 case 129:
 case 134:
 case 139:
 case 128:
 case 133:
 case 138:
 case 130:
 case 135:
 case 140:
 case 131:
 case 136:
 case 141:
 case 132:
 case 137:
 case 142:
  VAR_11->hwerr_flags |= VAR_4;
  break;
 }

 VAR_11->reg = &VAR_10;

 VAR_14 = FUNC_3(VAR_12, VAR_9, &VAR_13);
 if (VAR_14)
  return -VAR_1;

 VAR_11->ntb.topo = FUNC_8(VAR_11, VAR_13);
 FUNC_0(&VAR_12->dev, "ppd %#x topo %s\n", VAR_13,
  FUNC_2(VAR_11->ntb.topo));
 if (VAR_11->ntb.topo == VAR_7)
  return -VAR_0;

 if (VAR_11->ntb.topo != VAR_8) {
  VAR_11->bar4_split = FUNC_7(VAR_11, VAR_13);
  FUNC_0(&VAR_12->dev, "ppd %#x bar4_split %d\n",
   VAR_13, VAR_11->bar4_split);
 } else {




  VAR_15 = FUNC_4(VAR_12, VAR_3);
  VAR_11->bar4_split = FUNC_1(VAR_15) ==
   VAR_2 + 1;
  FUNC_0(&VAR_12->dev, "mem %#x bar4_split %d\n",
   VAR_15, VAR_11->bar4_split);
 }

 VAR_14 = FUNC_6(VAR_11);
 if (VAR_14)
  return VAR_14;

 return FUNC_5(VAR_11);
}
