
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sm_oob {int* ecc1; int* ecc2; } ;
struct r852_device {int ctlreg; scalar_t__ card_unstable; } ;
struct nand_chip {int dummy; } ;
typedef int ecc2 ;
typedef int ecc1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nand_chip*) ;
 struct r852_device* FUNC_1 (int ) ;
 int FUNC_2 (struct r852_device*,int ) ;
 int FUNC_3 (struct r852_device*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_4, const uint8_t *VAR_5,
         uint8_t *VAR_6)
{
 struct r852_device *VAR_7 = FUNC_1(FUNC_0(VAR_4));
 struct sm_oob *VAR_8 = (struct sm_oob *)VAR_6;
 uint32_t VAR_9, VAR_10;

 if (VAR_7->card_unstable)
  return 0;

 VAR_7->ctlreg &= ~VAR_2;
 FUNC_3(VAR_7, VAR_0, VAR_7->ctlreg | VAR_1);

 VAR_9 = FUNC_2(VAR_7, VAR_3);
 VAR_10 = FUNC_2(VAR_7, VAR_3);

 VAR_8->ecc1[0] = (VAR_9) & 0xFF;
 VAR_8->ecc1[1] = (VAR_9 >> 8) & 0xFF;
 VAR_8->ecc1[2] = (VAR_9 >> 16) & 0xFF;

 VAR_8->ecc2[0] = (VAR_10) & 0xFF;
 VAR_8->ecc2[1] = (VAR_10 >> 8) & 0xFF;
 VAR_8->ecc2[2] = (VAR_10 >> 16) & 0xFF;

 FUNC_3(VAR_7, VAR_0, VAR_7->ctlreg);
 return 0;
}
