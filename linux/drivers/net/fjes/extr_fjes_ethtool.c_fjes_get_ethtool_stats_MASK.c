
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct fjes_hw {int max_epid; int my_epid; TYPE_2__* ep_shm_info; } ;
struct fjes_adapter {struct fjes_hw hw; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_7__ {int stat_offset; int sizeof_stat; } ;
struct TYPE_5__ {int tx_dropped_vlanid_mismatch; int tx_dropped_buf_size_mismatch; int tx_dropped_ver_mismatch; int tx_dropped_not_shared; int tx_buffer_full; int recv_intr_zoneupdate; int recv_intr_stop; int recv_intr_unshare; int recv_intr_rx; int send_intr_zoneupdate; int send_intr_unshare; int send_intr_rx; int com_unregist_buf_exec; int com_regist_buf_exec; } ;
struct TYPE_6__ {TYPE_1__ ep_stats; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 struct fjes_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
       struct ethtool_stats *VAR_2, u64 *VAR_3)
{
 struct fjes_adapter *VAR_4 = FUNC_1(VAR_1);
 struct fjes_hw *VAR_5 = &VAR_4->hw;
 int VAR_6;
 char *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0); VAR_8++) {
  VAR_7 = (char *)VAR_4 + VAR_0[VAR_8].stat_offset;
  VAR_3[VAR_8] = (VAR_0[VAR_8].sizeof_stat == sizeof(u64))
   ? *(u64 *)VAR_7 : *(u32 *)VAR_7;
 }
 for (VAR_6 = 0; VAR_6 < VAR_5->max_epid; VAR_6++) {
  if (VAR_6 == VAR_5->my_epid)
   continue;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats
    .com_regist_buf_exec;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats
    .com_unregist_buf_exec;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats.send_intr_rx;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats.send_intr_unshare;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats
    .send_intr_zoneupdate;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats.recv_intr_rx;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats.recv_intr_unshare;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats.recv_intr_stop;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats
    .recv_intr_zoneupdate;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats.tx_buffer_full;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats
    .tx_dropped_not_shared;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats
    .tx_dropped_ver_mismatch;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats
    .tx_dropped_buf_size_mismatch;
  VAR_3[VAR_8++] = VAR_5->ep_shm_info[VAR_6].ep_stats
    .tx_dropped_vlanid_mismatch;
 }
}
