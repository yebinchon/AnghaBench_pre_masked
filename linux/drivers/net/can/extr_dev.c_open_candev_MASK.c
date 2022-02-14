
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ bitrate; } ;
struct TYPE_3__ {scalar_t__ bitrate; } ;
struct can_priv {int ctrlmode; TYPE_2__ bittiming; TYPE_1__ data_bittiming; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct can_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_2)
{
 struct can_priv *VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3->bittiming.bitrate) {
  FUNC_0(VAR_2, "bit-timing not yet defined\n");
  return -VAR_1;
 }


 if ((VAR_3->ctrlmode & VAR_0) &&
     (!VAR_3->data_bittiming.bitrate ||
      VAR_3->data_bittiming.bitrate < VAR_3->bittiming.bitrate)) {
  FUNC_0(VAR_2, "incorrect/missing data bit-timing\n");
  return -VAR_1;
 }


 if (!FUNC_2(VAR_2))
  FUNC_3(VAR_2);

 return 0;
}
