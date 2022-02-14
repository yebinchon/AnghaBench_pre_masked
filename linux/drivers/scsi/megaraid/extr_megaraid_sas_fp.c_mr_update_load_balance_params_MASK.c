
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct MR_LD_RAID {int level; scalar_t__ ldState; } ;
struct MR_DRV_RAID_MAP_ALL {int dummy; } ;
struct LD_LOAD_BALANCE_INFO {int loadBalanceFlag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct MR_LD_RAID* FUNC_0 (int,struct MR_DRV_RAID_MAP_ALL*) ;
 int FUNC_1 (int,struct MR_DRV_RAID_MAP_ALL*) ;
 int VAR_3 ;

void FUNC_2(struct MR_DRV_RAID_MAP_ALL *VAR_4,
 struct LD_LOAD_BALANCE_INFO *VAR_5)
{
 int VAR_6;
 u16 VAR_7;
 struct MR_LD_RAID *VAR_8;

 if (VAR_3 > 128 || VAR_3 < 1)
  VAR_3 = VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_7 = FUNC_1(VAR_6, VAR_4);
  if (VAR_7 >= VAR_1 - 1) {
   VAR_5[VAR_6].loadBalanceFlag = 0;
   continue;
  }

  VAR_8 = FUNC_0(VAR_7, VAR_4);
  if ((VAR_8->level != 1) ||
   (VAR_8->ldState != VAR_2)) {
   VAR_5[VAR_6].loadBalanceFlag = 0;
   continue;
  }
  VAR_5[VAR_6].loadBalanceFlag = 1;
 }
}
