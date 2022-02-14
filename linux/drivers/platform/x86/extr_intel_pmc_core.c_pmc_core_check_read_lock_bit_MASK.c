
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pmc_dev {TYPE_1__* map; } ;
struct TYPE_2__ {int pm_read_disable_bit; int pm_cfg_offset; } ;


 int FUNC_0 (int ) ;
 struct pmc_dev VAR_0 ;
 int FUNC_1 (struct pmc_dev*,int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct pmc_dev *VAR_1 = &VAR_0;
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_1->map->pm_cfg_offset);
 return VAR_2 & FUNC_0(VAR_1->map->pm_read_disable_bit);
}
