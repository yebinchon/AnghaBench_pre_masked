
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_rx_status {int rs_datalen; int rs_rssi; int* rs_rssi_ctl; int* rs_rssi_ext; int rs_keyix; int rs_rate; int rs_more; int rs_firstaggr; int rs_isaggr; int rs_moreaggr; int rs_antenna; int evm4; unsigned int rs_phyerr; int rs_status; int rs_flags; int evm3; int evm2; int evm1; int evm0; void* bw; int enc_flags; int rs_tstamp; } ;
struct ath_hw {int dummy; } ;
struct ar9003_rxs {int status11; int ds_info; int status2; int status5; int status1; int status4; int status10; int status9; int status8; int status7; int status6; int status3; } ;


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
 unsigned int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_0 (int,int ) ;
 void* VAR_44 ;
 void* VAR_45 ;
 int VAR_46 ;

int FUNC_1(struct ath_hw *VAR_47, struct ath_rx_status *VAR_48,
     void *VAR_49)
{
 struct ar9003_rxs *VAR_50 = VAR_49;
 unsigned int VAR_51;

 if ((VAR_50->status11 & VAR_17) == 0)
  return -VAR_42;

 if (FUNC_0(VAR_50->ds_info, VAR_6) != 0x168c)
  return -VAR_43;

 if ((VAR_50->ds_info & (VAR_31 | VAR_2)) != 0)
  return -VAR_42;

 VAR_48->rs_status = 0;
 VAR_48->rs_flags = 0;
 VAR_48->enc_flags = 0;
 VAR_48->bw = VAR_44;

 VAR_48->rs_datalen = VAR_50->status2 & VAR_3;
 VAR_48->rs_tstamp = VAR_50->status3;


 VAR_48->rs_rssi = FUNC_0(VAR_50->status5, VAR_29);
 VAR_48->rs_rssi_ctl[0] = FUNC_0(VAR_50->status1, VAR_23);
 VAR_48->rs_rssi_ctl[1] = FUNC_0(VAR_50->status1, VAR_24);
 VAR_48->rs_rssi_ctl[2] = FUNC_0(VAR_50->status1, VAR_25);
 VAR_48->rs_rssi_ext[0] = FUNC_0(VAR_50->status5, VAR_26);
 VAR_48->rs_rssi_ext[1] = FUNC_0(VAR_50->status5, VAR_27);
 VAR_48->rs_rssi_ext[2] = FUNC_0(VAR_50->status5, VAR_28);

 if (VAR_50->status11 & VAR_20)
  VAR_48->rs_keyix = FUNC_0(VAR_50->status11, VAR_8);
 else
  VAR_48->rs_keyix = VAR_38;

 VAR_48->rs_rate = FUNC_0(VAR_50->status1, VAR_30);
 VAR_48->rs_more = (VAR_50->status2 & VAR_21) ? 1 : 0;

 VAR_48->rs_firstaggr = (VAR_50->status11 & VAR_18) ? 1 : 0;
 VAR_48->rs_isaggr = (VAR_50->status11 & VAR_15) ? 1 : 0;
 VAR_48->rs_moreaggr = (VAR_50->status11 & VAR_22) ? 1 : 0;
 VAR_48->rs_antenna = (FUNC_0(VAR_50->status4, VAR_16) & 0x7);
 VAR_48->enc_flags |= (VAR_50->status4 & VAR_7) ? VAR_46 : 0;
 VAR_48->bw = (VAR_50->status4 & VAR_0) ? VAR_45 : VAR_44;

 VAR_48->evm0 = VAR_50->status6;
 VAR_48->evm1 = VAR_50->status7;
 VAR_48->evm2 = VAR_50->status8;
 VAR_48->evm3 = VAR_50->status9;
 VAR_48->evm4 = (VAR_50->status10 & 0xffff);

 if (VAR_50->status11 & VAR_14)
  VAR_48->rs_flags |= VAR_41;

 if (VAR_50->status11 & VAR_13)
  VAR_48->rs_flags |= VAR_40;

 if (VAR_50->status11 & VAR_4)
  VAR_48->rs_flags |= VAR_39;

 if ((VAR_50->status11 & VAR_19) == 0) {
  if (VAR_50->status11 & VAR_1)
   VAR_48->rs_status |= VAR_33;
  else if (VAR_50->status11 & VAR_5)
   VAR_48->rs_status |= VAR_34;
  else if (VAR_50->status11 & VAR_10)
   VAR_48->rs_status |= VAR_36;
  if (VAR_50->status11 & VAR_11) {
   VAR_51 = FUNC_0(VAR_50->status11, VAR_12);
   if ((VAR_51 == VAR_32) &&
       (VAR_50->status11 & VAR_13)) {
    VAR_48->rs_phyerr = 0;
   } else {
    VAR_48->rs_status |= VAR_37;
    VAR_48->rs_phyerr = VAR_51;
   }
  }
 }

 if (VAR_50->status11 & VAR_9)
  VAR_48->rs_status |= VAR_35;

 return 0;
}
