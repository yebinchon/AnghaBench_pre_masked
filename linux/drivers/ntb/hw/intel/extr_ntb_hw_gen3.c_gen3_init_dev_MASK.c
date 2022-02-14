
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int topo; struct pci_dev* pdev; } ;
struct intel_ntb_dev {int hwerr_flags; TYPE_1__ ntb; int * reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct intel_ntb_dev*) ;
 int FUNC_2 (struct intel_ntb_dev*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pci_dev*,int ,int *) ;
 int FUNC_5 (struct intel_ntb_dev*,int ) ;

int FUNC_6(struct intel_ntb_dev *VAR_6)
{
 struct pci_dev *VAR_7;
 u8 VAR_8;
 int VAR_9;

 VAR_7 = VAR_6->ntb.pdev;

 VAR_6->reg = &VAR_5;

 VAR_9 = FUNC_4(VAR_7, VAR_4, &VAR_8);
 if (VAR_9)
  return -VAR_1;

 VAR_6->ntb.topo = FUNC_5(VAR_6, VAR_8);
 FUNC_0(&VAR_7->dev, "ppd %#x topo %s\n", VAR_8,
  FUNC_3(VAR_6->ntb.topo));
 if (VAR_6->ntb.topo == VAR_3)
  return -VAR_0;

 VAR_6->hwerr_flags |= VAR_2;

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9)
  return VAR_9;

 return FUNC_1(VAR_6);
}
