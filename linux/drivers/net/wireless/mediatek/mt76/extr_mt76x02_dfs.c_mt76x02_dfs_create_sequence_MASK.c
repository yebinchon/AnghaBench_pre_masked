
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mt76x02_dfs_sw_detector_params {int min_pri; int max_pri; int pri_margin; } ;
struct mt76x02_dfs_sequence {int pri; int first_ts; int last_ts; int engine; int count; int head; } ;
struct mt76x02_dfs_pattern_detector {int sequences; struct mt76x02_dfs_sw_detector_params sw_dpd_params; struct mt76x02_dfs_event_rb* event_rb; } ;
struct mt76x02_dfs_event_rb {int t_rb; int h_rb; struct mt76x02_dfs_event* data; } ;
struct mt76x02_dfs_event {int engine; int width; int ts; } ;
struct TYPE_2__ {int region; } ;
struct mt76x02_dev {TYPE_1__ mt76; struct mt76x02_dfs_pattern_detector dfs_pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;




 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int,int ) ;
 struct mt76x02_dfs_sequence* FUNC_5 (struct mt76x02_dev*) ;

__attribute__((used)) static int FUNC_6(struct mt76x02_dev *VAR_3,
           struct mt76x02_dfs_event *VAR_4,
           u16 VAR_5)
{
 struct mt76x02_dfs_pattern_detector *VAR_6 = &VAR_3->dfs_pd;
 struct mt76x02_dfs_sw_detector_params *VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 struct mt76x02_dfs_sequence VAR_12, *VAR_13;
 struct mt76x02_dfs_event_rb *VAR_14;
 struct mt76x02_dfs_event *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_14 = VAR_4->engine == 2 ? &VAR_6->event_rb[1]
          : &VAR_6->event_rb[0];

 VAR_16 = FUNC_3(VAR_14->t_rb, VAR_2);
 VAR_18 = FUNC_3(VAR_14->h_rb, VAR_2);

 while (VAR_16 != VAR_18) {
  VAR_15 = &VAR_14->data[VAR_16];
  VAR_9 = VAR_4->width + VAR_15->width;

  VAR_7 = &VAR_6->sw_dpd_params;
  switch (VAR_3->mt76.region) {
  case 130:
  case 129:
   if (VAR_9 < 600)
    VAR_8 = 8;
   else
    VAR_8 = VAR_9 >> 3;
   break;
  case 131:
   if (VAR_4->engine == 2)
    VAR_8 = VAR_9 >> 6;
   else if (VAR_9 < 620)
    VAR_8 = 24;
   else
    VAR_8 = 8;
   break;
  case 128:
  default:
   return -VAR_0;
  }

  VAR_19 = VAR_4->ts - VAR_15->ts;
  if (FUNC_1(VAR_4->width - VAR_15->width) > VAR_8 ||
      VAR_19 < VAR_7->min_pri)
   goto next;

  if (VAR_19 > VAR_7->max_pri)
   break;

  VAR_12.pri = VAR_4->ts - VAR_15->ts;
  VAR_12.first_ts = VAR_15->ts;
  VAR_12.last_ts = VAR_4->ts;
  VAR_12.engine = VAR_4->engine;
  VAR_12.count = 2;

  VAR_17 = FUNC_3(VAR_16, VAR_2);
  while (VAR_17 != VAR_18) {
   VAR_15 = &VAR_14->data[VAR_17];
   VAR_11 = VAR_4->ts - VAR_15->ts;
   VAR_10 = FUNC_4(VAR_11, VAR_12.pri,
      VAR_7->pri_margin);
   if (VAR_10 > 0) {
    VAR_12.first_ts = VAR_15->ts;
    VAR_12.count++;
   }

   VAR_17 = FUNC_3(VAR_17, VAR_2);
  }
  if (VAR_12.count <= VAR_5)
   goto next;

  VAR_13 = FUNC_5(VAR_3);
  if (!VAR_13)
   return -VAR_1;

  *VAR_13 = VAR_12;
  FUNC_0(&VAR_13->head);
  FUNC_2(&VAR_13->head, &VAR_6->sequences);
next:
  VAR_16 = FUNC_3(VAR_16, VAR_2);
 }
 return 0;
}
