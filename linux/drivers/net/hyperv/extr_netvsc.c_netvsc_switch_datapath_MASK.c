
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int active_datapath; } ;
struct TYPE_7__ {TYPE_2__ active_dp; } ;
struct TYPE_8__ {TYPE_3__ v4_msg; } ;
struct TYPE_5__ {int msg_type; } ;
struct nvsp_message {TYPE_4__ msg; TYPE_1__ hdr; } ;
struct netvsc_device {struct nvsp_message channel_init_pkt; } ;
struct net_device_context {int nvdev; struct hv_device* device_ctx; } ;
struct net_device {int dummy; } ;
struct hv_device {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvsp_message*,int ,int) ;
 struct net_device_context* FUNC_1 (struct net_device*) ;
 struct netvsc_device* FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,struct nvsp_message*) ;
 int FUNC_4 (int ,struct nvsp_message*,int,unsigned long,int ,int ) ;

void FUNC_5(struct net_device *VAR_4, bool VAR_5)
{
 struct net_device_context *VAR_6 = FUNC_1(VAR_4);
 struct hv_device *VAR_7 = VAR_6->device_ctx;
 struct netvsc_device *VAR_8 = FUNC_2(VAR_6->nvdev);
 struct nvsp_message *VAR_9 = &VAR_8->channel_init_pkt;

 FUNC_0(VAR_9, 0, sizeof(struct nvsp_message));
 VAR_9->hdr.msg_type = VAR_2;
 if (VAR_5)
  VAR_9->msg.v4_msg.active_dp.active_datapath =
   VAR_1;
 else
  VAR_9->msg.v4_msg.active_dp.active_datapath =
   VAR_0;

 FUNC_3(VAR_4, VAR_9);

 FUNC_4(VAR_7->channel, VAR_9,
          sizeof(struct nvsp_message),
          (unsigned long)VAR_9,
          VAR_3, 0);
}
