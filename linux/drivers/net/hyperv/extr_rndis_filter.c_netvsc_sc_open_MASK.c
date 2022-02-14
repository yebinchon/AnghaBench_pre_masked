
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_5__ {scalar_t__ sub_channel_index; } ;
struct TYPE_6__ {TYPE_2__ offer; } ;
struct vmbus_channel {TYPE_3__ offermsg; TYPE_1__* primary_channel; } ;
struct netvsc_device {scalar_t__ num_chn; int subchan_open; int open_chn; struct netvsc_channel* chan_table; } ;
struct netvsc_channel {int napi; struct vmbus_channel* channel; } ;
struct net_device_context {int nvdev; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int device_obj; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct net_device* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 struct net_device_context* FUNC_4 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct netvsc_device* FUNC_5 (int ) ;
 int FUNC_6 (struct vmbus_channel*,int ) ;
 int FUNC_7 (struct vmbus_channel*,int ,int ,int *,int ,int ,struct netvsc_channel*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct vmbus_channel *VAR_3)
{
 struct net_device *VAR_4 =
  FUNC_1(VAR_3->primary_channel->device_obj);
 struct net_device_context *VAR_5 = FUNC_4(VAR_4);
 struct netvsc_device *VAR_6;
 u16 VAR_7 = VAR_3->offermsg.offer.sub_channel_index;
 struct netvsc_channel *VAR_8;
 int VAR_9;




 VAR_6 = FUNC_5(VAR_5->nvdev);
 if (!VAR_6 || VAR_7 >= VAR_6->num_chn)
  return;

 VAR_8 = VAR_6->chan_table + VAR_7;




 FUNC_6(VAR_3, VAR_0);


 VAR_8->channel = VAR_3;

 VAR_9 = FUNC_7(VAR_3, VAR_2,
    VAR_2, ((void*)0), 0,
    VAR_1, VAR_8);
 if (VAR_9 == 0)
  FUNC_2(&VAR_8->napi);
 else
  FUNC_3(VAR_4, "sub channel open failed: %d\n", VAR_9);

 if (FUNC_0(&VAR_6->open_chn) == VAR_6->num_chn)
  FUNC_8(&VAR_6->subchan_open);
}
