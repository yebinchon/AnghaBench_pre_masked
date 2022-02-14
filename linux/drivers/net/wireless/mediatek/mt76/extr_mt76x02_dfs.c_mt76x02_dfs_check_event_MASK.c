
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct mt76x02_dfs_pattern_detector {struct mt76x02_dfs_event_rb* event_rb; } ;
struct mt76x02_dfs_event_rb {TYPE_1__* data; int t_rb; } ;
struct mt76x02_dfs_event {int engine; scalar_t__ ts; } ;
struct mt76x02_dev {struct mt76x02_dfs_pattern_detector dfs_pd; } ;
struct TYPE_2__ {scalar_t__ ts; int width; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct mt76x02_dev *VAR_2,
        struct mt76x02_dfs_event *VAR_3)
{
 if (VAR_3->engine == 2) {
  struct mt76x02_dfs_pattern_detector *VAR_4 = &VAR_2->dfs_pd;
  struct mt76x02_dfs_event_rb *VAR_5 = &VAR_4->event_rb[1];
  u16 VAR_6;
  u32 VAR_7;

  VAR_6 = FUNC_0(VAR_5->t_rb,
        VAR_0);
  VAR_7 = VAR_3->ts - VAR_5->data[VAR_6].ts;
  if (VAR_7 < VAR_1 &&
      VAR_5->data[VAR_6].width >= 200)
   return 0;
 }
 return 1;
}
