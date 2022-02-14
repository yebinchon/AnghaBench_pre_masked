
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dfs_pattern_detector {scalar_t__ last_event_ts; } ;
struct mt76x02_dfs_event {scalar_t__ ts; } ;
struct mt76x02_dev {struct mt76x02_dfs_pattern_detector dfs_pd; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt76x02_dev*,struct mt76x02_dfs_event*) ;
 int FUNC_1 (struct mt76x02_dev*,struct mt76x02_dfs_event*) ;
 int FUNC_2 (struct mt76x02_dev*,struct mt76x02_dfs_event*,int) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (struct mt76x02_dev*,struct mt76x02_dfs_event*) ;
 int FUNC_5 (struct mt76x02_dev*,struct mt76x02_dfs_event*) ;
 int FUNC_6 (struct mt76x02_dev*,int) ;

__attribute__((used)) static void FUNC_7(struct mt76x02_dev *VAR_1)
{
 struct mt76x02_dfs_pattern_detector *VAR_2 = &VAR_1->dfs_pd;
 struct mt76x02_dfs_event VAR_3;
 int VAR_4, VAR_5;


 FUNC_6(VAR_1, 0);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!FUNC_4(VAR_1, &VAR_3))
   break;

  if (VAR_2->last_event_ts > VAR_3.ts)
   FUNC_3(VAR_1);
  VAR_2->last_event_ts = VAR_3.ts;

  if (!FUNC_1(VAR_1, &VAR_3))
   continue;

  VAR_5 = FUNC_0(VAR_1, &VAR_3);
  FUNC_2(VAR_1, &VAR_3, VAR_5);

  FUNC_5(VAR_1, &VAR_3);
 }
 FUNC_6(VAR_1, 1);
}
