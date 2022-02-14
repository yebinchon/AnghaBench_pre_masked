
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_mid {int in_hw; int mid; int fid; int addr; } ;
struct mlxsw_sp {TYPE_1__* bridge; } ;
struct TYPE_2__ {int mids_bitmap; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_mid *VAR_1)
{
 if (!VAR_1->in_hw)
  return 0;

 FUNC_0(VAR_1->mid, VAR_0->bridge->mids_bitmap);
 VAR_1->in_hw = 0;
 return FUNC_1(VAR_0, VAR_1->addr, VAR_1->fid, VAR_1->mid,
        0);
}
