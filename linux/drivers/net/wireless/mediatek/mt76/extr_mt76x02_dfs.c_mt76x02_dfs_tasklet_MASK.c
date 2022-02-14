
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mt76x02_dfs_pattern_detector {TYPE_1__* stats; scalar_t__ last_sw_check; } ;
struct mt76x02_dfs_hw_pulse {int engine; } ;
struct TYPE_4__ {int hw; int state; } ;
struct mt76x02_dev {TYPE_2__ mt76; struct mt76x02_dfs_pattern_detector dfs_pd; } ;
struct TYPE_3__ {int hw_pattern; int hw_pulse_discarded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct mt76x02_dev*,int ) ;
 int FUNC_3 (struct mt76x02_dev*,int ,int) ;
 int FUNC_4 (struct mt76x02_dev*) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (struct mt76x02_dev*) ;
 int FUNC_7 (struct mt76x02_dev*,struct mt76x02_dfs_hw_pulse*) ;
 int FUNC_8 (struct mt76x02_dev*) ;
 int FUNC_9 (struct mt76x02_dev*,struct mt76x02_dfs_hw_pulse*) ;
 int FUNC_10 (struct mt76x02_dev*,int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

__attribute__((used)) static void FUNC_13(unsigned long VAR_6)
{
 struct mt76x02_dev *VAR_7 = (struct mt76x02_dev *)VAR_6;
 struct mt76x02_dfs_pattern_detector *VAR_8 = &VAR_7->dfs_pd;
 u32 VAR_9;
 int VAR_10;

 if (FUNC_11(VAR_1, &VAR_7->mt76.state))
  goto out;

 if (FUNC_12(VAR_8->last_sw_check +
       VAR_3)) {
  bool VAR_11;

  VAR_8->last_sw_check = VAR_5;

  FUNC_4(VAR_7);
  VAR_11 = FUNC_5(VAR_7);
  if (VAR_11) {

   FUNC_1(VAR_7->mt76.hw);
   FUNC_8(VAR_7);

   return;
  }
  FUNC_6(VAR_7);
 }

 VAR_9 = FUNC_2(VAR_7, FUNC_0(VAR_0, 1));
 if (!(VAR_9 & 0xf))
  goto out;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  struct mt76x02_dfs_hw_pulse VAR_12;

  if (!(VAR_9 & (1 << VAR_10)))
   continue;

  VAR_12.engine = VAR_10;
  FUNC_9(VAR_7, &VAR_12);

  if (!FUNC_7(VAR_7, &VAR_12)) {
   VAR_8->stats[VAR_10].hw_pulse_discarded++;
   continue;
  }


  VAR_8->stats[VAR_10].hw_pattern++;
  FUNC_1(VAR_7->mt76.hw);
  FUNC_8(VAR_7);

  return;
 }


 FUNC_3(VAR_7, FUNC_0(VAR_0, 1), 0xf);

out:
 FUNC_10(VAR_7, VAR_4);
}
