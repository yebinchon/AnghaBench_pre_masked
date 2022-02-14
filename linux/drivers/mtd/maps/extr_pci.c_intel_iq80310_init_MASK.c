
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int bankwidth; int size; int map_priv_2; int write; int read; } ;
struct map_pci_info {TYPE_1__ map; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pci_dev*,int,int *) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int,int ) ;

__attribute__((used)) static int
FUNC_5(struct pci_dev *VAR_3, struct map_pci_info *VAR_4)
{
 u32 VAR_5;

 VAR_4->map.bankwidth = 1;
 VAR_4->map.read = VAR_1,
 VAR_4->map.write = VAR_2,

 VAR_4->map.size = 0x00800000;
 VAR_4->base = FUNC_0(FUNC_3(VAR_3, 0),
         FUNC_2(VAR_3, 0));

 if (!VAR_4->base)
  return -VAR_0;





 FUNC_1(VAR_3, 0x44, &VAR_5);
 FUNC_4(VAR_3, 0x44, 0);

 VAR_4->map.map_priv_2 = VAR_5;

 return 0;
}
