
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; } ;
struct ixgb_rx_desc {int status; int errors; } ;
struct ixgb_adapter {int hw_csum_rx_good; int hw_csum_rx_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_1(struct ixgb_adapter *VAR_4,
                 struct ixgb_rx_desc *VAR_5,
                 struct sk_buff *VAR_6)
{



 if ((VAR_5->status & VAR_2) ||
    (!(VAR_5->status & VAR_3))) {
  FUNC_0(VAR_6);
  return;
 }



 if (VAR_5->errors & VAR_1) {

  FUNC_0(VAR_6);
  VAR_4->hw_csum_rx_error++;
 } else {

  VAR_6->ip_summed = VAR_0;
  VAR_4->hw_csum_rx_good++;
 }
}
