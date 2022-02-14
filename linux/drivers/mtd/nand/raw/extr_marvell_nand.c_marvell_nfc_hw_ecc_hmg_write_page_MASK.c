
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nand_chip {int oob_poi; int cur_cs; } ;


 int FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (struct nand_chip*,int const*,int ,int,int) ;
 int FUNC_3 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0,
          const u8 *VAR_1,
          int VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_3(VAR_0, VAR_0->cur_cs);
 FUNC_1(VAR_0);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_0->oob_poi,
         0, VAR_3);
 FUNC_0(VAR_0);

 return VAR_4;
}
