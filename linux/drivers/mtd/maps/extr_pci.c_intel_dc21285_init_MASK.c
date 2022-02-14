
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int bankwidth; unsigned long size; int write; int read; } ;
struct map_pci_info {int base; TYPE_1__ map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 unsigned long FUNC_3 (struct pci_dev*,int) ;
 unsigned long FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct pci_dev *VAR_5, struct map_pci_info *VAR_6)
{
 unsigned long VAR_7, VAR_8;

 VAR_7 = FUNC_4(VAR_5, VAR_2);
 VAR_8 = FUNC_3(VAR_5, VAR_2);

 if (!VAR_8 || !VAR_7) {



  VAR_7 = FUNC_4(VAR_5, 2);
  VAR_8 = FUNC_3(VAR_5, 2);





 } else {





  FUNC_1(VAR_5);
  FUNC_5("%s: enabling expansion ROM\n", FUNC_2(VAR_5));
 }

 if (!VAR_8 || !VAR_7)
  return -VAR_1;

 VAR_6->map.bankwidth = 4;
 VAR_6->map.read = VAR_3,
 VAR_6->map.write = VAR_4,
 VAR_6->map.size = VAR_8;
 VAR_6->base = FUNC_0(VAR_7, VAR_8);

 if (!VAR_6->base)
  return -VAR_0;

 return 0;
}
