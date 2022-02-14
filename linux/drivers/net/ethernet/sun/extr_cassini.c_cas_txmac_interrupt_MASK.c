
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct cas {int * stat_lock; TYPE_1__* net_stats; int dev; scalar_t__ regs; } ;
struct TYPE_2__ {int collisions; int tx_aborted_errors; int tx_errors; int tx_fifo_errors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct cas*,int ,int ,int ,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_9,
          struct cas *VAR_10, u32 VAR_11)
{
 u32 VAR_12 = FUNC_2(VAR_10->regs + VAR_7);

 if (!VAR_12)
  return 0;

 FUNC_1(VAR_10, VAR_8, VAR_0, VAR_10->dev,
       "txmac interrupt, txmac_stat: 0x%x\n", VAR_12);




 if ((VAR_12 & VAR_4) &&
     !(VAR_12 & ~VAR_4))
  return 0;

 FUNC_3(&VAR_10->stat_lock[0]);
 if (VAR_12 & VAR_6) {
  FUNC_0(VAR_9, "TX MAC xmit underrun\n");
  VAR_10->net_stats[0].tx_fifo_errors++;
 }

 if (VAR_12 & VAR_5) {
  FUNC_0(VAR_9, "TX MAC max packet size error\n");
  VAR_10->net_stats[0].tx_errors++;
 }




 if (VAR_12 & VAR_3)
  VAR_10->net_stats[0].collisions += 0x10000;

 if (VAR_12 & VAR_1) {
  VAR_10->net_stats[0].tx_aborted_errors += 0x10000;
  VAR_10->net_stats[0].collisions += 0x10000;
 }

 if (VAR_12 & VAR_2) {
  VAR_10->net_stats[0].tx_aborted_errors += 0x10000;
  VAR_10->net_stats[0].collisions += 0x10000;
 }
 FUNC_4(&VAR_10->stat_lock[0]);




 return 0;
}
