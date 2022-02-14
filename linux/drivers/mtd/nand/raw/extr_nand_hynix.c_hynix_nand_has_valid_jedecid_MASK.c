
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int dummy; } ;
typedef int jedecid ;


 int FUNC_0 (struct nand_chip*,int,int *,int) ;
 int FUNC_1 (char*,int *,int) ;

__attribute__((used)) static bool FUNC_2(struct nand_chip *VAR_0)
{
 u8 VAR_1[5] = { };
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x40, VAR_1, sizeof(VAR_1));
 if (VAR_2)
  return 0;

 return !FUNC_1("JEDEC", VAR_1, sizeof(VAR_1));
}
