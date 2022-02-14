
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct atl2_hw {int fc_rxd_lo; int fc_rxd_hi; scalar_t__ jam_ipg; scalar_t__ max_retry; scalar_t__ lcol; scalar_t__ ipgr2; scalar_t__ ipgr1; scalar_t__ min_ifg; scalar_t__ ipgt; scalar_t__* mac_addr; } ;
struct atl2_adapter {int ring_dma; int txd_dma; int txs_dma; int rxd_dma; int txd_ring_size; struct atl2_hw hw; scalar_t__ rxd_read_ptr; scalar_t__ txd_write_ptr; TYPE_1__* netdev; int ict; int imt; scalar_t__ rxd_ring_size; scalar_t__ txs_ring_size; } ;
struct TYPE_2__ {int mtu; } ;


 int FUNC_0 (struct atl2_hw*,scalar_t__) ;
 int FUNC_1 (struct atl2_hw*,scalar_t__,int) ;
 int FUNC_2 (struct atl2_hw*,int ,int ) ;
 int FUNC_3 (struct atl2_hw*,int ,int ) ;
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
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;

__attribute__((used)) static int FUNC_4(struct atl2_adapter *VAR_44)
{
 struct atl2_hw *VAR_45 = &VAR_44->hw;
 u32 VAR_46;


 FUNC_1(&VAR_44->hw, VAR_26, 0xffffffff);


 VAR_46 = (((u32)VAR_45->mac_addr[2]) << 24) |
  (((u32)VAR_45->mac_addr[3]) << 16) |
  (((u32)VAR_45->mac_addr[4]) << 8) |
  (((u32)VAR_45->mac_addr[5]));
 FUNC_1(VAR_45, VAR_29, VAR_46);
 VAR_46 = (((u32)VAR_45->mac_addr[0]) << 8) |
  (((u32)VAR_45->mac_addr[1]));
 FUNC_1(VAR_45, (VAR_29+4), VAR_46);


 FUNC_1(VAR_45, VAR_22,
  (u32)((VAR_44->ring_dma & 0xffffffff00000000ULL) >> 32));


 FUNC_1(VAR_45, VAR_38,
  (u32)(VAR_44->txd_dma & 0x00000000ffffffffULL));
 FUNC_1(VAR_45, VAR_40,
  (u32)(VAR_44->txs_dma & 0x00000000ffffffffULL));
 FUNC_1(VAR_45, VAR_36,
  (u32)(VAR_44->rxd_dma & 0x00000000ffffffffULL));


 FUNC_3(VAR_45, VAR_39, (u16)(VAR_44->txd_ring_size/4));
 FUNC_3(VAR_45, VAR_41, (u16)VAR_44->txs_ring_size);
 FUNC_3(VAR_45, VAR_37, (u16)VAR_44->rxd_ring_size);
 VAR_46 = (((u32)VAR_45->ipgt & VAR_16) <<
  VAR_17) |
  (((u32)VAR_45->min_ifg & VAR_18) <<
  VAR_19) |
  (((u32)VAR_45->ipgr1 & VAR_12) <<
  VAR_13)|
  (((u32)VAR_45->ipgr2 & VAR_14) <<
  VAR_15);
 FUNC_1(VAR_45, VAR_28, VAR_46);


 VAR_46 = ((u32)VAR_45->lcol & VAR_9) |
  (((u32)VAR_45->max_retry & VAR_10) <<
  VAR_11) |
  VAR_6 |
  (0xa << VAR_5) |
  (((u32)VAR_45->jam_ipg & VAR_7) <<
  VAR_8);
 FUNC_1(VAR_45, VAR_27, VAR_46);


 FUNC_3(VAR_45, VAR_25, VAR_44->imt);
 FUNC_1(VAR_45, VAR_30, VAR_20);


 FUNC_3(VAR_45, VAR_21, VAR_44->ict);


 FUNC_1(VAR_45, VAR_33, VAR_44->netdev->mtu +
  VAR_3 + VAR_43 + VAR_2);


 FUNC_1(VAR_45, VAR_42, 0x177);


 FUNC_3(VAR_45, VAR_35, VAR_45->fc_rxd_hi);
 FUNC_3(VAR_45, VAR_34, VAR_45->fc_rxd_lo);


 FUNC_3(VAR_45, VAR_32, (u16)VAR_44->txd_write_ptr);
 FUNC_3(VAR_45, VAR_31, (u16)VAR_44->rxd_read_ptr);


 FUNC_2(VAR_45, VAR_23, VAR_0);
 FUNC_2(VAR_45, VAR_24, VAR_1);

 VAR_46 = FUNC_0(&VAR_44->hw, VAR_26);
 if ((VAR_46 & VAR_4) != 0)
  VAR_46 = 1;
 else
  VAR_46 = 0;


 FUNC_1(&VAR_44->hw, VAR_26, 0x3fffffff);
 FUNC_1(&VAR_44->hw, VAR_26, 0);
 return VAR_46;
}
