
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mwifiex_sta_node {void* tdls_status; } ;
struct mwifiex_private {int adapter; } ;
struct host_cmd_ds_tdls_oper {int peer_mac; int tdls_action; int reason; } ;
struct TYPE_2__ {struct host_cmd_ds_tdls_oper tdls_oper; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int,...) ;
 struct mwifiex_sta_node* FUNC_2 (struct mwifiex_private*,int) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_private *VAR_5,
     struct host_cmd_ds_command *VAR_6)
{
 struct host_cmd_ds_tdls_oper *VAR_7 = &VAR_6->params.tdls_oper;
 u16 VAR_8 = FUNC_0(VAR_7->reason);
 u16 VAR_9 = FUNC_0(VAR_7->tdls_action);
 struct mwifiex_sta_node *VAR_10 =
      FUNC_2(VAR_5, VAR_7->peer_mac);

 switch (VAR_9) {
 case 128:
  if (VAR_8) {
   if (!VAR_10 || VAR_8 == VAR_3)
    FUNC_1(VAR_5->adapter, VAR_1,
         "TDLS link delete for %pM failed: reason %d\n",
         VAR_7->peer_mac, VAR_8);
   else
    FUNC_1(VAR_5->adapter, VAR_0,
         "TDLS link delete for %pM failed: reason %d\n",
         VAR_7->peer_mac, VAR_8);
  } else {
   FUNC_1(VAR_5->adapter, VAR_1,
        "TDLS link delete for %pM successful\n",
        VAR_7->peer_mac);
  }
  break;
 case 129:
  if (VAR_8) {
   FUNC_1(VAR_5->adapter, VAR_0,
        "TDLS link creation for %pM failed: reason %d",
        VAR_7->peer_mac, VAR_8);
   if (VAR_10 && VAR_8 != VAR_2)
    VAR_10->tdls_status = VAR_4;
  } else {
   FUNC_1(VAR_5->adapter, VAR_1,
        "TDLS link creation for %pM successful",
        VAR_7->peer_mac);
  }
  break;
 case 130:
  if (VAR_8) {
   FUNC_1(VAR_5->adapter, VAR_0,
        "TDLS link config for %pM failed, reason %d\n",
        VAR_7->peer_mac, VAR_8);
   if (VAR_10)
    VAR_10->tdls_status = VAR_4;
  } else {
   FUNC_1(VAR_5->adapter, VAR_1,
        "TDLS link config for %pM successful\n",
        VAR_7->peer_mac);
  }
  break;
 default:
  FUNC_1(VAR_5->adapter, VAR_0,
       "Unknown TDLS command action response %d", VAR_9);
  return -1;
 }

 return 0;
}
