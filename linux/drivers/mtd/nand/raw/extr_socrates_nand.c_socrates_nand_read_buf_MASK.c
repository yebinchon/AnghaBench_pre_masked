
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct socrates_nand_host {int io_base; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct socrates_nand_host* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_3, uint8_t *VAR_4,
       int VAR_5)
{
 int VAR_6;
 struct socrates_nand_host *VAR_7 = FUNC_1(VAR_3);
 uint32_t VAR_8;

 VAR_8 = VAR_2 | VAR_0;

 FUNC_2(VAR_7->io_base, VAR_8);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_4[VAR_6] = (FUNC_0(VAR_7->io_base) >>
    VAR_1) & 0xff;
 }
}
