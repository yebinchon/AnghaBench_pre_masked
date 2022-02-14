
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nand_chip {int dummy; } ;
struct ingenic_nfc {int ecc; } ;
struct TYPE_3__ {int strength; int bytes; int size; } ;
struct TYPE_4__ {TYPE_1__ ecc; int controller; } ;
struct ingenic_nand {TYPE_2__ chip; scalar_t__ reading; } ;
struct ingenic_ecc_params {int strength; int bytes; int size; } ;


 int FUNC_0 (int ,struct ingenic_ecc_params*,int const*,int *) ;
 int FUNC_1 (struct nand_chip*) ;
 struct ingenic_nand* FUNC_2 (int ) ;
 struct ingenic_nfc* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, const u8 *VAR_1,
          u8 *VAR_2)
{
 struct ingenic_nand *VAR_3 = FUNC_2(FUNC_1(VAR_0));
 struct ingenic_nfc *VAR_4 = FUNC_3(VAR_3->chip.controller);
 struct ingenic_ecc_params VAR_5;





 if (VAR_3->reading)
  return 0;

 VAR_5.size = VAR_3->chip.ecc.size;
 VAR_5.bytes = VAR_3->chip.ecc.bytes;
 VAR_5.strength = VAR_3->chip.ecc.strength;

 return FUNC_0(VAR_4->ecc, &VAR_5, VAR_1, VAR_2);
}
