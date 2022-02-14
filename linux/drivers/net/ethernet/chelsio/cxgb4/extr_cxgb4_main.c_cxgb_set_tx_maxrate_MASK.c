
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sched_class {void* idx; } ;
struct port_info {int nqsets; int tx_chan; int port_id; struct adapter* adapter; } ;
struct net_device {int mtu; } ;
struct TYPE_3__ {int maxrate; int pktsize; scalar_t__ weight; scalar_t__ minrate; void* class; int channel; int ratemode; int rateunit; int mode; int level; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct ch_sched_queue {int queue; void* class; TYPE_2__ u; int type; } ;
struct ch_sched_params {int queue; void* class; TYPE_2__ u; int type; } ;
struct adapter {int flags; int pdev_dev; } ;
typedef int qe ;
typedef int p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct net_device*) ;
 struct sched_class* FUNC_1 (struct net_device*,struct ch_sched_queue*) ;
 int FUNC_2 (struct net_device*,void*,int ) ;
 int FUNC_3 (struct net_device*,void*,int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (struct ch_sched_queue*,int ,int) ;
 struct port_info* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_13, int VAR_14, u32 VAR_15)
{
 struct port_info *VAR_16 = FUNC_6(VAR_13);
 struct adapter *VAR_17 = VAR_16->adapter;
 struct sched_class *VAR_18;
 struct ch_sched_params VAR_19;
 struct ch_sched_queue VAR_20;
 u32 VAR_21;
 int VAR_22 = 0;

 if (!FUNC_0(VAR_13))
  return -VAR_3;

 if (VAR_14 < 0 || VAR_14 > VAR_16->nqsets - 1)
  return -VAR_1;

 if (!(VAR_17->flags & VAR_0)) {
  FUNC_4(VAR_17->pdev_dev,
   "Failed to rate limit on queue %d. Link Down?\n",
   VAR_14);
  return -VAR_1;
 }


 VAR_21 = VAR_15 * 1000;


 if (VAR_21 > VAR_11) {
  FUNC_4(VAR_17->pdev_dev,
   "Invalid rate %u Mbps, Max rate is %u Mbps\n",
   VAR_15, VAR_11 / 1000);
  return -VAR_4;
 }


 FUNC_5(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.queue = VAR_14;
 VAR_20.class = VAR_10;

 VAR_22 = FUNC_3(VAR_13, (void *)(&VAR_20), VAR_12);
 if (VAR_22) {
  FUNC_4(VAR_17->pdev_dev,
   "Unbinding Queue %d on port %d fail. Err: %d\n",
   VAR_14, VAR_16->port_id, VAR_22);
  return VAR_22;
 }


 if (!VAR_21)
  return 0;


 FUNC_5(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.type = VAR_9;
 VAR_19.u.params.level = VAR_5;
 VAR_19.u.params.mode = VAR_6;
 VAR_19.u.params.rateunit = VAR_8;
 VAR_19.u.params.ratemode = VAR_7;
 VAR_19.u.params.channel = VAR_16->tx_chan;
 VAR_19.u.params.class = VAR_10;
 VAR_19.u.params.minrate = 0;
 VAR_19.u.params.maxrate = VAR_21;
 VAR_19.u.params.weight = 0;
 VAR_19.u.params.pktsize = VAR_13->mtu;

 VAR_18 = FUNC_1(VAR_13, &VAR_19);
 if (!VAR_18)
  return -VAR_2;


 FUNC_5(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.queue = VAR_14;
 VAR_20.class = VAR_18->idx;

 VAR_22 = FUNC_2(VAR_13, (void *)(&VAR_20), VAR_12);
 if (VAR_22)
  FUNC_4(VAR_17->pdev_dev,
   "Queue rate limiting failed. Err: %d\n", VAR_22);
 return VAR_22;
}
