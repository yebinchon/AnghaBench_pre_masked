
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct nand_chip {int dummy; } ;
struct mtd_info {int oobsize; } ;


 struct mtd_info* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct mtd_info*,int *,int,int) ;
 int FUNC_2 (struct nand_chip*,int const*,int) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_0, const u_char *VAR_1,
        int VAR_2)
{
 struct mtd_info *VAR_3 = FUNC_0(VAR_0);

 if (VAR_2 <= VAR_3->oobsize)
  FUNC_2(VAR_0, VAR_1, VAR_2);
 else

  FUNC_1(VAR_3, (u_char *)VAR_1, VAR_2, 0x1);
}
