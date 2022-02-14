
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pucan_wr_err_cnt {scalar_t__ rx_counter; scalar_t__ tx_counter; int sel_mask; } ;
struct peak_canfd_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct pucan_wr_err_cnt* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct peak_canfd_priv*) ;
 int FUNC_3 (struct peak_canfd_priv*) ;

__attribute__((used)) static int FUNC_4(struct peak_canfd_priv *VAR_3)
{
 struct pucan_wr_err_cnt *VAR_4;

 VAR_4 = FUNC_1(FUNC_2(VAR_3), VAR_0);

 VAR_4->sel_mask = FUNC_0(VAR_2 | VAR_1);
 VAR_4->tx_counter = 0;
 VAR_4->rx_counter = 0;

 return FUNC_3(VAR_3);
}
