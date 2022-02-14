
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ath_tx_info {int qcu; int link; int* buf_addr; int* buf_len; int keytype; int pkt_len; int flags; int* txpower; scalar_t__ keyix; int type; int aggr; int aggr_len; int ndelim; int rtscts_rate; int rates; scalar_t__ is_last; scalar_t__ is_first; scalar_t__ dur_update; } ;
struct ath_hw {int dummy; } ;
struct ar9003_txc {scalar_t__ ctl22; scalar_t__ ctl21; scalar_t__ ctl20; scalar_t__ ctl19; scalar_t__ ctl18; scalar_t__ ctl16; scalar_t__ ctl15; scalar_t__ ctl17; scalar_t__ ctl12; scalar_t__ ctl11; scalar_t__ ctl23; scalar_t__ ctl14; scalar_t__ ctl13; scalar_t__ ctl10; scalar_t__ ctl9; scalar_t__ ctl7; scalar_t__ ctl5; scalar_t__ ctl3; scalar_t__ data3; scalar_t__ data2; scalar_t__ data1; scalar_t__ data0; scalar_t__ link; scalar_t__ info; } ;






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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
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
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct ath_hw *VAR_49, void *VAR_50, struct ath_tx_info *VAR_51)
{
 struct ar9003_txc *VAR_52 = VAR_50;
 int VAR_53 = 0;
 u32 VAR_54, VAR_55, VAR_56;
 u8 VAR_57;

 VAR_57 = ((FUNC_0(VAR_49) || FUNC_1(VAR_49)) ? 0x18 : 0x17);

 VAR_54 = (VAR_48 << VAR_7) |
       (1 << VAR_28) |
       (1 << VAR_6) |
       (VAR_51->qcu << VAR_27) | VAR_57;

 VAR_53 += VAR_54;
 FUNC_3(VAR_52->info, VAR_54);

 VAR_53 += VAR_51->link;
 FUNC_3(VAR_52->link, VAR_51->link);

 VAR_53 += VAR_51->buf_addr[0];
 FUNC_3(VAR_52->data0, VAR_51->buf_addr[0]);
 VAR_53 += VAR_51->buf_addr[1];
 FUNC_3(VAR_52->data1, VAR_51->buf_addr[1]);
 VAR_53 += VAR_51->buf_addr[2];
 FUNC_3(VAR_52->data2, VAR_51->buf_addr[2]);
 VAR_53 += VAR_51->buf_addr[3];
 FUNC_3(VAR_52->data3, VAR_51->buf_addr[3]);

 VAR_53 += (VAR_54 = (VAR_51->buf_len[0] << VAR_2) & VAR_1);
 FUNC_3(VAR_52->ctl3, VAR_54);
 VAR_53 += (VAR_54 = (VAR_51->buf_len[1] << VAR_2) & VAR_1);
 FUNC_3(VAR_52->ctl5, VAR_54);
 VAR_53 += (VAR_54 = (VAR_51->buf_len[2] << VAR_2) & VAR_1);
 FUNC_3(VAR_52->ctl7, VAR_54);
 VAR_53 += (VAR_54 = (VAR_51->buf_len[3] << VAR_2) & VAR_1);
 FUNC_3(VAR_52->ctl9, VAR_54);

 VAR_53 = (u16) (((VAR_53 & 0xffff) + (VAR_53 >> 16)) & 0xffff);
 FUNC_3(VAR_52->ctl10, VAR_53);

 if (VAR_51->is_first || VAR_51->is_last) {
  FUNC_3(VAR_52->ctl13, FUNC_7(VAR_51->rates, 0)
   | FUNC_7(VAR_51->rates, 1)
   | FUNC_7(VAR_51->rates, 2)
   | FUNC_7(VAR_51->rates, 3)
   | (VAR_51->dur_update ? VAR_10 : 0)
   | FUNC_2(0, VAR_3));

  FUNC_3(VAR_52->ctl14, FUNC_5(VAR_51->rates, 0)
   | FUNC_5(VAR_51->rates, 1)
   | FUNC_5(VAR_51->rates, 2)
   | FUNC_5(VAR_51->rates, 3));
 } else {
  FUNC_3(VAR_52->ctl13, 0);
  FUNC_3(VAR_52->ctl14, 0);
 }

 VAR_52->ctl20 = 0;
 VAR_52->ctl21 = 0;
 VAR_52->ctl22 = 0;
 VAR_52->ctl23 = 0;

 VAR_56 = FUNC_2(VAR_51->keytype, VAR_11);
 if (!VAR_51->is_first) {
  FUNC_3(VAR_52->ctl11, 0);
  FUNC_3(VAR_52->ctl12, VAR_51->is_last ? 0 : VAR_26);
  FUNC_3(VAR_52->ctl15, 0);
  FUNC_3(VAR_52->ctl16, 0);
  FUNC_3(VAR_52->ctl17, VAR_56);
  FUNC_3(VAR_52->ctl18, 0);
  FUNC_3(VAR_52->ctl19, 0);
  return;
 }

 FUNC_3(VAR_52->ctl11, (VAR_51->pkt_len & VAR_14)
  | (VAR_51->flags & VAR_46 ? VAR_30 : 0)
  | FUNC_2(VAR_51->txpower[0], VAR_31)
  | (VAR_51->flags & VAR_45 ? VAR_29 : 0)
  | (VAR_51->keyix != VAR_47 ? VAR_9 : 0)
  | (VAR_51->flags & VAR_40 ? VAR_18 : 0)
  | (VAR_51->flags & VAR_35 ? VAR_5 : 0)
  | (VAR_51->flags & VAR_44 ? VAR_25 :
     (VAR_51->flags & VAR_36 ? VAR_4 : 0)));

 VAR_55 = (VAR_51->keyix != VAR_47 ?
   FUNC_2(VAR_51->keyix, VAR_8) : 0)
  | FUNC_2(VAR_51->type, VAR_15)
  | (VAR_51->flags & VAR_41 ? VAR_20 : 0)
  | (VAR_51->flags & VAR_38 ? VAR_13 : 0)
  | (VAR_51->flags & VAR_37 ? VAR_12 : 0);

 VAR_56 |= (VAR_51->flags & VAR_39 ? VAR_17 : 0);
 switch (VAR_51->aggr) {
 case 131:
  VAR_56 |= FUNC_2(VAR_51->aggr_len, VAR_0);

 case 129:
  VAR_55 |= VAR_16 | VAR_19;
  VAR_56 |= FUNC_2(VAR_51->ndelim, VAR_23);
  break;
 case 130:
  VAR_55 |= VAR_16;
  break;
 case 128:
  break;
 }

 VAR_54 = (VAR_51->flags & VAR_42) >> VAR_43;
 VAR_55 |= FUNC_2(VAR_54, VAR_22);

 FUNC_3(VAR_52->ctl12, VAR_55);
 FUNC_3(VAR_52->ctl17, VAR_56);

 FUNC_3(VAR_52->ctl15, FUNC_4(VAR_51->rates, 0)
  | FUNC_4(VAR_51->rates, 1));

 FUNC_3(VAR_52->ctl16, FUNC_4(VAR_51->rates, 2)
  | FUNC_4(VAR_51->rates, 3));

 FUNC_3(VAR_52->ctl18, FUNC_6(VAR_51->rates, 0)
  | FUNC_6(VAR_51->rates, 1)
  | FUNC_6(VAR_51->rates, 2)
  | FUNC_6(VAR_51->rates, 3)
  | FUNC_2(VAR_51->rtscts_rate, VAR_24));

 FUNC_3(VAR_52->ctl19, VAR_21);

 FUNC_3(VAR_52->ctl20, FUNC_2(VAR_51->txpower[1], VAR_32));
 FUNC_3(VAR_52->ctl21, FUNC_2(VAR_51->txpower[2], VAR_33));
 FUNC_3(VAR_52->ctl22, FUNC_2(VAR_51->txpower[3], VAR_34));
}
