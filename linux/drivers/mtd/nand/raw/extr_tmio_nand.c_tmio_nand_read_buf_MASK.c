
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tmio_nand {scalar_t__ fcr; } ;
struct nand_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tmio_nand* FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (scalar_t__,int *,int) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_1, u_char *VAR_2, int VAR_3)
{
 struct tmio_nand *VAR_4 = FUNC_0(FUNC_1(VAR_1));

 FUNC_2(VAR_4->fcr + VAR_0, VAR_2, VAR_3 >> 1);
}
