
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int gpmc_prefetch_config1; int gpmc_prefetch_control; } ;
struct omap_nand_info {TYPE_1__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_3, struct omap_nand_info *VAR_4)
{
 u32 VAR_5;


 VAR_5 = FUNC_0(VAR_4->reg.gpmc_prefetch_config1);
 if (((VAR_5 >> VAR_2) & VAR_0) != VAR_3)
  return -VAR_1;


 FUNC_1(0x0, VAR_4->reg.gpmc_prefetch_control);


 FUNC_1(0x0, VAR_4->reg.gpmc_prefetch_config1);

 return 0;
}
