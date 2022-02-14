
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_nexthop {int should_offload; int update; } ;



__attribute__((used)) static void FUNC_0(struct mlxsw_sp_nexthop *VAR_0,
         bool VAR_1)
{
 if (!VAR_1)
  VAR_0->should_offload = 1;
 else
  VAR_0->should_offload = 0;
 VAR_0->update = 1;
}
