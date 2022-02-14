
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tp_err_stats {int dummy; } ;
struct seq_file {struct adapter* private; } ;
struct adapter {int stats_lock; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*,struct tp_err_stats*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_8)
{
 struct adapter *VAR_9 = VAR_8->private;
 struct tp_err_stats VAR_10;
 u8 VAR_11;

 FUNC_1(&VAR_9->stats_lock);
 FUNC_3(VAR_9, &VAR_10, 0);
 FUNC_2(&VAR_9->stats_lock);

 FUNC_0("tp_mac_in_errs:", VAR_1);
 FUNC_0("tp_hdr_in_errs:", VAR_0);
 FUNC_0("tp_tcp_in_errs:", VAR_5);
 FUNC_0("tp_tcp6_in_errs:", VAR_4);
 FUNC_0("tp_tnl_cong_drops:", VAR_6);
 FUNC_0("tp_tnl_tx_drops:", VAR_7);
 FUNC_0("tp_ofld_vlan_drops:", VAR_3);
 FUNC_0("tp_ofld_chan_drops:", VAR_2);
}
