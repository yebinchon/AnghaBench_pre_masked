
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct htt_rx_indication_mpdu_range {scalar_t__ mpdu_count; } ;
struct TYPE_2__ {int info0; int peer_id; int info1; } ;
struct htt_rx_indication {TYPE_1__ hdr; } ;
struct ath10k_htt {int num_mpdus_ready; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,int *,char*,struct htt_rx_indication*,int ) ;
 int FUNC_4 (struct ath10k*,int ,void*,struct htt_rx_indication_mpdu_range*,int) ;
 int FUNC_5 (int,int *) ;
 struct htt_rx_indication_mpdu_range* FUNC_6 (struct htt_rx_indication*) ;
 int FUNC_7 (struct htt_rx_indication*,struct htt_rx_indication_mpdu_range*,int) ;

__attribute__((used)) static void FUNC_8(struct ath10k_htt *VAR_3,
      struct htt_rx_indication *VAR_4)
{
 struct ath10k *VAR_5 = VAR_3->ar;
 struct htt_rx_indication_mpdu_range *VAR_6;
 int VAR_7;
 int VAR_8, VAR_9 = 0;
 u16 VAR_10;
 u8 VAR_11;

 VAR_7 = FUNC_0(FUNC_2(VAR_4->hdr.info1),
        VAR_2);
 VAR_10 = FUNC_1(VAR_4->hdr.peer_id);
 VAR_11 = FUNC_0(VAR_4->hdr.info0, VAR_1);

 VAR_6 = FUNC_6(VAR_4);

 FUNC_3(VAR_5, VAR_0, ((void*)0), "htt rx ind: ",
   VAR_4, FUNC_7(VAR_4, VAR_6, VAR_7));

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  VAR_9 += VAR_6[VAR_8].mpdu_count;

 FUNC_5(VAR_9, &VAR_3->num_mpdus_ready);

 FUNC_4(VAR_5, VAR_10, VAR_11, VAR_6,
          VAR_7);
}
