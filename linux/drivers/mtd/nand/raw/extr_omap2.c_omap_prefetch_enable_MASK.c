
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int gpmc_prefetch_control; int gpmc_prefetch_config1; int gpmc_prefetch_config2; } ;
struct omap_nand_info {TYPE_1__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_5, int VAR_6, int VAR_7,
 unsigned int VAR_8, int VAR_9, struct omap_nand_info *VAR_10)
{
 u32 VAR_11;

 if (VAR_6 > VAR_4)
  return -1;

 if (FUNC_1(VAR_10->reg.gpmc_prefetch_control))
  return -VAR_1;


 FUNC_2(VAR_8, VAR_10->reg.gpmc_prefetch_config2);




 VAR_11 = ((VAR_5 << VAR_3) |
  FUNC_0(VAR_6) | VAR_2 |
  (VAR_7 << VAR_0) | (VAR_9 & 0x1));
 FUNC_2(VAR_11, VAR_10->reg.gpmc_prefetch_config1);


 FUNC_2(0x1, VAR_10->reg.gpmc_prefetch_control);

 return 0;
}
