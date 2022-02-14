
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8xxxu_tx_urb {int list; } ;
struct rtl8xxxu_priv {scalar_t__ tx_urb_free_count; int tx_stopped; int tx_urb_lock; int hw; int tx_urb_free_list; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct rtl8xxxu_priv *VAR_1,
     struct rtl8xxxu_tx_urb *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_2->list);

 FUNC_3(&VAR_1->tx_urb_lock, VAR_3);

 FUNC_2(&VAR_2->list, &VAR_1->tx_urb_free_list);
 VAR_1->tx_urb_free_count++;
 if (VAR_1->tx_urb_free_count > VAR_0 &&
     VAR_1->tx_stopped) {
  VAR_1->tx_stopped = 0;
  FUNC_1(VAR_1->hw);
 }

 FUNC_4(&VAR_1->tx_urb_lock, VAR_3);
}
