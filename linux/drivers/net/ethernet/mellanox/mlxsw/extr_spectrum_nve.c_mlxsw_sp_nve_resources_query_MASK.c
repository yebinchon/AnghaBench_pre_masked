
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {TYPE_1__* nve; int core; } ;
struct TYPE_2__ {unsigned int* num_max_mc_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_5)
{
 unsigned int VAR_6;

 if (!FUNC_1(VAR_5->core, VAR_1) ||
     !FUNC_1(VAR_5->core, VAR_2))
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_5->core, VAR_1);
 VAR_5->nve->num_max_mc_entries[VAR_3] = VAR_6;
 VAR_6 = FUNC_0(VAR_5->core, VAR_2);
 VAR_5->nve->num_max_mc_entries[VAR_4] = VAR_6;

 return 0;
}
