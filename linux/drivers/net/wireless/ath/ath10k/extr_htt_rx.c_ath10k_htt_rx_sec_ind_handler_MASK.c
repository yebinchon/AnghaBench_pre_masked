
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htt_security_indication {int flags; int peer_id; } ;
struct ath10k_peer {int tids_last_pn; int tids_last_pn_valid; TYPE_1__* rx_pn; } ;
struct ath10k {int data_lock; } ;
typedef enum htt_txrx_sec_cast_type { ____Placeholder_htt_txrx_sec_cast_type } htt_txrx_sec_cast_type ;
typedef enum htt_security_types { ____Placeholder_htt_security_types } htt_security_types ;
struct TYPE_2__ {int sec_type; int pn_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct ath10k_peer* FUNC_3 (struct ath10k*,int ) ;
 int FUNC_4 (struct ath10k*,char*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ath10k *VAR_4,
       struct htt_security_indication *VAR_5)
{
 enum htt_txrx_sec_cast_type VAR_6;
 enum htt_security_types VAR_7;
 struct ath10k_peer *VAR_8;

 FUNC_6(&VAR_4->data_lock);

 VAR_8 = FUNC_3(VAR_4, FUNC_1(VAR_5->peer_id));
 if (!VAR_8) {
  FUNC_4(VAR_4, "failed to find peer id %d for security indication",
       FUNC_1(VAR_5->peer_id));
  goto out;
 }

 VAR_7 = FUNC_0(VAR_5->flags, VAR_1);

 if (VAR_5->flags & VAR_0)
  VAR_6 = VAR_3;
 else
  VAR_6 = VAR_2;

 VAR_8->rx_pn[VAR_6].sec_type = VAR_7;
 VAR_8->rx_pn[VAR_6].pn_len = FUNC_2(VAR_7);

 FUNC_5(VAR_8->tids_last_pn_valid, 0, sizeof(VAR_8->tids_last_pn_valid));
 FUNC_5(VAR_8->tids_last_pn, 0, sizeof(VAR_8->tids_last_pn));

out:
 FUNC_7(&VAR_4->data_lock);
}
