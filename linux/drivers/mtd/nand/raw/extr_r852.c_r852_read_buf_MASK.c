
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
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct r852_device*,int *,int) ;
 struct r852_device* FUNC_3 (int ) ;
 int FUNC_4 (struct r852_device*,int ) ;
 int FUNC_5 (struct r852_device*,int ) ;

__attribute__((used)) static void FUNC_6(struct nand_chip *VAR_2, uint8_t *VAR_3, int VAR_4)
{
 struct r852_device *VAR_5 = FUNC_3(FUNC_1(VAR_2));
 uint32_t VAR_6;

 if (VAR_5->card_unstable) {


  FUNC_0(VAR_3, 0, VAR_4);
  return;
 }


 if (VAR_4 == VAR_1 && VAR_5->dma_usable) {
  FUNC_2(VAR_5, VAR_3, 1);
  return;
 }


 while (VAR_4 >= 4) {

  VAR_6 = FUNC_5(VAR_5, VAR_0);
  *VAR_3++ = VAR_6 & 0xFF;
  *VAR_3++ = (VAR_6 >> 8) & 0xFF;
  *VAR_3++ = (VAR_6 >> 16) & 0xFF;
  *VAR_3++ = (VAR_6 >> 24) & 0xFF;
  VAR_4 -= 4;
 }


 while (VAR_4--)
  *VAR_3++ = FUNC_4(VAR_5, VAR_0);
}
