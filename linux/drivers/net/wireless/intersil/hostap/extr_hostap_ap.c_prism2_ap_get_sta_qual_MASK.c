
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sta_info {int last_rx_silence; int last_rx_signal; int last_rx_updated; int addr; int ap; } ;
struct sockaddr {int sa_data; int sa_family; } ;
struct list_head {struct list_head* next; } ;
struct iw_quality {int qual; int updated; void* noise; void* level; } ;
struct ap_data {int sta_table_lock; struct list_head sta_list; } ;
struct TYPE_3__ {struct ap_data* ap; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(local_info_t *VAR_3, struct sockaddr VAR_4[],
      struct iw_quality VAR_5[], int VAR_6,
      int VAR_7)
{
 struct ap_data *VAR_8 = VAR_3->ap;
 struct list_head *VAR_9;
 int VAR_10 = 0;

 FUNC_2(&VAR_8->sta_table_lock);

 for (VAR_9 = VAR_8->sta_list.next; VAR_9 != ((void*)0) && VAR_9 != &VAR_8->sta_list;
      VAR_9 = VAR_9->next) {
  struct sta_info *VAR_11 = (struct sta_info *) VAR_9;

  if (VAR_7 && !VAR_11->ap)
   continue;
  VAR_4[VAR_10].sa_family = VAR_0;
  FUNC_1(VAR_4[VAR_10].sa_data, VAR_11->addr, VAR_1);
  if (VAR_11->last_rx_silence == 0)
   VAR_5[VAR_10].qual = VAR_11->last_rx_signal < 27 ?
    0 : (VAR_11->last_rx_signal - 27) * 92 / 127;
  else
   VAR_5[VAR_10].qual = VAR_11->last_rx_signal -
    VAR_11->last_rx_silence - 35;
  VAR_5[VAR_10].level = FUNC_0(VAR_11->last_rx_signal);
  VAR_5[VAR_10].noise = FUNC_0(VAR_11->last_rx_silence);
  VAR_5[VAR_10].updated = VAR_11->last_rx_updated;

  VAR_11->last_rx_updated = VAR_2;

  VAR_10++;
  if (VAR_10 >= VAR_6)
   break;
 }
 FUNC_3(&VAR_8->sta_table_lock);

 return VAR_10;
}
