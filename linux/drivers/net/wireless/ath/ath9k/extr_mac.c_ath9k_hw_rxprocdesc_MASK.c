
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct ath_rx_status {int enc_flags; int rs_datalen; int rs_rate; int rs_more; int rs_firstaggr; int rs_isaggr; int rs_moreaggr; int rs_status; void* rs_phyerr; int rs_flags; void* bw; void* rs_antenna; void* rs_keyix; void** rs_rssi_ext; void** rs_rssi_ctl; void* rs_rssi; int rs_tstamp; } ;
struct ath_hw {int dummy; } ;
struct ath_desc {int dummy; } ;
struct TYPE_2__ {int rx; } ;
struct ar5416_desc {int ds_rxstatus8; int ds_rxstatus1; int ds_rxstatus4; int ds_rxstatus0; int ds_rxstatus3; int AR_RcvTimestamp; TYPE_1__ u; } ;


 struct ar5416_desc* FUNC_0 (struct ath_desc*) ;
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
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_29 ;
 void* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 void* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 void* FUNC_2 (int,int ) ;
 void* VAR_42 ;
 void* VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;

int FUNC_3(struct ath_hw *VAR_46, struct ath_desc *VAR_47,
   struct ath_rx_status *VAR_48)
{
 struct ar5416_desc VAR_49;
 struct ar5416_desc *VAR_50 = FUNC_0(VAR_47);
 u32 VAR_51;

 if ((VAR_50->ds_rxstatus8 & VAR_15) == 0)
  return -VAR_41;

 VAR_49.u.rx = VAR_50->u.rx;

 VAR_48->rs_status = 0;
 VAR_48->rs_flags = 0;
 VAR_48->enc_flags = 0;
 VAR_48->bw = VAR_42;

 VAR_48->rs_datalen = VAR_49.ds_rxstatus1 & VAR_2;
 VAR_48->rs_tstamp = VAR_49.AR_RcvTimestamp;

 if (VAR_49.ds_rxstatus8 & VAR_11) {
  VAR_48->rs_rssi = VAR_30;
  VAR_48->rs_rssi_ctl[0] = VAR_30;
  VAR_48->rs_rssi_ctl[1] = VAR_30;
  VAR_48->rs_rssi_ctl[2] = VAR_30;
  VAR_48->rs_rssi_ext[0] = VAR_30;
  VAR_48->rs_rssi_ext[1] = VAR_30;
  VAR_48->rs_rssi_ext[2] = VAR_30;
 } else {
  VAR_48->rs_rssi = FUNC_2(VAR_49.ds_rxstatus4, VAR_27);
  VAR_48->rs_rssi_ctl[0] = FUNC_2(VAR_49.ds_rxstatus0,
      VAR_21);
  VAR_48->rs_rssi_ctl[1] = FUNC_2(VAR_49.ds_rxstatus0,
      VAR_22);
  VAR_48->rs_rssi_ctl[2] = FUNC_2(VAR_49.ds_rxstatus0,
      VAR_23);
  VAR_48->rs_rssi_ext[0] = FUNC_2(VAR_49.ds_rxstatus4,
      VAR_24);
  VAR_48->rs_rssi_ext[1] = FUNC_2(VAR_49.ds_rxstatus4,
      VAR_25);
  VAR_48->rs_rssi_ext[2] = FUNC_2(VAR_49.ds_rxstatus4,
      VAR_26);
 }
 if (VAR_49.ds_rxstatus8 & VAR_18)
  VAR_48->rs_keyix = FUNC_2(VAR_49.ds_rxstatus8, VAR_6);
 else
  VAR_48->rs_keyix = VAR_37;

 VAR_48->rs_rate = FUNC_2(VAR_49.ds_rxstatus0, VAR_28);
 VAR_48->rs_more = (VAR_49.ds_rxstatus1 & VAR_19) ? 1 : 0;

 VAR_48->rs_firstaggr = (VAR_49.ds_rxstatus8 & VAR_16) ? 1 : 0;
 VAR_48->rs_isaggr = (VAR_49.ds_rxstatus8 & VAR_13) ? 1 : 0;
 VAR_48->rs_moreaggr = (VAR_49.ds_rxstatus8 & VAR_20) ? 1 : 0;
 VAR_48->rs_antenna = FUNC_2(VAR_49.ds_rxstatus3, VAR_14);


 VAR_48->enc_flags |=
  (VAR_49.ds_rxstatus3 & VAR_5) ? VAR_44 : 0;
 VAR_48->bw = (VAR_49.ds_rxstatus3 & VAR_0) ? VAR_43 :
      VAR_42;
 if (FUNC_1(VAR_46))
  VAR_48->enc_flags |=
   (VAR_49.ds_rxstatus3 & VAR_29) ?

    (1 << VAR_45) : 0;

 if (VAR_49.ds_rxstatus8 & VAR_12)
  VAR_48->rs_flags |= VAR_40;
 if (VAR_49.ds_rxstatus8 & VAR_11)
  VAR_48->rs_flags |= VAR_39;
 if (VAR_49.ds_rxstatus8 & VAR_3)
  VAR_48->rs_flags |= VAR_38;

 if ((VAR_49.ds_rxstatus8 & VAR_17) == 0) {






  if (VAR_49.ds_rxstatus8 & VAR_9) {
   VAR_48->rs_status |= VAR_36;
   VAR_51 = FUNC_2(VAR_49.ds_rxstatus8, VAR_10);
   VAR_48->rs_phyerr = VAR_51;
  } else if (VAR_49.ds_rxstatus8 & VAR_1)
   VAR_48->rs_status |= VAR_32;
  else if (VAR_49.ds_rxstatus8 & VAR_4)
   VAR_48->rs_status |= VAR_33;
  else if (VAR_49.ds_rxstatus8 & VAR_8)
   VAR_48->rs_status |= VAR_35;
 } else {
  if (VAR_49.ds_rxstatus8 &
      (VAR_1 | VAR_9 | VAR_4 | VAR_8))
   VAR_48->rs_status |= VAR_31;


  if (VAR_48->rs_rate >= 0x90)
   VAR_48->rs_status |= VAR_31;
 }

 if (VAR_49.ds_rxstatus8 & VAR_7)
  VAR_48->rs_status |= VAR_34;

 return 0;
}
