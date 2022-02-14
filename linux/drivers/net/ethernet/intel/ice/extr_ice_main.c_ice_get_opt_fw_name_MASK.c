
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ice_pf {struct pci_dev* pdev; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int,int *) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (char*,int ,char*,char*,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static char *FUNC_5(struct ice_pf *VAR_4)
{



 struct pci_dev *VAR_5 = VAR_4->pdev;
 char *VAR_6 = ((void*)0);
 u32 VAR_7;
 u8 VAR_8[8];
 int VAR_9;




 VAR_9 = FUNC_1(VAR_5, VAR_3);
 if (VAR_9) {
  VAR_6 = FUNC_0(VAR_2, VAR_0);
  if (!VAR_6)
   return ((void*)0);

  FUNC_2(VAR_5, VAR_9 + 4, &VAR_7);
  FUNC_3(VAR_7, &VAR_8[0]);
  FUNC_2(VAR_5, VAR_9 + 8, &VAR_7);
  FUNC_3(VAR_7, &VAR_8[4]);
  FUNC_4(VAR_6, VAR_2,
    "%sice-%02x%02x%02x%02x%02x%02x%02x%02x.pkg",
    VAR_1,
    VAR_8[7], VAR_8[6], VAR_8[5], VAR_8[4],
    VAR_8[3], VAR_8[2], VAR_8[1], VAR_8[0]);
 }

 return VAR_6;
}
