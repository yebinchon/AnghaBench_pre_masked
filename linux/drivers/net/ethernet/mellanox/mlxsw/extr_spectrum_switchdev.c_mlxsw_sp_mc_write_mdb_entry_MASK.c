
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mlxsw_sp_mid {int in_hw; int fid; int addr; scalar_t__ mid; int ports_in_mid; } ;
struct mlxsw_sp_bridge_device {int mrouter; } ;
struct mlxsw_sp {TYPE_1__* bridge; int core; } ;
struct TYPE_2__ {int mids_bitmap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (long*,int ,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (long*) ;
 long* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (long*,struct mlxsw_sp_bridge_device*,struct mlxsw_sp*) ;
 int FUNC_7 (struct mlxsw_sp*,int ,int ,scalar_t__,int) ;
 int FUNC_8 (struct mlxsw_sp*,scalar_t__,long*,int ) ;
 int FUNC_9 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_10(struct mlxsw_sp *VAR_2,
       struct mlxsw_sp_mid *VAR_3,
       struct mlxsw_sp_bridge_device *VAR_4)
{
 long *VAR_5;
 int VAR_6;
 int VAR_7;
 u16 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_2->bridge->mids_bitmap,
          VAR_1);
 if (VAR_8 == VAR_1)
  return 0;

 VAR_6 = FUNC_5(VAR_2->core);
 VAR_7 = sizeof(long) * FUNC_0(VAR_6);
 VAR_5 = FUNC_4(VAR_7, VAR_0);
 if (!VAR_5)
  return 0;

 FUNC_1(VAR_5, VAR_3->ports_in_mid, VAR_6);
 FUNC_6(VAR_5, VAR_4, VAR_2);

 VAR_3->mid = VAR_8;
 VAR_9 = FUNC_8(VAR_2, VAR_8, VAR_5,
         VAR_4->mrouter);
 FUNC_3(VAR_5);
 if (VAR_9)
  return 0;

 VAR_9 = FUNC_7(VAR_2, VAR_3->addr, VAR_3->fid, VAR_8,
       1);
 if (VAR_9)
  return 0;

 FUNC_9(VAR_8, VAR_2->bridge->mids_bitmap);
 VAR_3->in_hw = 1;
 return 1;
}
