
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spider_net_card {int netdev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct spider_net_card*) ;
 int FUNC_2 (struct spider_net_card*) ;
 struct spider_net_card* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct spider_net_card*) ;
 int FUNC_5 (struct spider_net_card*) ;
 int FUNC_6 (struct spider_net_card*) ;

__attribute__((used)) static int
FUNC_7(struct pci_dev *VAR_1, const struct pci_device_id *VAR_2)
{
 int VAR_3 = -VAR_0;
 struct spider_net_card *VAR_4;

 VAR_4 = FUNC_3(VAR_1);
 if (!VAR_4)
  goto out;

 FUNC_6(VAR_4);
 FUNC_1(VAR_4);

 VAR_3 = FUNC_4(VAR_4);
 if (VAR_3)
  goto out_undo_pci;

 VAR_3 = FUNC_2(VAR_4);
 if (VAR_3)
  goto out_undo_pci;

 return 0;

out_undo_pci:
 FUNC_5(VAR_4);
 FUNC_0(VAR_4->netdev);
out:
 return VAR_3;
}
