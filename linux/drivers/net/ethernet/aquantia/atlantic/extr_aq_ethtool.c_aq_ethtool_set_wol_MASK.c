
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct aq_nic_s {int dummy; } ;
struct aq_nic_cfg_s {int wol; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aq_nic_cfg_s* FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (int *,int) ;
 struct aq_nic_s* FUNC_2 (struct net_device*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
         struct ethtool_wolinfo *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_3(VAR_2->dev.parent);
 struct aq_nic_s *VAR_5 = FUNC_2(VAR_2);
 struct aq_nic_cfg_s *VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = 0;

 if (VAR_3->wolopts & VAR_1)
  VAR_6->wol |= VAR_0;
 else
  VAR_6->wol &= ~VAR_0;
 VAR_7 = FUNC_1(&VAR_4->dev, VAR_3->wolopts);

 return VAR_7;
}
