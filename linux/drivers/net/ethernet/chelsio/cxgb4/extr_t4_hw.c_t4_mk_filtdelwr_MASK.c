
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_filter_wr {int rx_chan_rx_rpl_iq; void* del_filter_to_l2tix; void* tid_to_iq; void* len16_pkd; void* op_pkd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct fw_filter_wr*,int ,int) ;

void FUNC_8(unsigned int VAR_2, struct fw_filter_wr *VAR_3, int VAR_4)
{
 FUNC_7(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->op_pkd = FUNC_6(FUNC_4(VAR_0));
 VAR_3->len16_pkd = FUNC_6(FUNC_3(sizeof(*VAR_3) / 16));
 VAR_3->tid_to_iq = FUNC_6(FUNC_2(VAR_2) |
        FUNC_0(VAR_4 < 0));
 VAR_3->del_filter_to_l2tix = FUNC_6(VAR_1);
 if (VAR_4 >= 0)
  VAR_3->rx_chan_rx_rpl_iq =
   FUNC_5(FUNC_1(VAR_4));
}
