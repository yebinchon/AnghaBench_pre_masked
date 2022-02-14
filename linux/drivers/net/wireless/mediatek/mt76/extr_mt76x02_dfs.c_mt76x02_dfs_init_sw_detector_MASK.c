
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pri_margin; int min_pri; int max_pri; } ;
struct mt76x02_dfs_pattern_detector {TYPE_2__ sw_dpd_params; } ;
struct TYPE_3__ {int region; } ;
struct mt76x02_dev {TYPE_1__ mt76; struct mt76x02_dfs_pattern_detector dfs_pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





__attribute__((used)) static void FUNC_0(struct mt76x02_dev *VAR_7)
{
 struct mt76x02_dfs_pattern_detector *VAR_8 = &VAR_7->dfs_pd;

 switch (VAR_7->mt76.region) {
 case 130:
  VAR_8->sw_dpd_params.max_pri = VAR_2;
  VAR_8->sw_dpd_params.min_pri = VAR_3;
  VAR_8->sw_dpd_params.pri_margin = VAR_6;
  break;
 case 131:
  VAR_8->sw_dpd_params.max_pri = VAR_0;
  VAR_8->sw_dpd_params.min_pri = VAR_1;
  VAR_8->sw_dpd_params.pri_margin = VAR_6 << 2;
  break;
 case 129:
  VAR_8->sw_dpd_params.max_pri = VAR_4;
  VAR_8->sw_dpd_params.min_pri = VAR_5;
  VAR_8->sw_dpd_params.pri_margin = VAR_6;
  break;
 case 128:
 default:
  break;
 }
}
