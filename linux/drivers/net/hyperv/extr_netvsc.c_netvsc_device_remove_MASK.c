
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netvsc_device {int num_chn; TYPE_1__* chan_table; } ;
struct net_device_context {int nvdev; } ;
struct net_device {int dummy; } ;
struct hv_device {int channel; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct netvsc_device*) ;
 struct net_device* FUNC_2 (struct hv_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 struct net_device_context* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct hv_device*,struct netvsc_device*,struct net_device*) ;
 int FUNC_7 (struct hv_device*,struct netvsc_device*,struct net_device*) ;
 int FUNC_8 (struct hv_device*,struct netvsc_device*,struct net_device*) ;
 int FUNC_9 (struct hv_device*,struct netvsc_device*,struct net_device*) ;
 struct netvsc_device* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_1 ;

void FUNC_12(struct hv_device *VAR_2)
{
 struct net_device *VAR_3 = FUNC_2(VAR_2);
 struct net_device_context *VAR_4 = FUNC_4(VAR_3);
 struct netvsc_device *VAR_5
  = FUNC_10(VAR_4->nvdev);
 int VAR_6;





 FUNC_6(VAR_2, VAR_5, VAR_3);
 if (VAR_1 < VAR_0)
  FUNC_8(VAR_2, VAR_5, VAR_3);

 FUNC_7(VAR_2, VAR_5, VAR_3);
 if (VAR_1 < VAR_0)
  FUNC_9(VAR_2, VAR_5, VAR_3);

 FUNC_0(VAR_4->nvdev, ((void*)0));


 for (VAR_6 = 0; VAR_6 < VAR_5->num_chn; VAR_6++)
  FUNC_5(&VAR_5->chan_table[VAR_6].napi);





 FUNC_3(VAR_3, "net device safe to remove\n");


 FUNC_11(VAR_2->channel);





 if (VAR_1 >= VAR_0) {
  FUNC_8(VAR_2, VAR_5, VAR_3);
  FUNC_9(VAR_2, VAR_5, VAR_3);
 }


 FUNC_1(VAR_5);
}
