
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct net_device_stats {unsigned long rx_errors; unsigned long rx_over_errors; unsigned long rx_frame_errors; unsigned long rx_crc_errors; unsigned long rx_missed_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct arc_emac_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct arc_emac_priv*,int ) ;
 struct arc_emac_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_2(struct net_device *VAR_2)
{
 struct arc_emac_priv *VAR_3 = FUNC_1(VAR_2);
 struct net_device_stats *VAR_4 = &VAR_2->stats;
 unsigned long VAR_5, VAR_6;
 u8 VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_0(VAR_3, VAR_1);
 VAR_5 = FUNC_0(VAR_3, VAR_0);

 VAR_7 = VAR_6;
 VAR_8 = VAR_6 >> 8;
 VAR_9 = VAR_6 >> 16;

 VAR_4->rx_errors += VAR_5;
 VAR_4->rx_errors += VAR_7 + VAR_8 + VAR_9;

 VAR_4->rx_over_errors += VAR_9;
 VAR_4->rx_frame_errors += VAR_8;
 VAR_4->rx_crc_errors += VAR_7;
 VAR_4->rx_missed_errors += VAR_5;

 return VAR_4;
}
