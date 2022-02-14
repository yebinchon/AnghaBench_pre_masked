
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device_stats {int rx_over_errors; int rx_crc_errors; int rx_frame_errors; int rx_length_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct gfar_extra_stats {int rx_overrun; int rx_crcerr; int rx_nonoctet; int rx_short; int rx_large; int rx_trunc; } ;
struct gfar_private {struct gfar_extra_stats extra_stats; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 struct gfar_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(u32 VAR_6, struct net_device *VAR_7)
{
 struct gfar_private *VAR_8 = FUNC_2(VAR_7);
 struct net_device_stats *VAR_9 = &VAR_7->stats;
 struct gfar_extra_stats *VAR_10 = &VAR_8->extra_stats;


 if (VAR_6 & FUNC_0(VAR_5)) {
  VAR_9->rx_length_errors++;

  FUNC_1(&VAR_10->rx_trunc);

  return;
 }

 if (VAR_6 & FUNC_0(VAR_1 | VAR_4)) {
  VAR_9->rx_length_errors++;

  if (VAR_6 & FUNC_0(VAR_1))
   FUNC_1(&VAR_10->rx_large);
  else
   FUNC_1(&VAR_10->rx_short);
 }
 if (VAR_6 & FUNC_0(VAR_2)) {
  VAR_9->rx_frame_errors++;
  FUNC_1(&VAR_10->rx_nonoctet);
 }
 if (VAR_6 & FUNC_0(VAR_0)) {
  FUNC_1(&VAR_10->rx_crcerr);
  VAR_9->rx_crc_errors++;
 }
 if (VAR_6 & FUNC_0(VAR_3)) {
  FUNC_1(&VAR_10->rx_overrun);
  VAR_9->rx_over_errors++;
 }
}
