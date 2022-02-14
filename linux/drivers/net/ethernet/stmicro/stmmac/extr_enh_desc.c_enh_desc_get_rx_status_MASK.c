
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_extra_stats {int rx_vlan; int rx_length; int da_rx_filter_fail; int sa_rx_filter_fail; int dribbling_bit; int rx_crc_errors; int rx_mii; int rx_watchdog; int rx_gmac_overflow; int rx_desc; } ;
struct net_device_stats {int rx_crc_errors; int collisions; int rx_length_errors; } ;
struct dma_desc {int des0; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int,int,int) ;
 int VAR_19 ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(void *VAR_20, struct stmmac_extra_stats *VAR_21,
      struct dma_desc *VAR_22)
{
 struct net_device_stats *VAR_23 = (struct net_device_stats *)VAR_20;
 unsigned int VAR_24 = FUNC_1(VAR_22->des0);
 int VAR_25 = VAR_19;

 if (FUNC_4(VAR_24 & VAR_13))
  return VAR_18;

 if (FUNC_4(!(VAR_24 & VAR_9))) {
  VAR_23->rx_length_errors++;
  return VAR_17;
 }

 if (FUNC_4(VAR_24 & VAR_6)) {
  if (FUNC_4(VAR_24 & VAR_4)) {
   VAR_21->rx_desc++;
   VAR_23->rx_length_errors++;
  }
  if (FUNC_4(VAR_24 & VAR_12))
   VAR_21->rx_gmac_overflow++;

  if (FUNC_4(VAR_24 & VAR_8))
   FUNC_3("\tIPC Csum Error/Giant frame\n");

  if (FUNC_4(VAR_24 & VAR_1))
   VAR_23->collisions++;
  if (FUNC_4(VAR_24 & VAR_14))
   VAR_21->rx_watchdog++;

  if (FUNC_4(VAR_24 & VAR_11))
   VAR_21->rx_mii++;

  if (FUNC_4(VAR_24 & VAR_2)) {
   VAR_21->rx_crc_errors++;
   VAR_23->rx_crc_errors++;
  }
  VAR_25 = VAR_17;
 }





 if (FUNC_2(VAR_25 == VAR_19))
  VAR_25 = FUNC_0(!!(VAR_24 & VAR_8),
      !!(VAR_24 & VAR_7),
      !!(VAR_24 & VAR_0));

 if (FUNC_4(VAR_24 & VAR_5))
  VAR_21->dribbling_bit++;

 if (FUNC_4(VAR_24 & VAR_15)) {
  VAR_21->sa_rx_filter_fail++;
  VAR_25 = VAR_17;
 }
 if (FUNC_4(VAR_24 & VAR_3)) {
  VAR_21->da_rx_filter_fail++;
  VAR_25 = VAR_17;
 }
 if (FUNC_4(VAR_24 & VAR_10)) {
  VAR_21->rx_length++;
  VAR_25 = VAR_17;
 }





 return VAR_25;
}
