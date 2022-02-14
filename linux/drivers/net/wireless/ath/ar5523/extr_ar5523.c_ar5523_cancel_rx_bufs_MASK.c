
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar5523_rx_data {int list; int urb; } ;
struct TYPE_2__ {scalar_t__ next; } ;
struct ar5523 {int rx_data_free_cnt; int rx_data_free; int rx_data_list_lock; TYPE_1__ rx_data_used; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ar5523 *VAR_0)
{
 struct ar5523_rx_data *VAR_1;
 unsigned long VAR_2;

 do {
  FUNC_3(&VAR_0->rx_data_list_lock, VAR_2);
  if (!FUNC_1(&VAR_0->rx_data_used))
   VAR_1 = (struct ar5523_rx_data *) VAR_0->rx_data_used.next;
  else
   VAR_1 = ((void*)0);
  FUNC_4(&VAR_0->rx_data_list_lock, VAR_2);

  if (!VAR_1)
   break;

  FUNC_5(VAR_1->urb);
  FUNC_2(&VAR_1->list, &VAR_0->rx_data_free);
  FUNC_0(&VAR_0->rx_data_free_cnt);
 } while (VAR_1);
}
