
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nand_chip {int dummy; } ;
struct brcmnand_host {int last_cmd; } ;


 int FUNC_0 () ;
 int VAR_0 ;

 int FUNC_1 (struct brcmnand_host*,int ,int const,int) ;
 struct brcmnand_host* FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_1, const uint8_t *VAR_2,
          int VAR_3)
{
 int VAR_4;
 struct brcmnand_host *VAR_5 = FUNC_2(VAR_1);

 switch (VAR_5->last_cmd) {
 case 128:
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_1(VAR_5, VAR_0, VAR_2[VAR_4],
        (VAR_4 + 1) == VAR_3);
  break;
 default:
  FUNC_0();
  break;
 }
}
