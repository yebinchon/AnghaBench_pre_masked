
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct brcmf_sdio_hdrinfo {int len; int dat_offset; scalar_t__ seq_num; int len_nxtfrm; scalar_t__ channel; } ;
struct TYPE_2__ {int fc_rcvd; int fc_xon; int fc_xoff; int rx_badseq; int rx_badhdr; int rx_toolong; } ;
struct brcmf_sdio {int rxpending; scalar_t__ flowcontrol; scalar_t__ tx_seq; scalar_t__ tx_max; TYPE_1__ sdcnt; int blocksize; } ;
typedef enum brcmf_sdio_frmtype { ____Placeholder_brcmf_sdio_frmtype } brcmf_sdio_frmtype ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (struct brcmf_sdio*,int,int) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_9(struct brcmf_sdio *VAR_24, u8 *VAR_25,
         struct brcmf_sdio_hdrinfo *VAR_26,
         enum brcmf_sdio_frmtype VAR_27)
{
 u16 VAR_28, VAR_29;
 u8 VAR_30, VAR_31, VAR_32;
 u32 VAR_33;

 FUNC_8(VAR_20, VAR_25);


 VAR_28 = FUNC_5(VAR_25);
 VAR_29 = FUNC_5(VAR_25 + sizeof(u16));

 if (!(VAR_28 | VAR_29)) {
  VAR_24->rxpending = 0;
  return -VAR_4;
 }
 if ((u16)(~(VAR_28 ^ VAR_29))) {
  FUNC_2("HW header checksum error\n");
  VAR_24->sdcnt.rx_badhdr++;
  FUNC_4(VAR_24, 0, 0);
  return -VAR_3;
 }
 if (VAR_28 < VAR_16) {
  FUNC_2("HW header length error\n");
  return -VAR_6;
 }
 if (VAR_27 == VAR_1 &&
     (FUNC_7(VAR_28, VAR_24->blocksize) != VAR_26->len)) {
  FUNC_2("HW superframe header length error\n");
  return -VAR_6;
 }
 if (VAR_27 == VAR_0 && VAR_28 > VAR_26->len) {
  FUNC_2("HW subframe header length error\n");
  return -VAR_6;
 }
 VAR_26->len = VAR_28;


 VAR_25 += VAR_17;
 VAR_33 = FUNC_6(*(__le32 *)VAR_25);
 if (VAR_27 == VAR_1 && FUNC_0(VAR_25)) {
  FUNC_2("Glom descriptor found in superframe head\n");
  VAR_26->len = 0;
  return -VAR_2;
 }
 VAR_30 = (u8)(VAR_33 & VAR_21);
 VAR_26->channel = (VAR_33 & VAR_9) >> VAR_10;
 if (VAR_28 > VAR_7 && VAR_26->channel != VAR_11 &&
     VAR_27 != VAR_1) {
  FUNC_2("HW header length too long\n");
  VAR_24->sdcnt.rx_toolong++;
  FUNC_4(VAR_24, 0, 0);
  VAR_26->len = 0;
  return -VAR_6;
 }
 if (VAR_27 == VAR_1 && VAR_26->channel != VAR_15) {
  FUNC_2("Wrong channel for superframe\n");
  VAR_26->len = 0;
  return -VAR_2;
 }
 if (VAR_27 == VAR_0 && VAR_26->channel != VAR_12 &&
     VAR_26->channel != VAR_13) {
  FUNC_2("Wrong channel for subframe\n");
  VAR_26->len = 0;
  return -VAR_2;
 }
 VAR_26->dat_offset = FUNC_3(VAR_25);
 if (VAR_26->dat_offset < VAR_16 || VAR_26->dat_offset > VAR_26->len) {
  FUNC_2("seq %d: bad data offset\n", VAR_30);
  VAR_24->sdcnt.rx_badhdr++;
  FUNC_4(VAR_24, 0, 0);
  VAR_26->len = 0;
  return -VAR_5;
 }
 if (VAR_26->seq_num != VAR_30) {
  FUNC_1(VAR_8, "seq %d, expected %d\n", VAR_30, VAR_26->seq_num);
  VAR_24->sdcnt.rx_badseq++;
  VAR_26->seq_num = VAR_30;
 }

 if (VAR_27 == VAR_0)
  return 0;
 VAR_26->len_nxtfrm = (VAR_33 & VAR_18) >> VAR_19;
 if (VAR_26->len_nxtfrm << 4 > VAR_7) {

  if (VAR_26->channel != VAR_15)
   FUNC_2("seq %d: next length error\n", VAR_30);
  VAR_26->len_nxtfrm = 0;
 }
 VAR_33 = FUNC_6(*(__le32 *)(VAR_25 + 4));
 VAR_31 = VAR_33 & VAR_14;
 if (VAR_24->flowcontrol != VAR_31) {
  if (~VAR_24->flowcontrol & VAR_31)
   VAR_24->sdcnt.fc_xoff++;
  if (VAR_24->flowcontrol & ~VAR_31)
   VAR_24->sdcnt.fc_xon++;
  VAR_24->sdcnt.fc_rcvd++;
  VAR_24->flowcontrol = VAR_31;
 }
 VAR_32 = (VAR_33 & VAR_22) >> VAR_23;
 if ((u8)(VAR_32 - VAR_24->tx_seq) > 0x40) {
  FUNC_2("seq %d: max tx seq number error\n", VAR_30);
  VAR_32 = VAR_24->tx_seq + 2;
 }
 VAR_24->tx_max = VAR_32;

 return 0;
}
