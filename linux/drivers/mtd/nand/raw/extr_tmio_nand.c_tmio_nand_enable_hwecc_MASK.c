
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_nand {scalar_t__ fcr; } ;
struct nand_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tmio_nand* FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_4, int VAR_5)
{
 struct tmio_nand *VAR_6 = FUNC_0(FUNC_1(VAR_4));

 FUNC_3(VAR_3, VAR_6->fcr + VAR_1);
 FUNC_2(VAR_6->fcr + VAR_0);
 FUNC_3(VAR_2, VAR_6->fcr + VAR_1);
}
