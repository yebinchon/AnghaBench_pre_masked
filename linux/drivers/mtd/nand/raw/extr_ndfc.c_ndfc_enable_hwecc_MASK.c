
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ndfc_controller {scalar_t__ ndfcbase; } ;
struct nand_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct ndfc_controller* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct nand_chip *VAR_2, int VAR_3)
{
 uint32_t VAR_4;
 struct ndfc_controller *VAR_5 = FUNC_1(VAR_2);

 VAR_4 = FUNC_0(VAR_5->ndfcbase + VAR_0);
 VAR_4 |= VAR_1;
 FUNC_2(VAR_5->ndfcbase + VAR_0, VAR_4);
 FUNC_3();
}
