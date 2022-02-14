
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_char ;
struct ndfc_controller {scalar_t__ ndfcbase; } ;
struct nand_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct ndfc_controller* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_1,
         const u_char *VAR_2, u_char *VAR_3)
{
 struct ndfc_controller *VAR_4 = FUNC_1(VAR_1);
 uint32_t VAR_5;
 uint8_t *VAR_6 = (uint8_t *)&VAR_5;

 FUNC_2();
 VAR_5 = FUNC_0(VAR_4->ndfcbase + VAR_0);

 VAR_3[0] = VAR_6[1];
 VAR_3[1] = VAR_6[2];
 VAR_3[2] = VAR_6[3];

 return 0;
}
