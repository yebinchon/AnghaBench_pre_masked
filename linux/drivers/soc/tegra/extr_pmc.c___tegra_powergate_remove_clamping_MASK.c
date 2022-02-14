
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_pmc {int powergates_lock; TYPE_1__* soc; } ;
struct TYPE_2__ {scalar_t__ has_gpu_clamps; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tegra_pmc*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct tegra_pmc *VAR_5,
          unsigned int VAR_6)
{
 u32 VAR_7;

 FUNC_0(&VAR_5->powergates_lock);





 if (VAR_6 == VAR_2) {
  if (VAR_5->soc->has_gpu_clamps) {
   FUNC_2(VAR_5, 0, VAR_0);
   goto out;
  }
 }





 if (VAR_6 == VAR_4)
  VAR_7 = (1 << VAR_3);
 else if (VAR_6 == VAR_3)
  VAR_7 = (1 << VAR_4);
 else
  VAR_7 = (1 << VAR_6);

 FUNC_2(VAR_5, VAR_7, VAR_1);

out:
 FUNC_1(&VAR_5->powergates_lock);

 return 0;
}
