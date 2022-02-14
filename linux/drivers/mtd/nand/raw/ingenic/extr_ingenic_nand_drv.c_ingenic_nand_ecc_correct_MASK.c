
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
struct ingenic_nand {TYPE_2__ chip; } ;
struct ingenic_ecc_params {int strength; int bytes; int size; } ;


 int FUNC_0 (int ,struct ingenic_ecc_params*,int *,int *) ;
 int FUNC_1 (struct nand_chip*) ;
 struct ingenic_nand* FUNC_2 (int ) ;
 struct ingenic_nfc* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, u8 *VAR_1,
        u8 *VAR_2, u8 *VAR_3)
{
 struct ingenic_nand *VAR_4 = FUNC_2(FUNC_1(VAR_0));
 struct ingenic_nfc *VAR_5 = FUNC_3(VAR_4->chip.controller);
 struct ingenic_ecc_params VAR_6;

 VAR_6.size = VAR_4->chip.ecc.size;
 VAR_6.bytes = VAR_4->chip.ecc.bytes;
 VAR_6.strength = VAR_4->chip.ecc.strength;

 return FUNC_0(VAR_5->ecc, &VAR_6, VAR_1, VAR_2);
}
