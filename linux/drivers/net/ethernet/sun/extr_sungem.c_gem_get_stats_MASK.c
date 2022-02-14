
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int collisions; int tx_aborted_errors; int rx_length_errors; int rx_frame_errors; int rx_crc_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct gem {scalar_t__ regs; int cell_enabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 struct gem* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static struct net_device_stats *FUNC_6(struct net_device *VAR_5)
{
 struct gem *VAR_6 = FUNC_1(VAR_5);
 if (!FUNC_2(VAR_5) || !FUNC_3(VAR_5))
  goto bail;


 if (FUNC_0(!VAR_6->cell_enabled))
  goto bail;

 VAR_5->stats.rx_crc_errors += FUNC_4(VAR_6->regs + VAR_2);
 FUNC_5(0, VAR_6->regs + VAR_2);

 VAR_5->stats.rx_frame_errors += FUNC_4(VAR_6->regs + VAR_0);
 FUNC_5(0, VAR_6->regs + VAR_0);

 VAR_5->stats.rx_length_errors += FUNC_4(VAR_6->regs + VAR_4);
 FUNC_5(0, VAR_6->regs + VAR_4);

 VAR_5->stats.tx_aborted_errors += FUNC_4(VAR_6->regs + VAR_1);
 VAR_5->stats.collisions +=
  (FUNC_4(VAR_6->regs + VAR_1) + FUNC_4(VAR_6->regs + VAR_3));
 FUNC_5(0, VAR_6->regs + VAR_1);
 FUNC_5(0, VAR_6->regs + VAR_3);
 bail:
 return &VAR_5->stats;
}
