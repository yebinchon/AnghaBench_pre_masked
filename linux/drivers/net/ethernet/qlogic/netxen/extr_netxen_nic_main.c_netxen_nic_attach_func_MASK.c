
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int crb_win; int ocm_win; } ;
struct netxen_adapter {TYPE_1__ ahw; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_3 (struct netxen_adapter*) ;
 int FUNC_4 (struct netxen_adapter*) ;
 int FUNC_5 (struct netxen_adapter*,struct net_device*) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct netxen_adapter*,int ,int ) ;
 int FUNC_8 (struct netxen_adapter*) ;
 int FUNC_9 (struct netxen_adapter*) ;
 int FUNC_10 (struct pci_dev*) ;
 struct netxen_adapter* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_15(struct pci_dev *VAR_4)
{
 struct netxen_adapter *VAR_5 = FUNC_11(VAR_4);
 struct net_device *VAR_6 = VAR_5->netdev;
 int VAR_7;

 VAR_7 = FUNC_10(VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_14(VAR_4, VAR_2);
 FUNC_13(VAR_4);
 FUNC_12(VAR_4);

 VAR_5->ahw.crb_win = -1;
 VAR_5->ahw.ocm_win = -1;

 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_4->dev, "failed to start firmware\n");
  return VAR_7;
 }

 if (FUNC_2(VAR_6)) {
  VAR_7 = FUNC_3(VAR_5);
  if (VAR_7)
   goto err_out;

  VAR_7 = FUNC_5(VAR_5, VAR_6);
  if (VAR_7)
   goto err_out_detach;

  FUNC_6(VAR_6, VAR_1);
 }

 FUNC_1(VAR_6);
 FUNC_7(VAR_5, VAR_3, VAR_0);
 return 0;

err_out_detach:
 FUNC_4(VAR_5);
err_out:
 FUNC_9(VAR_5);
 return VAR_7;
}
