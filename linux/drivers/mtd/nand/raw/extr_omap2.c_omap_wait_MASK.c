
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gpmc_nand_data; int gpmc_nand_command; } ;
struct omap_nand_info {TYPE_1__ reg; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 struct omap_nand_info* FUNC_2 (int ) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_3)
{
 struct omap_nand_info *VAR_4 = FUNC_2(FUNC_3(VAR_3));
 unsigned long VAR_5 = VAR_2;
 int VAR_6;

 VAR_5 += FUNC_1(400);

 FUNC_6(VAR_0 & 0xFF, VAR_4->reg.gpmc_nand_command);
 while (FUNC_5(VAR_2, VAR_5)) {
  VAR_6 = FUNC_4(VAR_4->reg.gpmc_nand_data);
  if (VAR_6 & VAR_1)
   break;
  FUNC_0();
 }

 VAR_6 = FUNC_4(VAR_4->reg.gpmc_nand_data);
 return VAR_6;
}
