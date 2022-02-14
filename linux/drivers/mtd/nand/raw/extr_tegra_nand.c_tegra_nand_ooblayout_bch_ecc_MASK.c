
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int strength; int steps; } ;
struct nand_chip {TYPE_1__ ecc; } ;
struct mtd_oob_region {int length; int offset; } ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct nand_chip* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_4, int VAR_5,
     struct mtd_oob_region *VAR_6)
{
 struct nand_chip *VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = FUNC_0(VAR_1 * VAR_7->ecc.strength,
       VAR_0);

 if (VAR_5 > 0)
  return -VAR_2;

 VAR_6->offset = VAR_3;
 VAR_6->length = FUNC_2(VAR_8 * VAR_7->ecc.steps, 4);

 return 0;
}
