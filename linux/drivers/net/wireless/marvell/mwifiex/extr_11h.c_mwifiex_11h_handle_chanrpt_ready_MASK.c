
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_8__ {TYPE_3__* chan; } ;
struct mwifiex_private {TYPE_4__ dfs_chandef; int netdev; int dfs_cac_work; int adapter; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct TYPE_6__ {int radar; } ;
struct TYPE_5__ {int type; int len; } ;
struct mwifiex_ie_types_chan_rpt_data {TYPE_2__ map; TYPE_1__ header; } ;
struct host_cmd_ds_chan_rpt_event {int tlvbuf; int result; } ;
struct TYPE_7__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_4__*,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,...) ;

int FUNC_5(struct mwifiex_private *VAR_5,
         struct sk_buff *VAR_6)
{
 struct host_cmd_ds_chan_rpt_event *VAR_7;
 struct mwifiex_ie_types_chan_rpt_data *VAR_8;
 u8 *VAR_9;
 u16 VAR_10, VAR_11;

 VAR_7 = (void *)(VAR_6->data + sizeof(u32));
 VAR_10 = VAR_6->len - (sizeof(struct host_cmd_ds_chan_rpt_event)+
    sizeof(u32));

 if (FUNC_3(VAR_7->result) != VAR_2) {
  FUNC_4(VAR_5->adapter, VAR_0,
       "Error in channel report event\n");
  return -1;
 }

 VAR_9 = (void *)&VAR_7->tlvbuf;

 while (VAR_10 >= sizeof(struct mwifiex_ie_types_header)) {
  VAR_8 = (void *)&VAR_7->tlvbuf;
  VAR_11 = FUNC_2(VAR_8->header.len);

  switch (FUNC_2(VAR_8->header.type)) {
  case 128:
   if (VAR_8->map.radar) {
    FUNC_4(VAR_5->adapter, VAR_3,
         "RADAR Detected on channel %d!\n",
         VAR_5->dfs_chandef.chan->hw_value);
    FUNC_0(&VAR_5->dfs_cac_work);
    FUNC_1(VAR_5->netdev,
         &VAR_5->dfs_chandef,
         VAR_4,
         VAR_1);
   }
   break;
  default:
   break;
  }

  VAR_9 += (VAR_11 + sizeof(VAR_8->header));
  VAR_10 -= (VAR_11 + sizeof(VAR_8->header));
 }

 return 0;
}
