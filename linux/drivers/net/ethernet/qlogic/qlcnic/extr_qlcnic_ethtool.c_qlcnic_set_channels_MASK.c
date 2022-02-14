
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int flags; int drv_tx_rings; int drv_sds_rings; int drv_tss_rings; int drv_rss_rings; } ;
struct net_device {int dummy; } ;
struct ethtool_channels {int tx_count; int rx_count; scalar_t__ combined_count; scalar_t__ other_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,char*,...) ;
 int FUNC_1 (struct net_device*,char*,int ,int ) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_5 (struct qlcnic_adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5,
          struct ethtool_channels *VAR_6)
{
 struct qlcnic_adapter *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;

 if (!(VAR_7->flags & VAR_1)) {
  FUNC_0(VAR_5, "No RSS/TSS support in non MSI-X mode\n");
  return -VAR_0;
 }

 if (VAR_6->other_count || VAR_6->combined_count)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_7, VAR_6->rx_count,
      VAR_6->tx_count);
 if (VAR_8)
  return VAR_8;

 if (VAR_7->drv_sds_rings != VAR_6->rx_count) {
  VAR_8 = FUNC_5(VAR_7, VAR_6->rx_count,
         VAR_2);
  if (VAR_8) {
   FUNC_0(VAR_5, "Unable to configure %u SDS rings\n",
       VAR_6->rx_count);
   return VAR_8;
  }
  VAR_7->drv_rss_rings = VAR_6->rx_count;
 }

 if (VAR_7->drv_tx_rings != VAR_6->tx_count) {
  VAR_8 = FUNC_5(VAR_7, VAR_6->tx_count,
         VAR_4);
  if (VAR_8) {
   FUNC_0(VAR_5, "Unable to configure %u Tx rings\n",
       VAR_6->tx_count);
   return VAR_8;
  }
  VAR_7->drv_tss_rings = VAR_6->tx_count;
 }

 VAR_7->flags |= VAR_3;

 VAR_8 = FUNC_3(VAR_7);
 FUNC_1(VAR_5, "Allocated %d SDS rings and %d Tx rings\n",
      VAR_7->drv_sds_rings, VAR_7->drv_tx_rings);

 return VAR_8;
}
