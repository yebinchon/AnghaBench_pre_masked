
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_priv {scalar_t__ dbg_rx_fifo_last_overflow; scalar_t__ dbg_rx_fifo_curr_overflow; scalar_t__ dbg_rx_fifo_diff_overflow; } ;
struct dvobj_priv {struct debug_priv drv_dbg; } ;
struct adapter {struct dvobj_priv* dvobj; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct adapter*,scalar_t__) ;
 int FUNC_1 (struct adapter*,scalar_t__) ;
 int FUNC_2 (struct adapter*,scalar_t__,int) ;

void FUNC_3(struct adapter *VAR_1)
{
 struct dvobj_priv *VAR_2 = VAR_1->dvobj;
 struct debug_priv *VAR_3 = &VAR_2->drv_dbg;
 int VAR_4 = 0;



 FUNC_2(VAR_1, VAR_0+3, FUNC_1(VAR_1, VAR_0+3)|0xf0);
 VAR_4 = 1;


 if (VAR_4) {

  VAR_3->dbg_rx_fifo_last_overflow = VAR_3->dbg_rx_fifo_curr_overflow;
  VAR_3->dbg_rx_fifo_curr_overflow = FUNC_0(VAR_1, VAR_0);
  VAR_3->dbg_rx_fifo_diff_overflow = VAR_3->dbg_rx_fifo_curr_overflow-VAR_3->dbg_rx_fifo_last_overflow;
 }
}
