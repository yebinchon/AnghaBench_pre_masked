
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct mwifiex_rx_reorder_tbl {int start_win; int win_size; struct sk_buff** rx_reorder_ptr; } ;
struct mwifiex_private {int rx_reorder_tbl_lock; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct mwifiex_private *VAR_0,
      struct mwifiex_rx_reorder_tbl *VAR_1,
      int VAR_2)
{
 struct sk_buff_head VAR_3;
 struct sk_buff *VAR_4;
 int VAR_5, VAR_6;

 FUNC_1(&VAR_3);
 FUNC_5(&VAR_0->rx_reorder_tbl_lock);

 VAR_5 = (VAR_2 > VAR_1->start_win) ?
        FUNC_3((VAR_2 - VAR_1->start_win), VAR_1->win_size) :
        VAR_1->win_size;

 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
  if (VAR_1->rx_reorder_ptr[VAR_6]) {
   VAR_4 = VAR_1->rx_reorder_ptr[VAR_6];
   FUNC_2(&VAR_3, VAR_4);
   VAR_1->rx_reorder_ptr[VAR_6] = ((void*)0);
  }
 }





 for (VAR_6 = 0; VAR_6 < VAR_1->win_size - VAR_5; ++VAR_6) {
  VAR_1->rx_reorder_ptr[VAR_6] = VAR_1->rx_reorder_ptr[VAR_5 + VAR_6];
  VAR_1->rx_reorder_ptr[VAR_5 + VAR_6] = ((void*)0);
 }

 VAR_1->start_win = VAR_2;
 FUNC_6(&VAR_0->rx_reorder_tbl_lock);

 while ((VAR_4 = FUNC_0(&VAR_3)))
  FUNC_4(VAR_0, VAR_4);
}
