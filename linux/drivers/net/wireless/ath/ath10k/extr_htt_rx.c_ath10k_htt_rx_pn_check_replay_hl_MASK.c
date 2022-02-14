
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union htt_rx_pn_t {int pn48; int member_0; } ;
typedef size_t u32 ;
struct TYPE_5__ {size_t info0; int info1; } ;
struct TYPE_4__ {int flags; } ;
struct htt_rx_indication_hl {TYPE_2__ hdr; int * mpdu_ranges; TYPE_1__ fw_desc; } ;
struct htt_hl_rx_desc {int info; } ;
struct ath10k_peer {int* tids_last_pn_valid; TYPE_3__* rx_pn; union htt_rx_pn_t* tids_last_pn; } ;
struct ath10k {int data_lock; } ;
typedef enum htt_txrx_sec_cast_type { ____Placeholder_htt_txrx_sec_cast_type } htt_txrx_sec_cast_type ;
typedef enum htt_security_types { ____Placeholder_htt_security_types } htt_security_types ;
struct TYPE_6__ {int sec_type; int pn_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (size_t,int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct htt_hl_rx_desc*,union htt_rx_pn_t*,int ) ;
 int FUNC_3 (union htt_rx_pn_t*,union htt_rx_pn_t*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct ath10k *VAR_10,
          struct ath10k_peer *VAR_11,
          struct htt_rx_indication_hl *VAR_12)
{
 bool VAR_13, VAR_14 = 0;
 enum htt_txrx_sec_cast_type VAR_15;
 enum htt_security_types VAR_16;
 union htt_rx_pn_t VAR_17 = {0};
 struct htt_hl_rx_desc *VAR_18;
 union htt_rx_pn_t *VAR_19;
 u32 VAR_20, VAR_21;
 int VAR_22;

 FUNC_4(&VAR_10->data_lock);

 if (!VAR_11)
  return 0;

 if (!(VAR_12->fw_desc.flags & VAR_0))
  return 0;

 VAR_22 = FUNC_0(FUNC_1(VAR_12->hdr.info1),
        VAR_4);

 VAR_18 = (struct htt_hl_rx_desc *)&VAR_12->mpdu_ranges[VAR_22];
 VAR_20 = FUNC_1(VAR_18->info);

 if (!FUNC_0(VAR_20, VAR_1))
  return 0;

 VAR_21 = FUNC_0(VAR_12->hdr.info0, VAR_3);
 VAR_13 = VAR_11->tids_last_pn_valid[VAR_21];
 VAR_19 = &VAR_11->tids_last_pn[VAR_21];

 if (FUNC_0(VAR_20, VAR_2))
  VAR_15 = VAR_8;
 else
  VAR_15 = VAR_9;

 VAR_16 = VAR_11->rx_pn[VAR_15].sec_type;
 FUNC_2(VAR_18, &VAR_17, VAR_11->rx_pn[VAR_15].pn_len);

 if (VAR_16 != VAR_5 &&
     VAR_16 != VAR_6 &&
     VAR_16 != VAR_7)
  return 0;

 if (VAR_13)
  VAR_14 = FUNC_3(&VAR_17, VAR_19);
 else
  VAR_11->tids_last_pn_valid[VAR_21] = 1;

 if (!VAR_14)
  VAR_19->pn48 = VAR_17.pn48;

 return VAR_14;
}
