
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dfs_pattern_detector {struct mt76x02_dfs_event_rb* event_rb; } ;
struct mt76x02_dfs_event_rb {size_t t_rb; size_t h_rb; struct mt76x02_dfs_event* data; } ;
struct mt76x02_dfs_event {int engine; int fetch_ts; } ;
struct mt76x02_dev {struct mt76x02_dfs_pattern_detector dfs_pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,int ) ;

__attribute__((used)) static void FUNC_1(struct mt76x02_dev *VAR_2,
        struct mt76x02_dfs_event *VAR_3)
{
 struct mt76x02_dfs_pattern_detector *VAR_4 = &VAR_2->dfs_pd;
 struct mt76x02_dfs_event_rb *VAR_5;


 VAR_5 = VAR_3->engine == 2 ? &VAR_4->event_rb[1]
     : &VAR_4->event_rb[0];
 VAR_5->data[VAR_5->t_rb] = *VAR_3;
 VAR_5->data[VAR_5->t_rb].fetch_ts = VAR_1;

 VAR_5->t_rb = FUNC_0(VAR_5->t_rb, VAR_0);
 if (VAR_5->t_rb == VAR_5->h_rb)
  VAR_5->h_rb = FUNC_0(VAR_5->h_rb,
          VAR_0);
}
