
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_priv {int sta_lock; } ;
struct iwl_add_sta_resp {int status; } ;






 int FUNC_0 (struct iwl_priv*,char*,int) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int FUNC_2 (struct iwl_priv*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_priv *VAR_0,
         struct iwl_rx_packet *VAR_1)
{
 struct iwl_add_sta_resp *VAR_2 = (void *)VAR_1->data;

 FUNC_1(VAR_0, "Processing response for adding station\n");

 FUNC_3(&VAR_0->sta_lock);

 switch (VAR_2->status) {
 case 128:
  FUNC_1(VAR_0, "REPLY_ADD_STA PASSED\n");
  break;
 case 129:
  FUNC_2(VAR_0, "Adding station failed, no room in table.\n");
  break;
 case 130:
  FUNC_2(VAR_0,
   "Adding station failed, no block ack resource.\n");
  break;
 case 131:
  FUNC_2(VAR_0, "Attempting to modify non-existing station\n");
  break;
 default:
  FUNC_0(VAR_0, "Received REPLY_ADD_STA:(0x%08X)\n",
    VAR_2->status);
  break;
 }

 FUNC_4(&VAR_0->sta_lock);
}
