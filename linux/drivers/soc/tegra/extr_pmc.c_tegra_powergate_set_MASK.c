
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_pmc {int powergates_lock; TYPE_1__* soc; } ;
struct TYPE_2__ {scalar_t__ has_gpu_clamps; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int (*) (unsigned int),unsigned int,int,int,int,int) ;
 int FUNC_3 (struct tegra_pmc*,unsigned int,int ) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct tegra_pmc *VAR_4, unsigned int VAR_5,
          bool VAR_6)
{
 bool VAR_7;
 int VAR_8;

 if (VAR_5 == VAR_3 && VAR_4->soc->has_gpu_clamps)
  return -VAR_0;

 FUNC_0(&VAR_4->powergates_lock);

 if (FUNC_4(VAR_5) == VAR_6) {
  FUNC_1(&VAR_4->powergates_lock);
  return 0;
 }

 FUNC_3(VAR_4, VAR_2 | VAR_5, VAR_1);

 VAR_8 = FUNC_2(FUNC_4, VAR_5, VAR_7,
     VAR_7 == VAR_6, 10, 100000);

 FUNC_1(&VAR_4->powergates_lock);

 return VAR_8;
}
