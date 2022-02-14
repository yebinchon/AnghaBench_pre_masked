
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct pci_bus {struct pci_dev* self; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_bus*,int,int *,int) ;
 int FUNC_1 (struct pci_bus*,int,int ,int ) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int) ;

int FUNC_5(struct pci_bus *VAR_4, int VAR_5, u32 *VAR_6, int VAR_7)
{
 int VAR_8;
 u16 VAR_9 = 0;
 bool VAR_10;
 struct pci_dev *VAR_11 = VAR_4->self;

 VAR_8 = FUNC_2(VAR_11, VAR_2);


 if (VAR_8) {
  FUNC_3(VAR_11, VAR_8 + VAR_0, &VAR_9);
  if (VAR_9 & VAR_1)
   FUNC_4(VAR_11, VAR_8 + VAR_0,
           VAR_9 & ~VAR_1);
 }

 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);


 if (VAR_10)
  FUNC_1(VAR_4, VAR_5, VAR_3, 0);


 if (VAR_9 & VAR_1)
  FUNC_4(VAR_11, VAR_8 + VAR_0, VAR_9);

 return VAR_10;
}
