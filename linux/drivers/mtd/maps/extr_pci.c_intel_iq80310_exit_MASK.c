
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int map_priv_2; } ;
struct map_pci_info {TYPE_1__ map; scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pci_dev*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct pci_dev *VAR_0, struct map_pci_info *VAR_1)
{
 if (VAR_1->base)
  FUNC_0(VAR_1->base);
 FUNC_1(VAR_0, 0x44, VAR_1->map.map_priv_2);
}
