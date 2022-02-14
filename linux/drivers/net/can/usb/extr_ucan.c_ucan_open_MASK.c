
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct urb {int dummy; } ;
struct TYPE_6__ {int ctrlmode; int state; } ;
struct ucan_priv {int netdev; TYPE_3__ can; TYPE_2__* ctl_msg_buffer; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_5__ {TYPE_1__ cmd_start; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct ucan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ucan_priv*) ;
 int FUNC_6 (struct ucan_priv*,struct urb**) ;
 int FUNC_7 (struct ucan_priv*,int ,int ,int) ;
 int FUNC_8 (struct ucan_priv*,struct urb**) ;
 int FUNC_9 (struct ucan_priv*) ;
 int FUNC_10 (struct ucan_priv*,struct urb**) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_14)
{
 int VAR_15, VAR_16;
 u16 VAR_17;
 struct urb *VAR_18[VAR_8];
 struct ucan_priv *VAR_19 = FUNC_2(VAR_14);

 VAR_15 = FUNC_5(VAR_19);
 if (VAR_15)
  return VAR_15;




 VAR_15 = FUNC_8(VAR_19, VAR_18);
 if (VAR_15)
  goto err_contexts;


 VAR_17 = 0;
 if (VAR_19->can.ctrlmode & VAR_2)
  VAR_17 |= VAR_11;
 if (VAR_19->can.ctrlmode & VAR_1)
  VAR_17 |= VAR_13;
 if (VAR_19->can.ctrlmode & VAR_0)
  VAR_17 |= VAR_9;
 if (VAR_19->can.ctrlmode & VAR_3)
  VAR_17 |= VAR_12;




 VAR_17 |= VAR_10;
 VAR_19->ctl_msg_buffer->cmd_start.mode = FUNC_0(VAR_17);


 VAR_15 = FUNC_7(VAR_19, VAR_6, 0, 2);
 if (VAR_15 < 0) {
  FUNC_1(VAR_19->netdev,
      "could not start device, code: %d\n",
      VAR_15);
  goto err_reset;
 }


 VAR_15 = FUNC_4(VAR_14);
 if (VAR_15)
  goto err_stop;


 VAR_15 = FUNC_10(VAR_19, VAR_18);
 if (VAR_15)
  goto err_stop;

 VAR_19->can.state = VAR_4;


 FUNC_3(VAR_14);

 return 0;

err_stop:

 VAR_16 = FUNC_7(VAR_19, VAR_7, 0, 0);
 if (VAR_16 < 0)
  FUNC_1(VAR_19->netdev,
      "could not stop device, code: %d\n",
      VAR_16);

err_reset:



 VAR_16 = FUNC_7(VAR_19, VAR_5, 0, 0);
 if (VAR_16 < 0)
  FUNC_1(VAR_19->netdev,
      "could not reset device, code: %d\n",
      VAR_16);


 FUNC_6(VAR_19, VAR_18);

err_contexts:
 FUNC_9(VAR_19);
 return VAR_15;
}
