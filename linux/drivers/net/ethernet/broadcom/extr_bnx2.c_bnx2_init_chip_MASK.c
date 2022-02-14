
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct bnx2 {int flags; int bus_speed_mhz; int* mac_addr; int idle_chk_status_idx; int tx_quick_cons_trip_int; int tx_quick_cons_trip; int rx_quick_cons_trip_int; int rx_quick_cons_trip; int comp_prod_trip_int; int comp_prod_trip; int tx_ticks_int; int tx_ticks; int rx_ticks_int; int rx_ticks; int com_ticks_int; int com_ticks; int cmd_ticks_int; int cmd_ticks; int stats_ticks; int irq_nvecs; void* hc_cmd; TYPE_3__* dev; scalar_t__ stats_blk_mapping; scalar_t__ status_blk_mapping; TYPE_2__* bnx2_napi; int status_stats_size; scalar_t__ pcix_cap; int pdev; } ;
struct TYPE_6__ {int mtu; int dev_addr; } ;
struct TYPE_4__ {int msi; } ;
struct TYPE_5__ {scalar_t__ last_status_idx; TYPE_1__ status_blk; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct bnx2*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (struct bnx2*) ;
 scalar_t__ VAR_4 ;
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
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int FUNC_3 (int) ;
 int VAR_77 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (struct bnx2*,int) ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int FUNC_7 (struct bnx2*,int,int) ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 scalar_t__ VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int FUNC_8 (struct bnx2*,int,int,int ) ;
 int FUNC_9 (struct bnx2*) ;
 int FUNC_10 (struct bnx2*) ;
 int FUNC_11 (struct bnx2*) ;
 int FUNC_12 (struct bnx2*) ;
 int FUNC_13 (struct bnx2*,int ,int) ;
 int FUNC_14 (struct bnx2*,int ,int ) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,scalar_t__,int*) ;
 int FUNC_18 (int ,scalar_t__,int) ;
 int FUNC_19 (int) ;

__attribute__((used)) static int
FUNC_20(struct bnx2 *VAR_94)
{
 u32 VAR_95, VAR_96;
 int VAR_97, VAR_98;


 FUNC_7(VAR_94, VAR_73, VAR_74);

 VAR_95 = VAR_9 |
       VAR_10 |



       VAR_8 |
       VAR_83 << 12 |
       VAR_84 << 16;

 VAR_95 |= (0x2 << 20) | (1 << 11);

 if ((VAR_94->flags & VAR_20) && (VAR_94->bus_speed_mhz == 133))
  VAR_95 |= (1 << 23);

 if ((FUNC_0(VAR_94) == VAR_0) &&
     (FUNC_1(VAR_94) != VAR_2) &&
     !(VAR_94->flags & VAR_20))
  VAR_95 |= VAR_7;

 FUNC_7(VAR_94, VAR_5, VAR_95);

 if (FUNC_1(VAR_94) == VAR_2) {
  VAR_95 = FUNC_6(VAR_94, VAR_81);
  VAR_95 |= VAR_82;
  FUNC_7(VAR_94, VAR_81, VAR_95);
 }

 if (VAR_94->flags & VAR_20) {
  u16 VAR_99;

  FUNC_17(VAR_94->pdev, VAR_94->pcix_cap + VAR_91,
         &VAR_99);
  FUNC_18(VAR_94->pdev, VAR_94->pcix_cap + VAR_91,
          VAR_99 & ~VAR_92);
 }

 FUNC_7(VAR_94, VAR_59,
  VAR_60 |
  VAR_62 |
  VAR_61);



 if (FUNC_0(VAR_94) == VAR_1) {
  VAR_97 = FUNC_9(VAR_94);
  if (VAR_97)
   return VAR_97;
 } else
  FUNC_10(VAR_94);

 if ((VAR_97 = FUNC_11(VAR_94)) != 0)
  return VAR_97;

 FUNC_12(VAR_94);

 FUNC_14(VAR_94, VAR_94->dev->dev_addr, 0);

 VAR_95 = FUNC_6(VAR_94, VAR_65);
 VAR_95 &= ~VAR_68;
 VAR_95 |= VAR_69;
 if (FUNC_0(VAR_94) == VAR_1) {
  VAR_95 |= VAR_66;
  if (FUNC_2(VAR_94) == VAR_4)
   VAR_95 |= VAR_67;
 }

 FUNC_7(VAR_94, VAR_65, VAR_95);

 VAR_95 = 0x10000 + (VAR_88 * VAR_90);
 FUNC_7(VAR_94, VAR_70, VAR_95);
 FUNC_7(VAR_94, VAR_71, VAR_95);

 VAR_95 = (VAR_72 - 8) << 24;
 FUNC_7(VAR_94, VAR_78, VAR_95);


 VAR_95 = FUNC_6(VAR_94, VAR_79);
 VAR_95 &= ~VAR_80;
 VAR_95 |= (VAR_72 - 8) << 24 | 0x40;
 FUNC_7(VAR_94, VAR_79, VAR_95);

 VAR_95 = VAR_94->mac_addr[0] +
       (VAR_94->mac_addr[1] << 8) +
       (VAR_94->mac_addr[2] << 16) +
       VAR_94->mac_addr[3] +
       (VAR_94->mac_addr[4] << 8) +
       (VAR_94->mac_addr[5] << 16);
 FUNC_7(VAR_94, VAR_15, VAR_95);


 VAR_96 = VAR_94->dev->mtu;
 VAR_95 = VAR_96 + VAR_87 + VAR_86;
 if (VAR_95 > (VAR_89 + VAR_87 + 4))
  VAR_95 |= VAR_17;
 FUNC_7(VAR_94, VAR_16, VAR_95);

 if (VAR_96 < VAR_85)
  VAR_96 = VAR_85;

 FUNC_13(VAR_94, VAR_75, FUNC_5(VAR_96));
 FUNC_13(VAR_94, VAR_76, FUNC_3(VAR_96));
 FUNC_13(VAR_94, VAR_77, FUNC_4(VAR_96));

 FUNC_16(VAR_94->bnx2_napi[0].status_blk.msi, 0, VAR_94->status_stats_size);
 for (VAR_98 = 0; VAR_98 < VAR_57; VAR_98++)
  VAR_94->bnx2_napi[VAR_98].last_status_idx = 0;

 VAR_94->idle_chk_status_idx = 0xffff;


 FUNC_7(VAR_94, VAR_13, VAR_14);

 FUNC_7(VAR_94, VAR_51,
  (u64) VAR_94->status_blk_mapping & 0xffffffff);
 FUNC_7(VAR_94, VAR_50, (u64) VAR_94->status_blk_mapping >> 32);

 FUNC_7(VAR_94, VAR_48,
  (u64) VAR_94->stats_blk_mapping & 0xffffffff);
 FUNC_7(VAR_94, VAR_47,
  (u64) VAR_94->stats_blk_mapping >> 32);

 FUNC_7(VAR_94, VAR_53,
  (VAR_94->tx_quick_cons_trip_int << 16) | VAR_94->tx_quick_cons_trip);

 FUNC_7(VAR_94, VAR_38,
  (VAR_94->rx_quick_cons_trip_int << 16) | VAR_94->rx_quick_cons_trip);

 FUNC_7(VAR_94, VAR_27,
  (VAR_94->comp_prod_trip_int << 16) | VAR_94->comp_prod_trip);

 FUNC_7(VAR_94, VAR_55, (VAR_94->tx_ticks_int << 16) | VAR_94->tx_ticks);

 FUNC_7(VAR_94, VAR_40, (VAR_94->rx_ticks_int << 16) | VAR_94->rx_ticks);

 FUNC_7(VAR_94, VAR_28,
  (VAR_94->com_ticks_int << 16) | VAR_94->com_ticks);

 FUNC_7(VAR_94, VAR_24,
  (VAR_94->cmd_ticks_int << 16) | VAR_94->cmd_ticks);

 if (VAR_94->flags & VAR_18)
  FUNC_7(VAR_94, VAR_49, 0);
 else
  FUNC_7(VAR_94, VAR_49, VAR_94->stats_ticks);
 FUNC_7(VAR_94, VAR_52, 0xbb8);

 if (FUNC_1(VAR_94) == VAR_3)
  VAR_95 = VAR_30;
 else {
  VAR_95 = VAR_32 | VAR_34 |
        VAR_30;
 }

 if (VAR_94->flags & VAR_21) {
  FUNC_7(VAR_94, VAR_36,
   VAR_37);

  VAR_95 |= VAR_33;
 }

 if (VAR_94->flags & VAR_19)
  VAR_95 |= VAR_31 | VAR_35;

 FUNC_7(VAR_94, VAR_29, VAR_95);

 if (VAR_94->rx_ticks < 25)
  FUNC_13(VAR_94, VAR_22, 1);
 else
  FUNC_13(VAR_94, VAR_22, 0);

 for (VAR_98 = 1; VAR_98 < VAR_94->irq_nvecs; VAR_98++) {
  u32 VAR_100 = ((VAR_98 - 1) * VAR_46) +
      VAR_42;

  FUNC_7(VAR_94, VAR_100,
   VAR_45 |
   VAR_44 |
   VAR_43);

  FUNC_7(VAR_94, VAR_100 + VAR_54,
   (VAR_94->tx_quick_cons_trip_int << 16) |
    VAR_94->tx_quick_cons_trip);

  FUNC_7(VAR_94, VAR_100 + VAR_56,
   (VAR_94->tx_ticks_int << 16) | VAR_94->tx_ticks);

  FUNC_7(VAR_94, VAR_100 + VAR_39,
   (VAR_94->rx_quick_cons_trip_int << 16) |
   VAR_94->rx_quick_cons_trip);

  FUNC_7(VAR_94, VAR_100 + VAR_41,
   (VAR_94->rx_ticks_int << 16) | VAR_94->rx_ticks);
 }


 FUNC_7(VAR_94, VAR_25, VAR_26);

 FUNC_7(VAR_94, VAR_23, VAR_93);


 FUNC_15(VAR_94->dev);

 if (FUNC_0(VAR_94) == VAR_1) {
  VAR_95 = FUNC_6(VAR_94, VAR_63);
  VAR_95 |= VAR_64;
  FUNC_7(VAR_94, VAR_63, VAR_95);
 }
 VAR_97 = FUNC_8(VAR_94, VAR_12 | VAR_11,
     1, 0);

 FUNC_7(VAR_94, VAR_59, VAR_58);
 FUNC_6(VAR_94, VAR_59);

 FUNC_19(20);

 VAR_94->hc_cmd = FUNC_6(VAR_94, VAR_25);

 return VAR_97;
}
