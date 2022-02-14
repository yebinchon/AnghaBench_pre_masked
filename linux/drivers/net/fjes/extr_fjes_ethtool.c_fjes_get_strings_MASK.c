
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct fjes_hw {int max_epid; int my_epid; } ;
struct fjes_adapter {struct fjes_hw hw; } ;
struct TYPE_3__ {int stat_string; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,int ,int ) ;
 struct fjes_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2,
        u32 VAR_3, u8 *VAR_4)
{
 struct fjes_adapter *VAR_5 = FUNC_2(VAR_2);
 struct fjes_hw *VAR_6 = &VAR_5->hw;
 u8 *VAR_7 = VAR_4;
 int VAR_8;

 switch (VAR_3) {
 case 128:
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
   FUNC_1(VAR_7, VAR_1[VAR_8].stat_string,
          VAR_0);
   VAR_7 += VAR_0;
  }
  for (VAR_8 = 0; VAR_8 < VAR_6->max_epid; VAR_8++) {
   if (VAR_8 == VAR_6->my_epid)
    continue;
   FUNC_3(VAR_7, "ep%u_com_regist_buf_exec", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_com_unregist_buf_exec", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_send_intr_rx", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_send_intr_unshare", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_send_intr_zoneupdate", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_recv_intr_rx", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_recv_intr_unshare", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_recv_intr_stop", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_recv_intr_zoneupdate", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_tx_buffer_full", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_tx_dropped_not_shared", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_tx_dropped_ver_mismatch", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_tx_dropped_buf_size_mismatch", VAR_8);
   VAR_7 += VAR_0;
   FUNC_3(VAR_7, "ep%u_tx_dropped_vlanid_mismatch", VAR_8);
   VAR_7 += VAR_0;
  }
  break;
 }
}
