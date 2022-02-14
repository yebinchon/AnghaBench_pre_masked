
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct nfp_cpp {int dummy; } ;
struct nfp6000_pcie {int bar_lock; int bar_waiters; struct pci_dev* pdev; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfp_cpp* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct nfp6000_pcie*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nfp6000_pcie*) ;
 struct nfp6000_pcie* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 struct nfp_cpp* FUNC_10 (int *,int *,struct nfp6000_pcie*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (int *) ;

struct nfp_cpp *FUNC_13(struct pci_dev *VAR_6)
{
 struct nfp6000_pcie *VAR_7;
 u16 VAR_8;
 int VAR_9;


 FUNC_4(&VAR_6->dev,
   "Netronome Flow Processor NFP4000/NFP5000/NFP6000 PCIe Card Probe\n");
 FUNC_11(VAR_6);

 VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto err_ret;
 }

 VAR_7->dev = &VAR_6->dev;
 VAR_7->pdev = VAR_6;
 FUNC_6(&VAR_7->bar_waiters);
 FUNC_12(&VAR_7->bar_lock);

 VAR_8 = FUNC_9(&VAR_6->dev);

 if (FUNC_2(VAR_8) !=
     VAR_4) {
  FUNC_3(&VAR_6->dev,
   "Interface type %d is not the expected %d\n",
   FUNC_2(VAR_8),
   VAR_4);
  VAR_9 = -VAR_0;
  goto err_free_nfp;
 }

 if (FUNC_1(VAR_8) !=
     VAR_3) {
  FUNC_3(&VAR_6->dev, "Interface channel %d is not the expected %d\n",
   FUNC_1(VAR_8),
   VAR_3);
  VAR_9 = -VAR_0;
  goto err_free_nfp;
 }

 VAR_9 = FUNC_5(VAR_7, VAR_8);
 if (VAR_9)
  goto err_free_nfp;


 return FUNC_10(&VAR_5, &VAR_6->dev, VAR_7);

err_free_nfp:
 FUNC_7(VAR_7);
err_ret:
 FUNC_3(&VAR_6->dev, "NFP6000 PCI setup failed\n");
 return FUNC_0(VAR_9);
}
