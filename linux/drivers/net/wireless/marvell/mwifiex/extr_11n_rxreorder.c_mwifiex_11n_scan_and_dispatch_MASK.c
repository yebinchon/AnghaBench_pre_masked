
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct mwifiex_rx_reorder_tbl {int win_size; int start_win; struct sk_buff** rx_reorder_ptr; } ;
struct mwifiex_private {int rx_reorder_tbl_lock; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_3 (struct mwifiex_private*,struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct mwifiex_private *VAR_1,
         struct mwifiex_rx_reorder_tbl *VAR_2)
{
 struct sk_buff_head VAR_3;
 struct sk_buff *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 FUNC_1(&VAR_3);
 FUNC_4(&VAR_1->rx_reorder_tbl_lock);

 for (VAR_5 = 0; VAR_5 < VAR_2->win_size; ++VAR_5) {
  if (!VAR_2->rx_reorder_ptr[VAR_5])
   break;
  VAR_4 = VAR_2->rx_reorder_ptr[VAR_5];
  FUNC_2(&VAR_3, VAR_4);
  VAR_2->rx_reorder_ptr[VAR_5] = ((void*)0);
 }





 if (VAR_5 > 0) {
  VAR_7 = VAR_2->win_size - VAR_5;
  for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6) {
   VAR_2->rx_reorder_ptr[VAR_6] = VAR_2->rx_reorder_ptr[VAR_5 + VAR_6];
   VAR_2->rx_reorder_ptr[VAR_5 + VAR_6] = ((void*)0);
  }
 }
 VAR_2->start_win = (VAR_2->start_win + VAR_5) & (VAR_0 - 1);

 FUNC_5(&VAR_1->rx_reorder_tbl_lock);

 while ((VAR_4 = FUNC_0(&VAR_3)))
  FUNC_3(VAR_1, VAR_4);
}
