
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_extra_stats {int vlan_tag; int rx_mii; int rx_length; int dribbling_bit; int rx_crc_errors; int rx_collision; int ipc_csum_error; int overflow_error; int sa_filter_fail; int rx_desc; } ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(void *VAR_16, struct stmmac_extra_stats *VAR_17,
          struct dma_desc *VAR_18)
{
 int VAR_19 = VAR_15;
 unsigned int VAR_20 = FUNC_0(VAR_18->des0);
 struct net_device_stats *VAR_21 = (struct net_device_stats *)VAR_16;

 if (FUNC_1(VAR_20 & VAR_10))
  return VAR_14;

 if (FUNC_1(!(VAR_20 & VAR_6))) {
  VAR_21->rx_length_errors++;
  return VAR_13;
 }

 if (FUNC_1(VAR_20 & VAR_4)) {
  if (FUNC_1(VAR_20 & VAR_2))
   VAR_17->rx_desc++;
  if (FUNC_1(VAR_20 & VAR_11))
   VAR_17->sa_filter_fail++;
  if (FUNC_1(VAR_20 & VAR_9))
   VAR_17->overflow_error++;
  if (FUNC_1(VAR_20 & VAR_5))
   VAR_17->ipc_csum_error++;
  if (FUNC_1(VAR_20 & VAR_0)) {
   VAR_17->rx_collision++;
   VAR_21->collisions++;
  }
  if (FUNC_1(VAR_20 & VAR_1)) {
   VAR_17->rx_crc_errors++;
   VAR_21->rx_crc_errors++;
  }
  VAR_19 = VAR_13;
 }
 if (FUNC_1(VAR_20 & VAR_3))
  VAR_17->dribbling_bit++;

 if (FUNC_1(VAR_20 & VAR_7)) {
  VAR_17->rx_length++;
  VAR_19 = VAR_13;
 }
 if (FUNC_1(VAR_20 & VAR_8)) {
  VAR_17->rx_mii++;
  VAR_19 = VAR_13;
 }




 return VAR_19;
}
