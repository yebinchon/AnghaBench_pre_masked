
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; int dev; } ;
struct ctcm_priv {int protocol; TYPE_2__** channel; TYPE_1__* fsm; int buffer_size; } ;
struct channel {int dummy; } ;
struct ccwgroup_device {struct ccw_device** cdev; int dev; } ;
struct ccw_device {int dev; int id; } ;
typedef enum ctcm_channel_types { ____Placeholder_ctcm_channel_types } ctcm_channel_types ;
struct TYPE_4__ {int id; int max_bufsize; int protocol; struct net_device* netdev; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int ,int ,char*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_9 ;
 int FUNC_2 (struct ccw_device*,int,struct ctcm_priv*) ;
 int FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct ccw_device*) ;
 int FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (int,char*,int) ;
 int FUNC_7 (struct channel*) ;
 int FUNC_8 (struct net_device*) ;
 struct net_device* FUNC_9 (struct ctcm_priv*) ;
 struct ctcm_priv* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int ,int ,int ) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct net_device*) ;
 int FUNC_15 (char*,int,char*,char*) ;
 int FUNC_16 (int ,int ,int) ;

__attribute__((used)) static int FUNC_17(struct ccwgroup_device *VAR_10)
{
 char VAR_11[VAR_1];
 char VAR_12[VAR_1];
 int VAR_13;
 enum ctcm_channel_types VAR_14;
 struct ctcm_priv *VAR_15;
 struct net_device *VAR_16;
 struct ccw_device *VAR_17;
 struct ccw_device *VAR_18;
 struct channel *VAR_19;
 struct channel *VAR_20;
 int VAR_21;
 int VAR_22;

 VAR_15 = FUNC_10(&VAR_10->dev);
 if (!VAR_15) {
  VAR_22 = -VAR_7;
  goto out_err_result;
 }

 VAR_17 = VAR_10->cdev[0];
 VAR_18 = VAR_10->cdev[1];

 VAR_14 = FUNC_13(&VAR_17->id);

 FUNC_15(VAR_11, VAR_1, "ch-%s", FUNC_12(&VAR_17->dev));
 FUNC_15(VAR_12, VAR_1, "ch-%s", FUNC_12(&VAR_18->dev));

 VAR_21 = FUNC_2(VAR_17, VAR_14, VAR_15);
 if (VAR_21) {
  VAR_22 = VAR_21;
  goto out_err_result;
 }
 VAR_21 = FUNC_2(VAR_18, VAR_14, VAR_15);
 if (VAR_21) {
  VAR_22 = VAR_21;
  goto out_remove_channel1;
 }

 VAR_21 = FUNC_4(VAR_17);
 if (VAR_21 != 0) {
  FUNC_0(VAR_9, VAR_5,
   "%s(%s) set_online rc=%d",
    VAR_0, VAR_11, VAR_21);
  VAR_22 = -VAR_6;
  goto out_remove_channel2;
 }

 VAR_21 = FUNC_4(VAR_18);
 if (VAR_21 != 0) {
  FUNC_0(VAR_9, VAR_5,
   "%s(%s) set_online rc=%d",
    VAR_0, VAR_12, VAR_21);

  VAR_22 = -VAR_6;
  goto out_ccw1;
 }

 VAR_16 = FUNC_9(VAR_15);
 if (VAR_16 == ((void*)0)) {
  VAR_22 = -VAR_7;
  goto out_ccw2;
 }

 for (VAR_13 = VAR_2; VAR_13 <= VAR_3; VAR_13++) {
  VAR_15->channel[VAR_13] =
   FUNC_6(VAR_14, VAR_13 == VAR_2 ?
    VAR_11 : VAR_12, VAR_13);
  if (VAR_15->channel[VAR_13] == ((void*)0)) {
   if (VAR_13 == VAR_3)
    FUNC_5(VAR_15->channel[VAR_2]);
   VAR_22 = -VAR_7;
   goto out_dev;
  }
  VAR_15->channel[VAR_13]->netdev = VAR_16;
  VAR_15->channel[VAR_13]->protocol = VAR_15->protocol;
  VAR_15->channel[VAR_13]->max_bufsize = VAR_15->buffer_size;
 }

 FUNC_1(VAR_16, &VAR_10->dev);

 if (FUNC_14(VAR_16)) {
  VAR_22 = -VAR_7;
  goto out_dev;
 }

 FUNC_16(VAR_15->fsm->name, VAR_16->name, sizeof(VAR_15->fsm->name));

 FUNC_11(&VAR_16->dev,
  "setup OK : r/w = %s/%s, protocol : %d\n",
   VAR_15->channel[VAR_2]->id,
   VAR_15->channel[VAR_3]->id, VAR_15->protocol);

 FUNC_0(VAR_8, VAR_4,
  "setup(%s) OK : r/w = %s/%s, protocol : %d", VAR_16->name,
   VAR_15->channel[VAR_2]->id,
   VAR_15->channel[VAR_3]->id, VAR_15->protocol);

 return 0;
out_dev:
 FUNC_8(VAR_16);
out_ccw2:
 FUNC_3(VAR_10->cdev[1]);
out_ccw1:
 FUNC_3(VAR_10->cdev[0]);
out_remove_channel2:
 VAR_19 = FUNC_6(VAR_14, VAR_11, VAR_2);
 FUNC_7(VAR_19);
out_remove_channel1:
 VAR_20 = FUNC_6(VAR_14, VAR_12, VAR_3);
 FUNC_7(VAR_20);
out_err_result:
 return VAR_22;
}
