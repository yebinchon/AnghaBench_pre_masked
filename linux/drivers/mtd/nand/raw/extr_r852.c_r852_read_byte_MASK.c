
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct r852_device {scalar_t__ card_unstable; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*) ;
 struct r852_device* FUNC_1 (int ) ;
 int FUNC_2 (struct r852_device*,int ) ;

__attribute__((used)) static uint8_t FUNC_3(struct nand_chip *VAR_1)
{
 struct r852_device *VAR_2 = FUNC_1(FUNC_0(VAR_1));


 if (VAR_2->card_unstable)
  return 0;

 return FUNC_2(VAR_2, VAR_0);
}
