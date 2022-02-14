
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct socrates_nand_host {int io_base; } ;
struct nand_chip {int dummy; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 struct socrates_nand_host* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int ,int const) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_3, const uint8_t *VAR_4,
        int VAR_5)
{
 int VAR_6;
 struct socrates_nand_host *VAR_7 = FUNC_0(VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_1(VAR_7->io_base, VAR_2 |
    VAR_0 |
    (VAR_4[VAR_6] << VAR_1));
 }
}
