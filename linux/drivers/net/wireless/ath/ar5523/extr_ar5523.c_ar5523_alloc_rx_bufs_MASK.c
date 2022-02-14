
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5523_rx_data {int list; int urb; struct ar5523* ar; } ;
struct ar5523 {int rx_data_free_cnt; int rx_data_free; struct ar5523_rx_data* rx_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ar5523*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ar5523 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct ar5523_rx_data *VAR_5 = &VAR_3->rx_data[VAR_4];

  VAR_5->ar = VAR_3;
  VAR_5->urb = FUNC_3(0, VAR_2);
  if (!VAR_5->urb)
   goto err;
  FUNC_2(&VAR_5->list, &VAR_3->rx_data_free);
  FUNC_1(&VAR_3->rx_data_free_cnt);
 }
 return 0;

err:
 FUNC_0(VAR_3);
 return -VAR_1;
}
