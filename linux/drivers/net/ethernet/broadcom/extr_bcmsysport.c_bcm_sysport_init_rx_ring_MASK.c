
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_sysport_priv {int num_rx_bds; int num_rx_desc_words; scalar_t__ rx_bds; int netdev; struct bcm_sysport_cb* rx_cbs; scalar_t__ rx_read_ptr; scalar_t__ rx_c_index; scalar_t__ base; } ;
struct bcm_sysport_cb {scalar_t__ bd_addr; } ;


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
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct bcm_sysport_priv*) ;
 int VAR_18 ;
 struct bcm_sysport_cb* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct bcm_sysport_priv*,int ,int ,char*,int,scalar_t__) ;
 int FUNC_3 (struct bcm_sysport_priv*,int ,int ,char*) ;
 int FUNC_4 (struct bcm_sysport_priv*,int ) ;
 int FUNC_5 (struct bcm_sysport_priv*,int ) ;
 int FUNC_6 (struct bcm_sysport_priv*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct bcm_sysport_priv *VAR_19)
{
 struct bcm_sysport_cb *VAR_20;
 u32 VAR_21;
 int VAR_22;
 int VAR_23;


 VAR_19->num_rx_bds = VAR_19->num_rx_desc_words / VAR_17;
 VAR_19->rx_bds = VAR_19->base + VAR_16;
 VAR_19->rx_c_index = 0;
 VAR_19->rx_read_ptr = 0;
 VAR_19->rx_cbs = FUNC_1(VAR_19->num_rx_bds, sizeof(struct bcm_sysport_cb),
    VAR_2);
 if (!VAR_19->rx_cbs) {
  FUNC_3(VAR_19, VAR_18, VAR_19->netdev, "CB allocation failed\n");
  return -VAR_1;
 }

 for (VAR_23 = 0; VAR_23 < VAR_19->num_rx_bds; VAR_23++) {
  VAR_20 = VAR_19->rx_cbs + VAR_23;
  VAR_20->bd_addr = VAR_19->rx_bds + VAR_23 * VAR_0;
 }

 VAR_22 = FUNC_0(VAR_19);
 if (VAR_22) {
  FUNC_3(VAR_19, VAR_18, VAR_19->netdev, "SKB allocation failed\n");
  return VAR_22;
 }


 VAR_21 = FUNC_5(VAR_19, VAR_12);
 if (!(VAR_21 & VAR_4))
  FUNC_4(VAR_19, 0);

 FUNC_6(VAR_19, 0, VAR_14);
 FUNC_6(VAR_19, 0, VAR_13);
 FUNC_6(VAR_19, 0, VAR_7);
 FUNC_6(VAR_19, 0, VAR_3);
 FUNC_6(VAR_19, VAR_19->num_rx_bds << VAR_9 |
     VAR_15, VAR_8);

 FUNC_6(VAR_19, 0, VAR_10);
 FUNC_6(VAR_19, 0, VAR_11);
 FUNC_6(VAR_19, 0, VAR_5);
 FUNC_6(VAR_19, VAR_19->num_rx_desc_words - 1, VAR_6);

 FUNC_2(VAR_19, VAR_18, VAR_19->netdev,
    "RDMA cfg, num_rx_bds=%d, rx_bds=%p\n",
    VAR_19->num_rx_bds, VAR_19->rx_bds);

 return 0;
}
