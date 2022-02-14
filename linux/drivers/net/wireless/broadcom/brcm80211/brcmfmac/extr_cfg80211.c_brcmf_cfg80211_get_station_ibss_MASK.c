
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int legacy; } ;
struct station_info {int filled; int signal; void* tx_failed; void* tx_packets; void* rx_dropped_misc; void* rx_packets; TYPE_1__ txrate; } ;
struct brcmf_scb_val_le {int tx_bad_pkt; int tx_good_pkt; int rx_bad_pkt; int rx_good_pkt; int val; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_pktcnt_le {int tx_bad_pkt; int tx_good_pkt; int rx_bad_pkt; int rx_good_pkt; int val; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef int scbval ;
typedef scalar_t__ s32 ;
typedef int pktcnt ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct brcmf_pub*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct brcmf_if*,int ,struct brcmf_scb_val_le*,int) ;
 scalar_t__ FUNC_3 (struct brcmf_if*,int ,int*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct brcmf_scb_val_le*,int ,int) ;

__attribute__((used)) static s32
FUNC_6(struct brcmf_if *VAR_9,
    struct station_info *VAR_10)
{
 struct brcmf_pub *VAR_11 = VAR_9->drvr;
 struct brcmf_scb_val_le VAR_12;
 struct brcmf_pktcnt_le VAR_13;
 s32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;


 VAR_14 = FUNC_3(VAR_9, VAR_1, &VAR_15);
 if (VAR_14 < 0) {
  FUNC_1(VAR_11, "BRCMF_C_GET_RATE error (%d)\n", VAR_14);
  return VAR_14;
 }
 VAR_10->filled |= FUNC_0(VAR_6);
 VAR_10->txrate.legacy = VAR_15 * 5;

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 VAR_14 = FUNC_2(VAR_9, VAR_2, &VAR_12,
         sizeof(VAR_12));
 if (VAR_14) {
  FUNC_1(VAR_11, "BRCMF_C_GET_RSSI error (%d)\n", VAR_14);
  return VAR_14;
 }
 VAR_16 = FUNC_4(VAR_12.val);
 VAR_10->filled |= FUNC_0(VAR_5);
 VAR_10->signal = VAR_16;

 VAR_14 = FUNC_2(VAR_9, VAR_0, &VAR_13,
         sizeof(VAR_13));
 if (VAR_14) {
  FUNC_1(VAR_11, "BRCMF_C_GET_GET_PKTCNTS error (%d)\n", VAR_14);
  return VAR_14;
 }
 VAR_10->filled |= FUNC_0(VAR_4) |
    FUNC_0(VAR_3) |
    FUNC_0(VAR_8) |
    FUNC_0(VAR_7);
 VAR_10->rx_packets = FUNC_4(VAR_13.rx_good_pkt);
 VAR_10->rx_dropped_misc = FUNC_4(VAR_13.rx_bad_pkt);
 VAR_10->tx_packets = FUNC_4(VAR_13.tx_good_pkt);
 VAR_10->tx_failed = FUNC_4(VAR_13.tx_bad_pkt);

 return 0;
}
