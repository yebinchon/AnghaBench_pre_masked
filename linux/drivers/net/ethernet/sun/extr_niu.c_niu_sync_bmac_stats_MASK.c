
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct niu_bmac_stats {int rx_len_errors; int rx_crc_errors; int rx_align_errors; int rx_frames; int tx_frames; int tx_bytes; } ;
struct TYPE_2__ {struct niu_bmac_stats bmac; } ;
struct niu {TYPE_1__ mac_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct niu *VAR_5)
{
 struct niu_bmac_stats *VAR_6 = &VAR_5->mac_stats.bmac;

 VAR_6->tx_bytes += FUNC_0(VAR_3);
 VAR_6->tx_frames += FUNC_0(VAR_4);

 VAR_6->rx_frames += FUNC_0(VAR_2);
 VAR_6->rx_align_errors += FUNC_0(VAR_0);
 VAR_6->rx_crc_errors += FUNC_0(VAR_0);
 VAR_6->rx_len_errors += FUNC_0(VAR_1);
}
