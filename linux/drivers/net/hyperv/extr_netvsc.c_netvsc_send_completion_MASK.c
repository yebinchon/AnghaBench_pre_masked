
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmpacket_descriptor {int dummy; } ;
struct vmbus_channel {int dummy; } ;
struct TYPE_2__ {int msg_type; } ;
struct nvsp_message {TYPE_1__ hdr; } ;
struct netvsc_device {int channel_init_wait; int channel_init_pkt; } ;
struct net_device {int dummy; } ;







 int FUNC_0 (int *) ;
 struct nvsp_message* FUNC_1 (struct vmpacket_descriptor const*) ;
 int FUNC_2 (int *,struct nvsp_message const*,int) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 int FUNC_4 (struct net_device*,struct netvsc_device*,struct vmbus_channel*,struct vmpacket_descriptor const*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0,
       struct netvsc_device *VAR_1,
       struct vmbus_channel *VAR_2,
       const struct vmpacket_descriptor *VAR_3,
       int VAR_4)
{
 const struct nvsp_message *VAR_5 = FUNC_1(VAR_3);

 switch (VAR_5->hdr.msg_type) {
 case 128:
 case 132:
 case 130:
 case 129:

  FUNC_2(&VAR_1->channel_init_pkt, VAR_5,
         sizeof(struct nvsp_message));
  FUNC_0(&VAR_1->channel_init_wait);
  break;

 case 131:
  FUNC_4(VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_4);
  break;

 default:
  FUNC_3(VAR_0,
      "Unknown send completion type %d received!!\n",
      VAR_5->hdr.msg_type);
 }
}
