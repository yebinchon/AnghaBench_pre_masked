
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct nfp_net_vf {int q_bar; int ddir; struct nfp_net* nn; } ;
struct TYPE_2__ {int ctrl_bar; } ;
struct nfp_net {TYPE_1__ dp; int tx_bar; int rx_bar; int debugfs_dir; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_net_vf*) ;
 int FUNC_2 (struct nfp_net*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfp_net*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct nfp_net_vf* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_0)
{
 struct nfp_net_vf *VAR_1;
 struct nfp_net *VAR_2;

 VAR_1 = FUNC_7(VAR_0);
 if (!VAR_1)
  return;

 VAR_2 = VAR_1->nn;




 FUNC_3(&VAR_2->debugfs_dir);
 FUNC_3(&VAR_1->ddir);

 FUNC_2(VAR_2);

 FUNC_5(VAR_0);

 if (!VAR_1->q_bar) {
  FUNC_0(VAR_2->rx_bar);
  FUNC_0(VAR_2->tx_bar);
 } else {
  FUNC_0(VAR_1->q_bar);
 }
 FUNC_0(VAR_2->dp.ctrl_bar);

 FUNC_4(VAR_2);

 FUNC_8(VAR_0);
 FUNC_6(VAR_0);

 FUNC_9(VAR_0, ((void*)0));
 FUNC_1(VAR_1);
}
