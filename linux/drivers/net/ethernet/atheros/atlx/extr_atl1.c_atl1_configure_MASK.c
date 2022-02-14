
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct atl1_hw {int max_frame_size; int dev_rev; scalar_t__ rcb_value; int cmb_tpd; int cmb_rrd; int cmb_rx_timer; int smb_timer; scalar_t__ hw_addr; scalar_t__ cmb_tx_timer; scalar_t__ dma_ord; scalar_t__ dmaw_block; scalar_t__ dmar_block; scalar_t__ rfd_fetch_gap; scalar_t__ rrd_burst; scalar_t__ rfd_burst; scalar_t__ tpd_fetch_gap; scalar_t__ tx_jumbo_task_th; scalar_t__ tpd_fetch_th; scalar_t__ txf_burst; scalar_t__ tpd_burst; scalar_t__ rrd_ret_timer; scalar_t__ rx_jumbo_lkah; scalar_t__ rx_jumbo_th; scalar_t__ jam_ipg; scalar_t__ max_retry; scalar_t__ lcol; scalar_t__ ipgr2; scalar_t__ ipgr1; scalar_t__ min_ifg; scalar_t__ ipgt; scalar_t__* mac_addr; } ;
struct TYPE_9__ {int dma; int count; int next_to_use; } ;
struct TYPE_7__ {int dma; int next_to_use; scalar_t__ count; } ;
struct TYPE_8__ {int dma; int count; int next_to_clean; } ;
struct TYPE_6__ {int dma; } ;
struct TYPE_10__ {int dma; } ;
struct atl1_adapter {struct atl1_hw hw; TYPE_4__ tpd_ring; int ict; int imt; TYPE_2__ rfd_ring; TYPE_3__ rrd_ring; TYPE_1__ smb; TYPE_5__ cmb; } ;


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
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
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
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 scalar_t__ VAR_85 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct atl1_hw*) ;
 int FUNC_5 (struct atl1_adapter*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static u32 FUNC_7(struct atl1_adapter *VAR_86)
{
 struct atl1_hw *VAR_87 = &VAR_86->hw;
 u32 VAR_88;


 FUNC_3(0xffffffff, VAR_86->hw.hw_addr + VAR_46);


 VAR_88 = (((u32) VAR_87->mac_addr[2]) << 24) |
  (((u32) VAR_87->mac_addr[3]) << 16) |
  (((u32) VAR_87->mac_addr[4]) << 8) |
  (((u32) VAR_87->mac_addr[5]));
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_50);
 VAR_88 = (((u32) VAR_87->mac_addr[0]) << 8) | (((u32) VAR_87->mac_addr[1]));
 FUNC_3(VAR_88, VAR_87->hw_addr + (VAR_50 + 4));




 FUNC_3((u32) ((VAR_86->tpd_ring.dma & 0xffffffff00000000ULL) >> 32),
  VAR_87->hw_addr + VAR_36);

 FUNC_3((u32) (VAR_86->rfd_ring.dma & 0x00000000ffffffffULL),
  VAR_87->hw_addr + VAR_38);
 FUNC_3((u32) (VAR_86->rrd_ring.dma & 0x00000000ffffffffULL),
  VAR_87->hw_addr + VAR_40);
 FUNC_3((u32) (VAR_86->tpd_ring.dma & 0x00000000ffffffffULL),
  VAR_87->hw_addr + VAR_42);
 FUNC_3((u32) (VAR_86->cmb.dma & 0x00000000ffffffffULL),
  VAR_87->hw_addr + VAR_37);
 FUNC_3((u32) (VAR_86->smb.dma & 0x00000000ffffffffULL),
  VAR_87->hw_addr + VAR_41);


 VAR_88 = VAR_86->rrd_ring.count;
 VAR_88 <<= 16;
 VAR_88 += VAR_86->rfd_ring.count;
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_39);
 FUNC_3(VAR_86->tpd_ring.count, VAR_87->hw_addr +
  VAR_43);


 FUNC_3(1, VAR_87->hw_addr + VAR_47);


 VAR_88 = ((FUNC_0(&VAR_86->tpd_ring.next_to_use)
    & VAR_30) << VAR_31) |
  ((FUNC_0(&VAR_86->rrd_ring.next_to_clean)
  & VAR_28) << VAR_29) |
  ((FUNC_0(&VAR_86->rfd_ring.next_to_use)
  & VAR_26) << VAR_27);
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_51);


 VAR_88 = (((u32) VAR_87->ipgt & VAR_21)
   << VAR_22) |
  (((u32) VAR_87->min_ifg & VAR_23)
  << VAR_24) |
  (((u32) VAR_87->ipgr1 & VAR_17)
  << VAR_18) |
  (((u32) VAR_87->ipgr2 & VAR_19)
  << VAR_20);
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_49);


 VAR_88 = ((u32) VAR_87->lcol & VAR_14) |
  (((u32) VAR_87->max_retry & VAR_15)
  << VAR_16) |
  VAR_11 |
  (0xa << VAR_10) |
  (((u32) VAR_87->jam_ipg & VAR_12)
  << VAR_13);
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_48);


 FUNC_2(VAR_86->imt, VAR_87->hw_addr + VAR_45);
 FUNC_3(VAR_25, VAR_87->hw_addr + VAR_52);


 FUNC_2(VAR_86->ict, VAR_87->hw_addr + VAR_32);


 FUNC_3(VAR_87->max_frame_size, VAR_87->hw_addr + VAR_53);


 VAR_88 = (((u32) VAR_87->rx_jumbo_th & VAR_67)
   << VAR_68) |
  (((u32) VAR_87->rx_jumbo_lkah & VAR_69)
  << VAR_70) |
  (((u32) VAR_87->rrd_ret_timer & VAR_71)
  << VAR_72);
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_55);


 switch (VAR_87->dev_rev) {
 case 0x8001:
 case 0x9001:
 case 0x9002:
 case 0x9003:
  FUNC_5(VAR_86);
  break;
 default:
  FUNC_4(VAR_87);
  break;
 }


 VAR_88 = (((u32) VAR_87->tpd_burst & VAR_75)
   << VAR_76) |
  (((u32) VAR_87->txf_burst & VAR_79)
  << VAR_80) |
  (((u32) VAR_87->tpd_fetch_th & VAR_77)
  << VAR_78) | VAR_74 |
  VAR_73;
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_57);


 VAR_88 = (((u32) VAR_87->tx_jumbo_task_th & VAR_81)
  << VAR_82) |
  (((u32) VAR_87->tpd_fetch_gap & VAR_83)
  << VAR_84);
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_58);


 VAR_88 = (((u32) VAR_87->rfd_burst & VAR_61)
  << VAR_62) |
  (((u32) VAR_87->rrd_burst & VAR_65)
  << VAR_66) |
  (((u32) VAR_87->rfd_fetch_gap & VAR_63)
  << VAR_64) | VAR_59 |
  VAR_60;
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_54);


 VAR_88 = ((((u32) VAR_87->dmar_block) & VAR_2)
  << VAR_3) |
  ((((u32) VAR_87->dmaw_block) & VAR_5)
  << VAR_6) | VAR_4 |
  VAR_7;
 VAR_88 |= (u32) VAR_87->dma_ord;
 if (VAR_85 == VAR_87->rcb_value)
  VAR_88 |= VAR_8;
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_44);


 VAR_88 = (VAR_87->cmb_tpd > VAR_86->tpd_ring.count) ?
  VAR_87->cmb_tpd : VAR_86->tpd_ring.count;
 VAR_88 <<= 16;
 VAR_88 |= VAR_87->cmb_rrd;
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_33);
 VAR_88 = VAR_87->cmb_rx_timer | ((u32) VAR_87->cmb_tx_timer << 16);
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_34);
 FUNC_3(VAR_87->smb_timer, VAR_87->hw_addr + VAR_56);


 VAR_88 = VAR_0 | VAR_1;
 FUNC_3(VAR_88, VAR_87->hw_addr + VAR_35);

 VAR_88 = FUNC_1(VAR_86->hw.hw_addr + VAR_46);
 if (FUNC_6((VAR_88 & VAR_9) != 0))
  VAR_88 = 1;
 else
  VAR_88 = 0;


 FUNC_3(0x3fffffff, VAR_86->hw.hw_addr + VAR_46);
 FUNC_3(0, VAR_86->hw.hw_addr + VAR_46);
 return VAR_88;
}
