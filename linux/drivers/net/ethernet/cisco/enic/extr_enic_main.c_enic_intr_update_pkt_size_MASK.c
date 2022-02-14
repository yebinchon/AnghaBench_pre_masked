
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vnic_rx_bytes_counter {int small_pkt_bytes_cnt; int large_pkt_bytes_cnt; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vnic_rx_bytes_counter *VAR_1,
          u32 VAR_2)
{
 if (VAR_0 <= VAR_2)
  VAR_1->large_pkt_bytes_cnt += VAR_2;
 else
  VAR_1->small_pkt_bytes_cnt += VAR_2;
}
