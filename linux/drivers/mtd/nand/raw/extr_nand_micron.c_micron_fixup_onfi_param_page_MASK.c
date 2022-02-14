
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_onfi_params {int revision; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_1,
      struct nand_onfi_params *VAR_2)
{





 if (FUNC_1(VAR_2->revision) == 0)
  VAR_2->revision = FUNC_0(VAR_0);
}
