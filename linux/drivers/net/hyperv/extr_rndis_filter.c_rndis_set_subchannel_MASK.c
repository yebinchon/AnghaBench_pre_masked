
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rndis_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ status; int num_subchannels; } ;
struct TYPE_7__ {int num_subchannels; int op; } ;
struct TYPE_9__ {TYPE_3__ subchn_comp; TYPE_2__ subchn_req; } ;
struct TYPE_10__ {TYPE_4__ v5_msg; } ;
struct TYPE_6__ {int msg_type; } ;
struct nvsp_message {TYPE_5__ msg; TYPE_1__ hdr; } ;
struct netvsc_device_info {int rss_key; } ;
struct netvsc_device {int num_chn; int open_chn; int subchan_open; int channel_init_wait; struct rndis_device* extension; struct nvsp_message channel_init_pkt; } ;
struct net_device_context {int* tx_table; struct hv_device* device_ctx; } ;
struct net_device {int dummy; } ;
struct hv_device {int channel; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvsp_message*,int ,int) ;
 int FUNC_3 (struct net_device*,char*,...) ;
 struct net_device_context* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,int) ;
 int VAR_7 ;
 int FUNC_7 (struct rndis_device*,int ) ;
 int FUNC_8 (struct net_device*,struct nvsp_message*) ;
 int FUNC_9 (int ,struct nvsp_message*,int,unsigned long,int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct net_device *VAR_8,
    struct netvsc_device *VAR_9,
    struct netvsc_device_info *VAR_10)
{
 struct nvsp_message *VAR_11 = &VAR_9->channel_init_pkt;
 struct net_device_context *VAR_12 = FUNC_4(VAR_8);
 struct hv_device *VAR_13 = VAR_12->device_ctx;
 struct rndis_device *VAR_14 = VAR_9->extension;
 int VAR_15, VAR_16;

 FUNC_0();

 FUNC_2(VAR_11, 0, sizeof(struct nvsp_message));
 VAR_11->hdr.msg_type = VAR_1;
 VAR_11->msg.v5_msg.subchn_req.op = VAR_3;
 VAR_11->msg.v5_msg.subchn_req.num_subchannels =
      VAR_9->num_chn - 1;
 FUNC_8(VAR_8, VAR_11);

 VAR_16 = FUNC_9(VAR_13->channel, VAR_11,
          sizeof(struct nvsp_message),
          (unsigned long)VAR_11,
          VAR_5,
          VAR_4);
 if (VAR_16) {
  FUNC_3(VAR_8, "sub channel allocate send failed: %d\n", VAR_16);
  return VAR_16;
 }

 FUNC_11(&VAR_9->channel_init_wait);
 if (VAR_11->msg.v5_msg.subchn_comp.status != VAR_2) {
  FUNC_3(VAR_8, "sub channel request failed\n");
  return -VAR_0;
 }

 VAR_9->num_chn = 1 +
  VAR_11->msg.v5_msg.subchn_comp.num_subchannels;


 FUNC_10(VAR_9->subchan_open,
     FUNC_1(&VAR_9->open_chn) == VAR_9->num_chn);


 if (VAR_10)
  FUNC_7(VAR_14, VAR_10->rss_key);
 else
  FUNC_7(VAR_14, VAR_7);

 FUNC_6(VAR_8, VAR_9->num_chn);
 FUNC_5(VAR_8, VAR_9->num_chn);

 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++)
  VAR_12->tx_table[VAR_15] = VAR_15 % VAR_9->num_chn;

 return 0;
}
