
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* debugfs_dentry; } ;
struct i2400m {int trace_msg_from_user; int state; int tx_out; int tx_in; struct dentry* debugfs_dentry; TYPE_1__ wimax_dev; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct dentry*) ;
 int VAR_1 ;
 struct dentry* FUNC_1 (char*,struct dentry*) ;
 int FUNC_2 (char*,int,struct dentry*,struct i2400m*,int *) ;
 int FUNC_3 (char*,int,struct dentry*,int *) ;
 int FUNC_4 (char*,int,struct dentry*,int *) ;
 int FUNC_5 (char*,int,struct dentry*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_6(struct i2400m *VAR_13)
{
 struct dentry *VAR_14 = VAR_13->wimax_dev.debugfs_dentry;

 VAR_14 = FUNC_1("i2400m", VAR_14);
 VAR_13->debugfs_dentry = VAR_14;

 FUNC_0("dl_", VAR_0, VAR_14);
 FUNC_0("dl_", VAR_2, VAR_14);
 FUNC_0("dl_", VAR_1, VAR_14);
 FUNC_0("dl_", VAR_6, VAR_14);
 FUNC_0("dl_", VAR_9, VAR_14);
 FUNC_0("dl_", VAR_10, VAR_14);
 FUNC_0("dl_", VAR_11, VAR_14);
 FUNC_0("dl_", VAR_12, VAR_14);

 FUNC_3("tx_in", 0400, VAR_14, &VAR_13->tx_in);
 FUNC_3("tx_out", 0400, VAR_14, &VAR_13->tx_out);
 FUNC_4("state", 0600, VAR_14, &VAR_13->state);
 FUNC_5("trace_msg_from_user", 0600, VAR_14,
     &VAR_13->trace_msg_from_user);

 FUNC_2("netdev_queue_stopped", 0400, VAR_14, VAR_13,
       &VAR_5);

 FUNC_2("rx_stats", 0600, VAR_14, VAR_13,
       &VAR_7);

 FUNC_2("tx_stats", 0600, VAR_14, VAR_13,
       &VAR_8);

 FUNC_2("suspend", 0200, VAR_14, VAR_13,
       &VAR_4);

 FUNC_2("reset", 0200, VAR_14, VAR_13, &VAR_3);
}
