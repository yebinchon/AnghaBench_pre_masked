
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dfs_pattern_detector {struct mt76x02_dfs_event_rb* event_rb; } ;
struct mt76x02_dfs_event_rb {size_t h_rb; size_t t_rb; struct mt76x02_dfs_event* data; } ;
struct mt76x02_dfs_event {scalar_t__ fetch_ts; } ;
struct mt76x02_dev {struct mt76x02_dfs_pattern_detector dfs_pd; } ;


 int FUNC_0 (struct mt76x02_dfs_event_rb*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (size_t,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mt76x02_dev *VAR_2)
{
 struct mt76x02_dfs_pattern_detector *VAR_3 = &VAR_2->dfs_pd;
 struct mt76x02_dfs_event_rb *VAR_4;
 struct mt76x02_dfs_event *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->event_rb); VAR_6++) {
  VAR_4 = &VAR_3->event_rb[VAR_6];

  while (VAR_4->h_rb != VAR_4->t_rb) {
   VAR_5 = &VAR_4->data[VAR_4->h_rb];


   if (FUNC_2(VAR_5->fetch_ts +
        VAR_1))
    break;
   VAR_4->h_rb = FUNC_1(VAR_4->h_rb,
           VAR_0);
  }
 }
}
