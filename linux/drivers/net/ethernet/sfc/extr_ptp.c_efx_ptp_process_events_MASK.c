
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;
struct efx_ptp_match {scalar_t__ state; int expiry; } ;
struct efx_ptp_data {int rxq; int rx_no_timestamp; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct efx_nic*,struct sk_buff*) ;
 int VAR_3 ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct efx_nic *VAR_4, struct sk_buff_head *VAR_5)
{
 struct efx_ptp_data *VAR_6 = VAR_4->ptp_data;
 struct sk_buff *VAR_7;

 while ((VAR_7 = FUNC_2(&VAR_6->rxq))) {
  struct efx_ptp_match *VAR_8;

  VAR_8 = (struct efx_ptp_match *)VAR_7->cb;
  if (VAR_8->state == VAR_1) {
   FUNC_0(VAR_5, VAR_7);
  } else if (FUNC_1(VAR_4, VAR_7) ==
      VAR_0) {
   FUNC_0(VAR_5, VAR_7);
  } else if (FUNC_4(VAR_3, VAR_8->expiry)) {
   VAR_8->state = VAR_2;
   ++VAR_6->rx_no_timestamp;
   FUNC_0(VAR_5, VAR_7);
  } else {

   FUNC_3(&VAR_6->rxq, VAR_7);
   break;
  }
 }
}
