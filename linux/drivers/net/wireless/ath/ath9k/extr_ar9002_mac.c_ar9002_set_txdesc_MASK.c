
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_tx_info {int link; int* buf_addr; int* buf_len; scalar_t__ keytype; int aggr; scalar_t__ keyix; scalar_t__ type; int flags; scalar_t__ aggr_len; scalar_t__ ndelim; int pkt_len; scalar_t__* txpower; scalar_t__ rtscts_rate; int rates; scalar_t__ is_first; scalar_t__ dur_update; scalar_t__ is_last; } ;
struct ath_hw {int dummy; } ;
struct ar5416_desc {scalar_t__ ds_ctl11; scalar_t__ ds_ctl10; scalar_t__ ds_ctl9; scalar_t__ ds_ctl7; scalar_t__ ds_ctl5; scalar_t__ ds_ctl4; scalar_t__ ds_ctl6; scalar_t__ ds_ctl1; scalar_t__ ds_ctl0; scalar_t__ ds_ctl3; scalar_t__ ds_ctl2; scalar_t__ ds_ctl8; scalar_t__ ds_data; scalar_t__ ds_link; scalar_t__ ds_txstatus9; scalar_t__ ds_txstatus8; scalar_t__ ds_txstatus7; scalar_t__ ds_txstatus6; scalar_t__ ds_txstatus5; scalar_t__ ds_txstatus4; scalar_t__ ds_txstatus3; scalar_t__ ds_txstatus2; scalar_t__ ds_txstatus1; scalar_t__ ds_txstatus0; } ;






 struct ar5416_desc* FUNC_0 (void*) ;
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
 scalar_t__ FUNC_1 (struct ath_hw*) ;
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
 scalar_t__ VAR_35 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct ath_hw *VAR_36, void *VAR_37, struct ath_tx_info *VAR_38)
{
 struct ar5416_desc *VAR_39 = FUNC_0(VAR_37);
 u32 VAR_40, VAR_41;

 VAR_39->ds_txstatus0 = VAR_39->ds_txstatus1 = 0;
 VAR_39->ds_txstatus2 = VAR_39->ds_txstatus3 = 0;
 VAR_39->ds_txstatus4 = VAR_39->ds_txstatus5 = 0;
 VAR_39->ds_txstatus6 = VAR_39->ds_txstatus7 = 0;
 VAR_39->ds_txstatus8 = VAR_39->ds_txstatus9 = 0;

 FUNC_3(VAR_39->ds_link, VAR_38->link);
 FUNC_3(VAR_39->ds_data, VAR_38->buf_addr[0]);

 VAR_40 = VAR_38->buf_len[0] | (VAR_38->is_last ? 0 : VAR_19);
 VAR_41 = FUNC_2(VAR_38->keytype, VAR_7);

 if (FUNC_1(VAR_36)) {
  VAR_39->ds_ctl8 = 0;
  VAR_39->ds_ctl9 = 0;
  VAR_39->ds_ctl10 = 0;
  VAR_39->ds_ctl11 = 0;
 }

 if ((VAR_38->is_first || VAR_38->is_last) &&
     VAR_38->aggr != 129 && VAR_38->aggr != 130) {
  FUNC_3(VAR_39->ds_ctl2, FUNC_7(VAR_38->rates, 0)
   | FUNC_7(VAR_38->rates, 1)
   | FUNC_7(VAR_38->rates, 2)
   | FUNC_7(VAR_38->rates, 3)
   | (VAR_38->dur_update ? VAR_6 : 0)
   | FUNC_2(0, VAR_1));

  FUNC_3(VAR_39->ds_ctl3, FUNC_5(VAR_38->rates, 0)
   | FUNC_5(VAR_38->rates, 1)
   | FUNC_5(VAR_38->rates, 2)
   | FUNC_5(VAR_38->rates, 3));
 } else {
  FUNC_3(VAR_39->ds_ctl2, 0);
  FUNC_3(VAR_39->ds_ctl3, 0);
 }

 if (!VAR_38->is_first) {
  FUNC_3(VAR_39->ds_ctl0, 0);
  FUNC_3(VAR_39->ds_ctl1, VAR_40);
  FUNC_3(VAR_39->ds_ctl6, VAR_41);
  return;
 }

 VAR_40 |= (VAR_38->keyix != VAR_35 ? FUNC_2(VAR_38->keyix, VAR_4) : 0)
  | FUNC_2(VAR_38->type, VAR_11)
  | (VAR_38->flags & VAR_31 ? VAR_14 : 0)
  | (VAR_38->flags & VAR_29 ? VAR_9 : 0)
  | (VAR_38->flags & VAR_28 ? VAR_8 : 0);

 switch (VAR_38->aggr) {
 case 131:
  VAR_41 |= FUNC_2(VAR_38->aggr_len, VAR_0);

 case 129:
  VAR_40 |= VAR_12 | VAR_13;
  VAR_41 |= FUNC_2(VAR_38->ndelim, VAR_15);
  break;
 case 130:
  VAR_40 |= VAR_12;
  break;
 case 128:
  break;
 }

 FUNC_3(VAR_39->ds_ctl0, (VAR_38->pkt_len & VAR_10)
  | (VAR_38->flags & VAR_34 ? VAR_21 : 0)
  | FUNC_2(VAR_38->txpower[0], VAR_22)
  | (VAR_38->flags & VAR_33 ? VAR_20 : 0)
  | (VAR_38->flags & VAR_30 ? VAR_18 : 0)
  | (VAR_38->keyix != VAR_35 ? VAR_5 : 0)
  | (VAR_38->flags & VAR_26 ? VAR_3 : 0)
  | (VAR_38->flags & VAR_32 ? VAR_17 :
     (VAR_38->flags & VAR_27 ? VAR_2 : 0)));

 FUNC_3(VAR_39->ds_ctl1, VAR_40);
 FUNC_3(VAR_39->ds_ctl6, VAR_41);

 if (VAR_38->aggr == 129 || VAR_38->aggr == 130)
  return;

 FUNC_3(VAR_39->ds_ctl4, FUNC_4(VAR_38->rates, 0)
  | FUNC_4(VAR_38->rates, 1));

 FUNC_3(VAR_39->ds_ctl5, FUNC_4(VAR_38->rates, 2)
  | FUNC_4(VAR_38->rates, 3));

 FUNC_3(VAR_39->ds_ctl7, FUNC_6(VAR_38->rates, 0)
  | FUNC_6(VAR_38->rates, 1)
  | FUNC_6(VAR_38->rates, 2)
  | FUNC_6(VAR_38->rates, 3)
  | FUNC_2(VAR_38->rtscts_rate, VAR_16));

 FUNC_3(VAR_39->ds_ctl9, FUNC_2(VAR_38->txpower[1], VAR_23));
 FUNC_3(VAR_39->ds_ctl10, FUNC_2(VAR_38->txpower[2], VAR_24));
 FUNC_3(VAR_39->ds_ctl11, FUNC_2(VAR_38->txpower[3], VAR_25));
}
