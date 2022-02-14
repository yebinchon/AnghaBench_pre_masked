
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {int gpmc_ecc_config; } ;
struct TYPE_4__ {int bytes; } ;
struct TYPE_5__ {TYPE_1__ ecc; } ;
struct omap_nand_info {TYPE_3__ reg; TYPE_2__ nand; } ;
struct mtd_info {int dummy; } ;


 int FUNC_0 (struct mtd_info*,int const*,int *,int) ;
 struct omap_nand_info* FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_0,
     const u_char *VAR_1, u_char *VAR_2)
{
 struct omap_nand_info *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = VAR_3->nand.ecc.bytes;
 unsigned long VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = ((FUNC_2(VAR_3->reg.gpmc_ecc_config) >> 4) & 0x7) + 1;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_6);
  if (VAR_7)
   return VAR_7;

  VAR_2 += VAR_4;
 }

 return 0;
}
