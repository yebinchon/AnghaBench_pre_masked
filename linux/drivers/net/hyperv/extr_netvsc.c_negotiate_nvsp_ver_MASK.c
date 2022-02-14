
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_13__ {int ieee8021q; int sriov; int teaming; int rsc; } ;
struct TYPE_14__ {TYPE_5__ capability; scalar_t__ mtu; } ;
struct TYPE_15__ {TYPE_6__ send_ndis_config; } ;
struct TYPE_10__ {scalar_t__ status; } ;
struct TYPE_9__ {scalar_t__ max_protocol_ver; scalar_t__ min_protocol_ver; } ;
struct TYPE_11__ {TYPE_2__ init_complete; TYPE_1__ init; } ;
struct TYPE_16__ {TYPE_7__ v2_msg; TYPE_3__ init_msg; } ;
struct TYPE_12__ {int msg_type; } ;
struct nvsp_message {TYPE_8__ msg; TYPE_4__ hdr; } ;
struct netvsc_device {int channel_init_wait; } ;
struct net_device {scalar_t__ mtu; } ;
struct hv_device {int channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct net_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct nvsp_message*,int ,int) ;
 int FUNC_2 (struct net_device*,struct nvsp_message*) ;
 int FUNC_3 (int ,struct nvsp_message*,int,unsigned long,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct hv_device *VAR_10,
         struct netvsc_device *VAR_11,
         struct nvsp_message *VAR_12,
         u32 VAR_13)
{
 struct net_device *VAR_14 = FUNC_0(VAR_10);
 int VAR_15;

 FUNC_1(VAR_12, 0, sizeof(struct nvsp_message));
 VAR_12->hdr.msg_type = VAR_3;
 VAR_12->msg.init_msg.init.min_protocol_ver = VAR_13;
 VAR_12->msg.init_msg.init.max_protocol_ver = VAR_13;
 FUNC_2(VAR_14, VAR_12);


 VAR_15 = FUNC_3(VAR_10->channel, VAR_12,
          sizeof(struct nvsp_message),
          (unsigned long)VAR_12,
          VAR_9,
          VAR_8);

 if (VAR_15 != 0)
  return VAR_15;

 FUNC_4(&VAR_11->channel_init_wait);

 if (VAR_12->msg.init_msg.init_complete.status !=
     VAR_7)
  return -VAR_0;

 if (VAR_13 == VAR_4)
  return 0;


 FUNC_1(VAR_12, 0, sizeof(struct nvsp_message));
 VAR_12->hdr.msg_type = VAR_2;
 VAR_12->msg.v2_msg.send_ndis_config.mtu = VAR_14->mtu + VAR_1;
 VAR_12->msg.v2_msg.send_ndis_config.capability.ieee8021q = 1;

 if (VAR_13 >= VAR_5) {
  VAR_12->msg.v2_msg.send_ndis_config.capability.sriov = 1;


  VAR_12->msg.v2_msg.send_ndis_config.capability.teaming = 1;
 }

 if (VAR_13 >= VAR_6)
  VAR_12->msg.v2_msg.send_ndis_config.capability.rsc = 1;

 FUNC_2(VAR_14, VAR_12);

 VAR_15 = FUNC_3(VAR_10->channel, VAR_12,
    sizeof(struct nvsp_message),
    (unsigned long)VAR_12,
    VAR_9, 0);

 return VAR_15;
}
