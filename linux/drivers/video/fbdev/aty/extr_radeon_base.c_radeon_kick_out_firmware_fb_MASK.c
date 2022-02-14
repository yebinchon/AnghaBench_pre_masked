
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct apertures_struct {TYPE_1__* ranges; } ;
struct TYPE_2__ {int size; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct apertures_struct* FUNC_0 (int) ;
 int FUNC_1 (struct apertures_struct*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct apertures_struct*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_2)
{
 struct apertures_struct *VAR_3;

 VAR_3 = FUNC_0(1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->ranges[0].base = FUNC_3(VAR_2, 0);
 VAR_3->ranges[0].size = FUNC_2(VAR_2, 0);

 FUNC_4(VAR_3, VAR_1, 0);

 FUNC_1(VAR_3);

 return 0;
}
