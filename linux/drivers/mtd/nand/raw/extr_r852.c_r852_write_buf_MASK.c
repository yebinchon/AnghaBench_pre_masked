
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct r852_device {scalar_t__ dma_usable; scalar_t__ card_unstable; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct r852_device*,int*,int ) ;
 struct r852_device* FUNC_2 (int ) ;
 int FUNC_3 (struct r852_device*,int ,int ) ;
 int FUNC_4 (struct r852_device*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct nand_chip *VAR_2, const uint8_t *VAR_3, int VAR_4)
{
 struct r852_device *VAR_5 = FUNC_2(FUNC_0(VAR_2));
 uint32_t VAR_6;


 if (VAR_5->card_unstable)
  return;


 if (VAR_4 == VAR_1 && VAR_5->dma_usable) {
  FUNC_1(VAR_5, (uint8_t *)VAR_3, 0);
  return;
 }


 while (VAR_4 >= 4) {
  VAR_6 = VAR_3[0] | VAR_3[1] << 8 | VAR_3[2] << 16 | VAR_3[3] << 24;
  FUNC_4(VAR_5, VAR_0, VAR_6);
  VAR_3 += 4;
  VAR_4 -= 4;

 }


 while (VAR_4 > 0) {
  FUNC_3(VAR_5, VAR_0, *VAR_3++);
  VAR_4--;
 }
}
