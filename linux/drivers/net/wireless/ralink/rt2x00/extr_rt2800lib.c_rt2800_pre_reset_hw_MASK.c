
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {struct data_queue* bcn; struct rt2800_drv_data* drv_data; } ;
struct rt2800_drv_data {int sta_ids; int ** wcid_to_sta; } ;
struct queue_entry {int flags; } ;
struct data_queue {int limit; struct queue_entry* entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct rt2x00_dev *VAR_3)
{
 struct rt2800_drv_data *VAR_4 = VAR_3->drv_data;
 struct data_queue *VAR_5 = VAR_3->bcn;
 struct queue_entry *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_8 = VAR_2; VAR_8 < VAR_1; VAR_8++) {
  VAR_4->wcid_to_sta[VAR_8 - VAR_2] = ((void*)0);
  FUNC_0(VAR_8 - VAR_2, VAR_4->sta_ids);
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->limit; VAR_7++) {
  VAR_6 = &VAR_5->entries[VAR_7];
  FUNC_1(VAR_0, &VAR_6->flags);
 }
}
