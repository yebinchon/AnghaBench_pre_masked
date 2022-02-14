
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pmc_dev {TYPE_1__* map; } ;
struct dmi_system_id {int dummy; } ;
struct TYPE_2__ {int pm_vric1_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pmc_dev VAR_2 ;
 int FUNC_0 (struct pmc_dev*,int ) ;
 int FUNC_1 (struct pmc_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct dmi_system_id *VAR_3)
{
 struct pmc_dev *VAR_4 = &VAR_2;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_4->map->pm_vric1_offset);

 VAR_5 |= VAR_1;

 VAR_5 &= ~VAR_0;
 FUNC_1(VAR_4, VAR_4->map->pm_vric1_offset, VAR_5);
 return 0;
}
