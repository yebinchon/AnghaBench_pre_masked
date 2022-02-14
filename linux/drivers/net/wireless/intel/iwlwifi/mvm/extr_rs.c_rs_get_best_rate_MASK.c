
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int type; } ;
struct iwl_scale_tbl_info {int* expected_tpt; TYPE_2__ rate; TYPE_1__* win; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {size_t active_tbl; int last_tpt; struct iwl_scale_tbl_info* lq_info; } ;
typedef size_t s8 ;
typedef scalar_t__ s32 ;
struct TYPE_3__ {scalar_t__ success_ratio; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned long*,int ) ;
 int FUNC_3 (struct iwl_mvm*,int,unsigned long,int ) ;

__attribute__((used)) static s32 FUNC_4(struct iwl_mvm *VAR_4,
       struct iwl_lq_sta *VAR_5,
       struct iwl_scale_tbl_info *VAR_6,
       unsigned long VAR_7, s8 VAR_8)
{
 struct iwl_scale_tbl_info *VAR_9 =
     &(VAR_5->lq_info[VAR_5->active_tbl]);
 s32 VAR_10 = VAR_9->win[VAR_8].success_ratio;
 u16 VAR_11 = VAR_9->expected_tpt[VAR_8];
 const u16 *VAR_12 = VAR_6->expected_tpt;
 u16 VAR_13;
 u32 VAR_14;
 int VAR_15;

 if (VAR_10 >= FUNC_1(VAR_2)) {
  VAR_14 = 100 * VAR_11;
  FUNC_0(VAR_4,
          "SR %d high. Find rate exceeding EXPECTED_CURRENT %d\n",
          VAR_10, VAR_14);
 } else {
  VAR_14 = VAR_5->last_tpt;
  FUNC_0(VAR_4,
          "SR %d not that good. Find rate exceeding ACTUAL_TPT %d\n",
          VAR_10, VAR_14);
 }

 VAR_15 = FUNC_2(&VAR_7, VAR_0);

 while (VAR_15 != VAR_3) {
  if (VAR_14 < (100 * VAR_12[VAR_15]))
   break;

  VAR_13 = FUNC_3(VAR_4, VAR_15, VAR_7,
      VAR_6->rate.type);

  VAR_15 = (VAR_13 >> 8) & 0xff;
 }

 FUNC_0(VAR_4, "Best rate found %d target_tp %d expected_new %d\n",
         VAR_15, VAR_14,
         VAR_15 != VAR_3 ?
         100 * VAR_12[VAR_15] : VAR_1);

 return VAR_15;
}
