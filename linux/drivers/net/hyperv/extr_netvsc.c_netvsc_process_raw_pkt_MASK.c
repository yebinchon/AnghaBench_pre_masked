
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmpacket_descriptor {int type; int trans_id; } ;
struct vmbus_channel {int dummy; } ;
struct nvsp_message {int dummy; } ;
struct netvsc_device {int dummy; } ;
struct netvsc_channel {struct vmbus_channel* channel; } ;
struct net_device {int dummy; } ;
struct hv_device {int dummy; } ;





 struct nvsp_message* FUNC_0 (struct vmpacket_descriptor const*) ;
 int FUNC_1 (struct net_device*,char*,int,int ) ;
 int FUNC_2 (struct net_device*,struct netvsc_device*,struct netvsc_channel*,struct vmpacket_descriptor const*,struct nvsp_message const*) ;
 int FUNC_3 (struct net_device*,struct nvsp_message const*) ;
 int FUNC_4 (struct net_device*,struct netvsc_device*,struct vmbus_channel*,struct vmpacket_descriptor const*,int) ;
 int FUNC_5 (struct net_device*,struct vmbus_channel*,struct nvsp_message const*) ;

__attribute__((used)) static int FUNC_6(struct hv_device *VAR_0,
      struct netvsc_channel *VAR_1,
      struct netvsc_device *VAR_2,
      struct net_device *VAR_3,
      const struct vmpacket_descriptor *VAR_4,
      int VAR_5)
{
 struct vmbus_channel *VAR_6 = VAR_1->channel;
 const struct nvsp_message *VAR_7 = FUNC_0(VAR_4);

 FUNC_5(VAR_3, VAR_6, VAR_7);

 switch (VAR_4->type) {
 case 130:
  FUNC_4(VAR_3, VAR_2, VAR_6,
           VAR_4, VAR_5);
  break;

 case 128:
  return FUNC_2(VAR_3, VAR_2, VAR_1,
          VAR_4, VAR_7);
  break;

 case 129:
  FUNC_3(VAR_3, VAR_7);
  break;

 default:
  FUNC_1(VAR_3, "unhandled packet type %d, tid %llx\n",
      VAR_4->type, VAR_4->trans_id);
  break;
 }

 return 0;
}
