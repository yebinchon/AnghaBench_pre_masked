
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
typedef int u32 ;
struct TYPE_2__ {int gpmc_ecc1_result; int gpmc_ecc_config; } ;
struct omap_nand_info {int gpmc_cs; TYPE_1__ reg; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct omap_nand_info* FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_3, const u_char *VAR_4,
         u_char *VAR_5)
{
 struct omap_nand_info *VAR_6 = FUNC_0(FUNC_1(VAR_3));
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_6->reg.gpmc_ecc_config);
 if (((VAR_7 >> VAR_1) & VAR_0) != VAR_6->gpmc_cs)
  return -VAR_2;


 VAR_7 = FUNC_2(VAR_6->reg.gpmc_ecc1_result);
 *VAR_5++ = VAR_7;
 *VAR_5++ = VAR_7 >> 16;

 *VAR_5++ = ((VAR_7 >> 8) & 0x0f) | ((VAR_7 >> 20) & 0xf0);

 return 0;
}
