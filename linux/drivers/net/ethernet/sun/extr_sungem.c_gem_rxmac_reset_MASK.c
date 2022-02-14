
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct gem_txd {int dummy; } ;
struct gem_rxd {int status_word; } ;
struct gem {int mac_rx_cfg; int swrst_base; int rx_pause_off; int rx_pause_on; scalar_t__ regs; scalar_t__ gblock_dvma; scalar_t__ rx_old; scalar_t__ rx_new; int ** rx_skbs; TYPE_1__* init_block; struct net_device* dev; } ;
struct TYPE_2__ {struct gem_rxd* rxd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct gem*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct gem *VAR_27)
{
 struct net_device *VAR_28 = VAR_27->dev;
 int VAR_29, VAR_30;
 u64 VAR_31;
 u32 VAR_32;


 FUNC_6(VAR_10, VAR_27->regs + VAR_9);
 for (VAR_29 = 0; VAR_29 < 5000; VAR_29++) {
  if (!(FUNC_4(VAR_27->regs + VAR_9) & VAR_10))
   break;
  FUNC_5(10);
 }
 if (VAR_29 == 5000) {
  FUNC_3(VAR_28, "RX MAC will not reset, resetting whole chip\n");
  return 1;
 }

 FUNC_6(VAR_27->mac_rx_cfg & ~VAR_7,
        VAR_27->regs + VAR_6);
 for (VAR_29 = 0; VAR_29 < 5000; VAR_29++) {
  if (!(FUNC_4(VAR_27->regs + VAR_6) & VAR_7))
   break;
  FUNC_5(10);
 }
 if (VAR_29 == 5000) {
  FUNC_3(VAR_28, "RX MAC will not disable, resetting whole chip\n");
  return 1;
 }


 FUNC_6(0, VAR_27->regs + VAR_15);
 for (VAR_29 = 0; VAR_29 < 5000; VAR_29++) {
  if (!(FUNC_4(VAR_27->regs + VAR_15) & VAR_17))
   break;
  FUNC_5(10);
 }
 if (VAR_29 == 5000) {
  FUNC_3(VAR_28, "RX DMA will not disable, resetting whole chip\n");
  return 1;
 }

 FUNC_2(5);


 FUNC_6(VAR_27->swrst_base | VAR_4,
        VAR_27->regs + VAR_3);
 for (VAR_29 = 0; VAR_29 < 5000; VAR_29++) {
  if (!(FUNC_4(VAR_27->regs + VAR_3) & VAR_4))
   break;
  FUNC_5(10);
 }
 if (VAR_29 == 5000) {
  FUNC_3(VAR_28, "RX reset command will not execute, resetting whole chip\n");
  return 1;
 }


 for (VAR_30 = 0; VAR_30 < VAR_26; VAR_30++) {
  struct gem_rxd *VAR_33 = &VAR_27->init_block->rxd[VAR_30];

  if (VAR_27->rx_skbs[VAR_30] == ((void*)0)) {
   FUNC_3(VAR_28, "Parts of RX ring empty, resetting whole chip\n");
   return 1;
  }

  VAR_33->status_word = FUNC_1(FUNC_0(VAR_27));
 }
 VAR_27->rx_new = VAR_27->rx_old = 0;


 VAR_31 = (u64) VAR_27->gblock_dvma;
 VAR_31 += (VAR_5 * sizeof(struct gem_txd));
 FUNC_6(VAR_31 >> 32, VAR_27->regs + VAR_19);
 FUNC_6(VAR_31 & 0xffffffff, VAR_27->regs + VAR_20);
 FUNC_6(VAR_26 - 4, VAR_27->regs + VAR_21);
 VAR_32 = (VAR_16 | (VAR_25 << 10) |
        (VAR_0 << 13) | VAR_18);
 FUNC_6(VAR_32, VAR_27->regs + VAR_15);
 if (FUNC_4(VAR_27->regs + VAR_1) & VAR_2)
  FUNC_6(((5 & VAR_13) |
   ((8 << 12) & VAR_14)),
         VAR_27->regs + VAR_12);
 else
  FUNC_6(((5 & VAR_13) |
   ((4 << 12) & VAR_14)),
         VAR_27->regs + VAR_12);
 VAR_32 = (((VAR_27->rx_pause_off / 64) << 0) & VAR_23);
 VAR_32 |= (((VAR_27->rx_pause_on / 64) << 12) & VAR_24);
 FUNC_6(VAR_32, VAR_27->regs + VAR_22);
 VAR_32 = FUNC_4(VAR_27->regs + VAR_15);
 FUNC_6(VAR_32 | VAR_17, VAR_27->regs + VAR_15);
 FUNC_6(VAR_11, VAR_27->regs + VAR_8);
 VAR_32 = FUNC_4(VAR_27->regs + VAR_6);
 FUNC_6(VAR_32 | VAR_7, VAR_27->regs + VAR_6);

 return 0;
}
