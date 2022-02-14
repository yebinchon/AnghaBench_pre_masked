
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pmc_reg_map {int slp_s0_offset; } ;
struct pmc_dev {struct pmc_reg_map* map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pmc_dev*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, u64 *VAR_1)
{
 struct pmc_dev *VAR_2 = VAR_0;
 const struct pmc_reg_map *VAR_3 = VAR_2->map;
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3->slp_s0_offset);
 *VAR_1 = FUNC_0(VAR_4);

 return 0;
}
