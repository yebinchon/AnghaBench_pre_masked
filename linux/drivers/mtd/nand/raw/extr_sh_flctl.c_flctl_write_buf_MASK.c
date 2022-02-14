
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sh_flctl {size_t index; int * done_buff; } ;
struct nand_chip {int dummy; } ;


 int FUNC_0 (int *,int const*,int) ;
 struct sh_flctl* FUNC_1 (int ) ;
 int FUNC_2 (struct nand_chip*) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
 struct sh_flctl *VAR_3 = FUNC_1(FUNC_2(VAR_0));

 FUNC_0(&VAR_3->done_buff[VAR_3->index], VAR_1, VAR_2);
 VAR_3->index += VAR_2;
}
