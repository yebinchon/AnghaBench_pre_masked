
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rssi; } ;
struct mwifiex_sta_node {TYPE_1__ stats; } ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_ie_types_sta_info {int rssi; int mac; } ;
struct host_cmd_ds_sta_list {int sta_count; int tlv; } ;
struct TYPE_4__ {struct host_cmd_ds_sta_list sta_list; } ;
struct host_cmd_ds_command {TYPE_2__ params; } ;


 int FUNC_0 (int ) ;
 struct mwifiex_sta_node* FUNC_1 (struct mwifiex_private*,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_private *VAR_0,
        struct host_cmd_ds_command *VAR_1)
{
 struct host_cmd_ds_sta_list *VAR_2 =
  &VAR_1->params.sta_list;
 struct mwifiex_ie_types_sta_info *VAR_3 = (void *)&VAR_2->tlv;
 int VAR_4;
 struct mwifiex_sta_node *VAR_5;

 for (VAR_4 = 0; VAR_4 < (FUNC_0(VAR_2->sta_count)); VAR_4++) {
  VAR_5 = FUNC_1(VAR_0, VAR_3->mac);
  if (FUNC_2(!VAR_5))
   continue;

  VAR_5->stats.rssi = VAR_3->rssi;
  VAR_3++;
 }

 return 0;
}
