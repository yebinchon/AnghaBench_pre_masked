
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_net_stats {int rx_amsdu_error; int rx_replay; int rx_key_error; int rx_mic_error; } ;
struct wil6210_priv {int dummy; } ;
struct sk_buff {int ip_summed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wil6210_priv*,char*,int) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;
 int FUNC_2 (void*,struct wil_net_stats*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct wil6210_priv *VAR_5,
       struct sk_buff *VAR_6,
       struct wil_net_stats *VAR_7)
{
 int VAR_8;
 void *VAR_9 = FUNC_4(VAR_6);

 VAR_8 = FUNC_3(VAR_9);
 if (VAR_8 != 0) {
  FUNC_0(VAR_5, "L2 RX error, l2_rx_status=0x%x\n",
        VAR_8);

  if (VAR_8 == VAR_3) {
   FUNC_1(VAR_5,
         "L2 MIC/KEY error, dropping packet\n");
   VAR_7->rx_mic_error++;
  }
  if (VAR_8 == VAR_2) {
   FUNC_1(VAR_5,
         "L2 KEY error, dropping packet\n");
   VAR_7->rx_key_error++;
  }
  if (VAR_8 == VAR_4) {
   FUNC_1(VAR_5,
         "L2 REPLAY error, dropping packet\n");
   VAR_7->rx_replay++;
  }
  if (VAR_8 == VAR_1) {
   FUNC_1(VAR_5,
         "L2 AMSDU error, dropping packet\n");
   VAR_7->rx_amsdu_error++;
  }
  return -VAR_0;
 }

 VAR_6->ip_summed = FUNC_2(VAR_9, VAR_7);

 return 0;
}
