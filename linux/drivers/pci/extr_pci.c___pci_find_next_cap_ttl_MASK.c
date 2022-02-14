
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (struct pci_bus*,unsigned int,int,int*) ;
 int FUNC_1 (struct pci_bus*,unsigned int,int,int*) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_0, unsigned int VAR_1,
       u8 VAR_2, int VAR_3, int *VAR_4)
{
 u8 VAR_5;
 u16 VAR_6;

 FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_2);

 while ((*VAR_4)--) {
  if (VAR_2 < 0x40)
   break;
  VAR_2 &= ~3;
  FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_6);

  VAR_5 = VAR_6 & 0xff;
  if (VAR_5 == 0xff)
   break;
  if (VAR_5 == VAR_3)
   return VAR_2;
  VAR_2 = (VAR_6 >> 8);
 }
 return 0;
}
