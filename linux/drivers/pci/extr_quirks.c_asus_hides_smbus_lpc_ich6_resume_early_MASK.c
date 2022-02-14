
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_2)
{
 u32 VAR_3;

 if (FUNC_0(!VAR_0 || !VAR_1))
  return;


 VAR_3 = FUNC_1(VAR_1 + 0x3418);


 FUNC_2(VAR_3 & 0xFFFFFFF7, VAR_1 + 0x3418);
}
