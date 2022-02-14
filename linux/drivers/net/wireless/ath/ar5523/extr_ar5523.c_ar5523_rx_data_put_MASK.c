
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5523_rx_data {int list; } ;
struct ar5523 {int rx_data_list_lock; int rx_data_free; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ar5523 *VAR_0,
    struct ar5523_rx_data *VAR_1)
{
 unsigned long VAR_2;
 FUNC_1(&VAR_0->rx_data_list_lock, VAR_2);
 FUNC_0(&VAR_1->list, &VAR_0->rx_data_free);
 FUNC_2(&VAR_0->rx_data_list_lock, VAR_2);
}
