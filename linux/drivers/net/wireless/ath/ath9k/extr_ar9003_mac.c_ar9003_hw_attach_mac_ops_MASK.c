
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_ops {int get_duration; int proc_txdesc; int set_txdesc; int get_isr; int set_desc_link; int rx_enable; } ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ath_hw_ops* FUNC_0 (struct ath_hw*) ;

void FUNC_1(struct ath_hw *VAR_6)
{
 struct ath_hw_ops *VAR_7 = FUNC_0(VAR_6);

 VAR_7->rx_enable = VAR_3;
 VAR_7->set_desc_link = VAR_4;
 VAR_7->get_isr = VAR_1;
 VAR_7->set_txdesc = VAR_5;
 VAR_7->proc_txdesc = VAR_2;
 VAR_7->get_duration = VAR_0;
}
