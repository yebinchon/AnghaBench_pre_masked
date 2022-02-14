
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {scalar_t__ vendor; int is_thunderbolt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct pci_dev*,int,int ) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6;

 while ((VAR_5 = FUNC_1(VAR_4, VAR_5,
          VAR_0))) {
  FUNC_2(VAR_4, VAR_5 + VAR_2, &VAR_6);


  if (VAR_4->vendor == VAR_1 &&
      FUNC_0(VAR_6) == VAR_3) {
   VAR_4->is_thunderbolt = 1;
   return;
  }
 }
}
