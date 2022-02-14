
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlxsw_sp_rif {int dummy; } ;
struct mlxsw_sp {TYPE_1__* router; int core; } ;
struct TYPE_2__ {int rifs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_3)
{
 u64 VAR_4 = FUNC_0(VAR_3->core, VAR_2);

 VAR_3->router->rifs = FUNC_1(VAR_4,
      sizeof(struct mlxsw_sp_rif *),
      VAR_1);
 if (!VAR_3->router->rifs)
  return -VAR_0;

 return 0;
}
