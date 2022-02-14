
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {char* primary_key; } ;
struct TYPE_2__ {struct neighbour* n; } ;
struct mlxsw_sp_neigh_entry {int counter_index; scalar_t__ counter_valid; int ha; int rif; TYPE_1__ key; } ;
struct mlxsw_sp {int core; } ;
typedef enum mlxsw_reg_rauht_op { ____Placeholder_mlxsw_reg_rauht_op } mlxsw_reg_rauht_op ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ,int ,char const*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_sp *VAR_2,
    struct mlxsw_sp_neigh_entry *VAR_3,
    enum mlxsw_reg_rauht_op VAR_4)
{
 struct neighbour *VAR_5 = VAR_3->key.n;
 char VAR_6[VAR_0];
 const char *VAR_7 = VAR_5->primary_key;

 FUNC_1(VAR_6, VAR_4, VAR_3->rif, VAR_3->ha,
         VAR_7);
 if (VAR_3->counter_valid)
  FUNC_2(VAR_6,
          VAR_3->counter_index);
 return FUNC_3(VAR_2->core, FUNC_0(VAR_1), VAR_6);
}
