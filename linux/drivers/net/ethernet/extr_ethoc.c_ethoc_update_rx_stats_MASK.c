
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int collisions; int rx_missed_errors; int rx_over_errors; int rx_crc_errors; int rx_frame_errors; int rx_length_errors; } ;
struct net_device {TYPE_1__ stats; int dev; } ;
struct ethoc_bd {int stat; } ;
struct ethoc {struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static unsigned int FUNC_1(struct ethoc *VAR_7,
  struct ethoc_bd *VAR_8)
{
 struct net_device *VAR_9 = VAR_7->netdev;
 unsigned int VAR_10 = 0;

 if (VAR_8->stat & VAR_6) {
  FUNC_0(&VAR_9->dev, "RX: frame too long\n");
  VAR_9->stats.rx_length_errors++;
  VAR_10++;
 }

 if (VAR_8->stat & VAR_5) {
  FUNC_0(&VAR_9->dev, "RX: frame too short\n");
  VAR_9->stats.rx_length_errors++;
  VAR_10++;
 }

 if (VAR_8->stat & VAR_1) {
  FUNC_0(&VAR_9->dev, "RX: dribble nibble\n");
  VAR_9->stats.rx_frame_errors++;
 }

 if (VAR_8->stat & VAR_0) {
  FUNC_0(&VAR_9->dev, "RX: wrong CRC\n");
  VAR_9->stats.rx_crc_errors++;
  VAR_10++;
 }

 if (VAR_8->stat & VAR_4) {
  FUNC_0(&VAR_9->dev, "RX: overrun\n");
  VAR_9->stats.rx_over_errors++;
  VAR_10++;
 }

 if (VAR_8->stat & VAR_3)
  VAR_9->stats.rx_missed_errors++;

 if (VAR_8->stat & VAR_2) {
  FUNC_0(&VAR_9->dev, "RX: late collision\n");
  VAR_9->stats.collisions++;
  VAR_10++;
 }

 return VAR_10;
}
