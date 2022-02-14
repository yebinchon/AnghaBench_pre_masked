
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_tx_status {int ts_rateindex; int ts_seqnum; int tid; int qid; int desc_id; int ts_rssi_ctl0; int ts_rssi_ctl1; int ts_rssi_ctl2; int ts_shortretry; int ts_longretry; int ts_virtcol; int ts_rssi; int ts_rssi_ext0; int ts_rssi_ext1; int ts_rssi_ext2; int ts_flags; int ts_status; int ba_high; int ba_low; int ts_tstamp; } ;
struct ath_hw {size_t ts_tail; int ts_size; struct ar9003_txs* ts_ring; } ;
struct ar9003_txs {int ds_info; int status1; int status7; int status3; int status6; int status5; int status2; int status4; int status8; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int VAR_39 ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int) ;
 int FUNC_4 (int ,int ,char*,int) ;
 int FUNC_5 (struct ar9003_txs*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct ath_hw *VAR_40, void *VAR_41,
     struct ath_tx_status *VAR_42)
{
 struct ar9003_txs *VAR_43;
 u32 VAR_44;

 VAR_43 = &VAR_40->ts_ring[VAR_40->ts_tail];

 VAR_44 = FUNC_1(VAR_43->status8);
 if ((VAR_44 & VAR_13) == 0)
  return -VAR_37;

 VAR_40->ts_tail = (VAR_40->ts_tail + 1) % VAR_40->ts_size;

 if ((FUNC_0(VAR_43->ds_info, VAR_2) != VAR_36) ||
     (FUNC_0(VAR_43->ds_info, VAR_23) != 1)) {
  FUNC_4(FUNC_2(VAR_40), VAR_39,
   "Tx Descriptor error %x\n", VAR_43->ds_info);
  FUNC_5(VAR_43, 0, sizeof(*VAR_43));
  return -VAR_38;
 }

 VAR_42->ts_rateindex = FUNC_0(VAR_44, VAR_6);
 VAR_42->ts_seqnum = FUNC_0(VAR_44, VAR_8);
 VAR_42->tid = FUNC_0(VAR_44, VAR_24);

 VAR_42->qid = FUNC_0(VAR_43->ds_info, VAR_15);
 VAR_42->desc_id = FUNC_0(VAR_43->status1, VAR_12);
 VAR_42->ts_tstamp = VAR_43->status4;
 VAR_42->ts_status = 0;
 VAR_42->ts_flags = 0;

 if (VAR_44 & VAR_14)
  VAR_42->ts_status |= VAR_31;
 VAR_44 = FUNC_1(VAR_43->status2);
 VAR_42->ts_rssi_ctl0 = FUNC_0(VAR_44, VAR_16);
 VAR_42->ts_rssi_ctl1 = FUNC_0(VAR_44, VAR_17);
 VAR_42->ts_rssi_ctl2 = FUNC_0(VAR_44, VAR_18);
 if (VAR_44 & VAR_9) {
  VAR_42->ts_flags |= VAR_32;
  VAR_42->ba_low = VAR_43->status5;
  VAR_42->ba_high = VAR_43->status6;
 }

 VAR_44 = FUNC_1(VAR_43->status3);
 if (VAR_44 & VAR_3)
  VAR_42->ts_status |= VAR_30;
 if (VAR_44 & VAR_5)
  VAR_42->ts_status |= VAR_28;
 if (VAR_44 & VAR_4) {
  VAR_42->ts_status |= VAR_27;
  FUNC_3(VAR_40, 1);
 }
 if (VAR_44 & VAR_25)
  VAR_42->ts_status |= VAR_29;
 if (VAR_44 & VAR_1)
  VAR_42->ts_flags |= VAR_35;
 if (VAR_44 & VAR_10) {
  VAR_42->ts_flags |= VAR_33;
  FUNC_3(VAR_40, 1);
 }
 if (VAR_44 & VAR_11) {
  VAR_42->ts_flags |= VAR_34;
  FUNC_3(VAR_40, 1);
 }
 VAR_42->ts_shortretry = FUNC_0(VAR_44, VAR_7);
 VAR_42->ts_longretry = FUNC_0(VAR_44, VAR_0);
 VAR_42->ts_virtcol = FUNC_0(VAR_44, VAR_26);

 VAR_44 = FUNC_1(VAR_43->status7);
 VAR_42->ts_rssi = FUNC_0(VAR_44, VAR_22);
 VAR_42->ts_rssi_ext0 = FUNC_0(VAR_44, VAR_19);
 VAR_42->ts_rssi_ext1 = FUNC_0(VAR_44, VAR_20);
 VAR_42->ts_rssi_ext2 = FUNC_0(VAR_44, VAR_21);

 FUNC_5(VAR_43, 0, sizeof(*VAR_43));

 return 0;
}
