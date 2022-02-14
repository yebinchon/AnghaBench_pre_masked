
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct nand_chip *VAR_1, u_char *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_2[VAR_4] = FUNC_1(FUNC_0(VAR_1), VAR_0);
}
