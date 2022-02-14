
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rem_sta_resp {int status; } ;
struct iwl_rem_sta_cmd {int num_sta; int addr; } ;
struct iwl_priv {int sta_lock; } ;
struct iwl_host_cmd {struct iwl_rx_packet* resp_pkt; int flags; int data; int len; int id; } ;
typedef int rm_sta_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*) ;

 int VAR_3 ;
 int FUNC_2 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_3 (struct iwl_host_cmd*) ;
 int FUNC_4 (struct iwl_priv*,int) ;
 int FUNC_5 (int *,int const*,int ) ;
 int FUNC_6 (struct iwl_rem_sta_cmd*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct iwl_priv *VAR_4,
       const u8 *VAR_5, int VAR_6,
       bool VAR_7)
{
 struct iwl_rx_packet *VAR_8;
 int VAR_9;
 struct iwl_rem_sta_cmd VAR_10;
 struct iwl_rem_sta_resp *VAR_11;

 struct iwl_host_cmd VAR_12 = {
  .id = VAR_3,
  .len = sizeof(struct iwl_rem_sta_cmd), 
  .data = &VAR_10, 
 };

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.num_sta = 1;
 FUNC_5(&VAR_10.addr, VAR_5, VAR_2);

 VAR_12.flags |= VAR_0;

 VAR_9 = FUNC_2(VAR_4, &VAR_12);

 if (VAR_9)
  return VAR_9;

 VAR_8 = VAR_12.resp_pkt;
 VAR_11 = (void *)VAR_8->data;

 switch (VAR_11->status) {
 case 128:
  if (!VAR_7) {
   FUNC_7(&VAR_4->sta_lock);
   FUNC_4(VAR_4, VAR_6);
   FUNC_8(&VAR_4->sta_lock);
  }
  FUNC_0(VAR_4, "REPLY_REMOVE_STA PASSED\n");
  break;
 default:
  VAR_9 = -VAR_1;
  FUNC_1(VAR_4, "REPLY_REMOVE_STA failed\n");
  break;
 }

 FUNC_3(&VAR_12);

 return VAR_9;
}
