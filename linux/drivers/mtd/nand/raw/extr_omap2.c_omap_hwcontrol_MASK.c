
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gpmc_nand_data; int gpmc_nand_address; int gpmc_nand_command; } ;
struct omap_nand_info {TYPE_1__ reg; } ;
struct nand_chip {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct omap_nand_info* FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct nand_chip *VAR_3, int VAR_4, unsigned int VAR_5)
{
 struct omap_nand_info *VAR_6 = FUNC_0(FUNC_1(VAR_3));

 if (VAR_4 != VAR_2) {
  if (VAR_5 & VAR_1)
   FUNC_2(VAR_4, VAR_6->reg.gpmc_nand_command);

  else if (VAR_5 & VAR_0)
   FUNC_2(VAR_4, VAR_6->reg.gpmc_nand_address);

  else
   FUNC_2(VAR_4, VAR_6->reg.gpmc_nand_data);
 }
}
