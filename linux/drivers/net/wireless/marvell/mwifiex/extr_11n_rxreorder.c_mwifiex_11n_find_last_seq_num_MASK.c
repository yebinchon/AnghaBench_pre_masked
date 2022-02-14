
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reorder_tmr_cnxt {struct mwifiex_private* priv; struct mwifiex_rx_reorder_tbl* ptr; } ;
struct mwifiex_rx_reorder_tbl {int win_size; scalar_t__* rx_reorder_ptr; } ;
struct mwifiex_private {int rx_reorder_tbl_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct reorder_tmr_cnxt *VAR_0)
{
 struct mwifiex_rx_reorder_tbl *VAR_1 = VAR_0->ptr;
 struct mwifiex_private *VAR_2 = VAR_0->priv;
 int VAR_3;

 FUNC_0(&VAR_2->rx_reorder_tbl_lock);
 for (VAR_3 = VAR_1->win_size - 1; VAR_3 >= 0; --VAR_3) {
  if (VAR_1->rx_reorder_ptr[VAR_3]) {
   FUNC_1(&VAR_2->rx_reorder_tbl_lock);
   return VAR_3;
  }
 }
 FUNC_1(&VAR_2->rx_reorder_tbl_lock);

 return -1;
}
