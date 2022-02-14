
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct cas {int * stat_lock; TYPE_1__* net_stats; int dev; scalar_t__ regs; } ;
struct TYPE_2__ {int rx_frame_errors; int rx_crc_errors; int rx_length_errors; int rx_fifo_errors; int rx_over_errors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cas*,int ,int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6, struct cas *VAR_7,
          u32 VAR_8)
{
 u32 VAR_9 = FUNC_1(VAR_7->regs + VAR_4);

 if (!VAR_9)
  return 0;

 FUNC_0(VAR_7, VAR_5, VAR_7->dev, "rxmac interrupt, stat: 0x%x\n", VAR_9);


 FUNC_2(&VAR_7->stat_lock[0]);
 if (VAR_9 & VAR_0)
  VAR_7->net_stats[0].rx_frame_errors += 0x10000;

 if (VAR_9 & VAR_1)
  VAR_7->net_stats[0].rx_crc_errors += 0x10000;

 if (VAR_9 & VAR_2)
  VAR_7->net_stats[0].rx_length_errors += 0x10000;

 if (VAR_9 & VAR_3) {
  VAR_7->net_stats[0].rx_over_errors++;
  VAR_7->net_stats[0].rx_fifo_errors++;
 }




 FUNC_3(&VAR_7->stat_lock[0]);
 return 0;
}
