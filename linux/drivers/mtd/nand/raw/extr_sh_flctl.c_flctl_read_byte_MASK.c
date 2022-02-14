
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sh_flctl {size_t index; int * done_buff; } ;
struct nand_chip {int dummy; } ;


 struct sh_flctl* FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;

__attribute__((used)) static uint8_t FUNC_2(struct nand_chip *VAR_0)
{
 struct sh_flctl *VAR_1 = FUNC_0(FUNC_1(VAR_0));
 uint8_t VAR_2;

 VAR_2 = VAR_1->done_buff[VAR_1->index];
 VAR_1->index++;
 return VAR_2;
}
