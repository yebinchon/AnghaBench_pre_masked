
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct efx_tx_queue {scalar_t__ timestamping; } ;
struct efx_ptp_data {TYPE_1__* channel; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; } ;
struct TYPE_2__ {struct efx_tx_queue* tx_queue; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct efx_tx_queue*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_2, struct sk_buff *VAR_3)
{
 struct efx_ptp_data *VAR_4 = VAR_2->ptp_data;
 struct efx_tx_queue *VAR_5;
 u8 VAR_6 = VAR_3->ip_summed == VAR_0 ? VAR_1 : 0;

 VAR_5 = &VAR_4->channel->tx_queue[VAR_6];
 if (VAR_5 && VAR_5->timestamping) {
  FUNC_2(VAR_5, VAR_3);
 } else {
  FUNC_0(1, "PTP channel has no timestamped tx queue\n");
  FUNC_1(VAR_3);
 }
}
