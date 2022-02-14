
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_2)
{
 u8 VAR_3;


 FUNC_0(VAR_2, 0x6f, &VAR_3);
 FUNC_1(VAR_2, 0x6f, VAR_3 & 0xef);


 if (((VAR_2->device & 0xfffc) == VAR_1) ||
     ((VAR_2->device & 0xfffc) == VAR_0)) {
  FUNC_0(VAR_2, 0x73, &VAR_3);
  FUNC_1(VAR_2, 0x73, VAR_3 & 0xef);
 }
 return 0;
}
