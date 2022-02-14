
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u16 ;
struct nand_chip {int dummy; } ;
struct mtd_info {int ecc_step_size; int erasesize; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,struct mtd_info*) ;
 struct mtd_info* FUNC_2 (struct nand_chip*) ;
 int const* VAR_0 ;
 int const* VAR_1 ;
 int const* VAR_2 ;

__attribute__((used)) static u16 FUNC_3(struct nand_chip *VAR_3, int VAR_4,
          bool VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_2(VAR_3);
 const u16 *VAR_7 = VAR_2;
 int VAR_8 = FUNC_1(VAR_6->erasesize, VAR_6);

 if (VAR_8 > FUNC_0(VAR_2))
  VAR_8 = FUNC_0(VAR_2);

 if (VAR_5) {
  if (VAR_6->ecc_step_size == 512)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_0;
 }

 return VAR_7[VAR_4 % VAR_8];
}
