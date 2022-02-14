
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netvsc_device_info {int dummy; } ;
struct netvsc_device {int rcu; struct netvsc_channel* chan_table; } ;
struct TYPE_4__ {int syncp; } ;
struct TYPE_3__ {int syncp; } ;
struct netvsc_channel {int napi; TYPE_2__ rx_stats; TYPE_1__ tx_stats; struct netvsc_device* net_device; int channel; } ;
struct net_device_context {int nvdev; scalar_t__* tx_table; } ;
struct net_device {int dummy; } ;
struct hv_device {int channel; } ;


 int VAR_0 ;
 struct netvsc_device* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 struct netvsc_device* FUNC_2 () ;
 int FUNC_3 (int *) ;
 struct net_device* FUNC_4 (struct hv_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct net_device*,char*) ;
 int FUNC_8 (struct net_device*,char*,int) ;
 struct net_device_context* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*,int *,int ,int ) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;
 int FUNC_12 (struct hv_device*,struct netvsc_device*,struct netvsc_device_info const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_13 (int ,struct netvsc_device*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int ,int *,int ,int ,struct netvsc_channel*) ;

struct netvsc_device *FUNC_18(struct hv_device *VAR_8,
    const struct netvsc_device_info *VAR_9)
{
 int VAR_10, VAR_11 = 0;
 struct netvsc_device *VAR_12;
 struct net_device *VAR_13 = FUNC_4(VAR_8);
 struct net_device_context *VAR_14 = FUNC_9(VAR_13);

 VAR_12 = FUNC_2();
 if (!VAR_12)
  return FUNC_0(-VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  VAR_14->tx_table[VAR_10] = 0;




 FUNC_14(VAR_8->channel, VAR_1);
 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  struct netvsc_channel *VAR_15 = &VAR_12->chan_table[VAR_10];

  VAR_15->channel = VAR_8->channel;
  VAR_15->net_device = VAR_12;
  FUNC_15(&VAR_15->tx_stats.syncp);
  FUNC_15(&VAR_15->rx_stats.syncp);
 }


 FUNC_10(VAR_13, &VAR_12->chan_table[0].napi,
         VAR_6, VAR_2);


 VAR_11 = FUNC_17(VAR_8->channel, VAR_7,
    VAR_7, ((void*)0), 0,
    VAR_5, VAR_12->chan_table);

 if (VAR_11 != 0) {
  FUNC_8(VAR_13, "unable to open channel: %d\n", VAR_11);
  goto cleanup;
 }


 FUNC_7(VAR_13, "hv_netvsc channel opened successfully\n");

 FUNC_6(&VAR_12->chan_table[0].napi);


 VAR_11 = FUNC_12(VAR_8, VAR_12, VAR_9);
 if (VAR_11 != 0) {
  FUNC_8(VAR_13,
   "unable to connect to NetVSP - %d\n", VAR_11);
  goto close;
 }




 FUNC_13(VAR_14->nvdev, VAR_12);

 return VAR_12;

close:
 FUNC_1(VAR_14->nvdev, ((void*)0));
 FUNC_5(&VAR_12->chan_table[0].napi);


 FUNC_16(VAR_8->channel);

cleanup:
 FUNC_11(&VAR_12->chan_table[0].napi);
 FUNC_3(&VAR_12->rcu);

 return FUNC_0(VAR_11);
}
