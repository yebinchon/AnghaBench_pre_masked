
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ath10k_pci_supp_chip {scalar_t__ dev_id; scalar_t__ rev_id; } ;


 int FUNC_0 (struct ath10k_pci_supp_chip*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 struct ath10k_pci_supp_chip* VAR_1 ;

__attribute__((used)) static bool FUNC_2(u32 VAR_2, u32 VAR_3)
{
 const struct ath10k_pci_supp_chip *VAR_4;
 int VAR_5;
 u32 VAR_6 = FUNC_1(VAR_3, VAR_0);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_4 = &VAR_1[VAR_5];

  if (VAR_4->dev_id == VAR_2 &&
      VAR_4->rev_id == VAR_6)
   return 1;
 }

 return 0;
}
