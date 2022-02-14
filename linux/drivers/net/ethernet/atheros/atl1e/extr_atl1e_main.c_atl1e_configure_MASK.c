
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1e_hw {int max_frame_size; int smb_timer; int ict; int tx_count_down; int rx_count_down; int tpd_thresh; int rrd_thresh; int imt; } ;
struct atl1e_adapter {int netdev; struct atl1e_hw hw; } ;


 int FUNC_0 (struct atl1e_hw*,int ) ;
 int FUNC_1 (struct atl1e_hw*,int ,int) ;
 int FUNC_2 (struct atl1e_hw*,int ,int ) ;
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
 int FUNC_3 (struct atl1e_adapter*) ;
 int FUNC_4 (struct atl1e_adapter*) ;
 int FUNC_5 (struct atl1e_adapter*) ;
 int FUNC_6 (struct atl1e_adapter*) ;
 int FUNC_7 (struct atl1e_hw*) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct atl1e_adapter *VAR_19)
{
 struct atl1e_hw *VAR_20 = &VAR_19->hw;

 u32 VAR_21 = 0;


 FUNC_1(VAR_20, VAR_9, ~0);


 FUNC_7(VAR_20);




 FUNC_1(VAR_20, VAR_17, 0);




 FUNC_3(VAR_19);


 FUNC_2(VAR_20, VAR_8, VAR_20->imt);
 FUNC_2(VAR_20, VAR_7, VAR_20->imt);
 FUNC_1(VAR_20, VAR_10, VAR_5 |
   VAR_4 | VAR_3);


 FUNC_2(VAR_20, VAR_13, VAR_20->rrd_thresh);
 FUNC_2(VAR_20, VAR_15, VAR_20->tpd_thresh);
 FUNC_2(VAR_20, VAR_14, VAR_20->rx_count_down);
 FUNC_2(VAR_20, VAR_16, VAR_20->tx_count_down);


 FUNC_2(VAR_20, VAR_6, VAR_20->ict);


 FUNC_1(VAR_20, VAR_11, VAR_20->max_frame_size + VAR_1 +
   VAR_18 + VAR_0);


 FUNC_6(VAR_19);


 FUNC_5(VAR_19);


 FUNC_4(VAR_19);


 FUNC_1(VAR_20, VAR_12, VAR_20->smb_timer);

 VAR_21 = FUNC_0(VAR_20, VAR_9);
 if (FUNC_9((VAR_21 & VAR_2) != 0)) {
  FUNC_8(VAR_19->netdev,
      "atl1e_configure failed, PCIE phy link down\n");
  return -1;
 }

 FUNC_1(VAR_20, VAR_9, 0x7fffffff);
 return 0;
}
