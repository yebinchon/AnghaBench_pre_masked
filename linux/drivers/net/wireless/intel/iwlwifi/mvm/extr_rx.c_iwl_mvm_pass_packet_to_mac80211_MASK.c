
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u16 ;
struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
struct iwl_rx_cmd_buffer {int truesize; } ;
struct iwl_mvm {int hw; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ieee80211_sta*,struct sk_buff*,struct napi_struct*) ;
 void* FUNC_2 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_3 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_4 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int,unsigned int,int ) ;
 int FUNC_6 (struct sk_buff*,struct ieee80211_hdr*,unsigned int) ;
 int FUNC_7 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct iwl_mvm *VAR_0,
         struct ieee80211_sta *VAR_1,
         struct napi_struct *VAR_2,
         struct sk_buff *VAR_3,
         struct ieee80211_hdr *VAR_4, u16 VAR_5,
         u8 VAR_6,
         struct iwl_rx_cmd_buffer *VAR_7)
{
 unsigned int VAR_8 = FUNC_0(VAR_4->frame_control);
 unsigned int VAR_9;
 FUNC_7(VAR_3, VAR_8 & 3);
 VAR_8 = (VAR_5 <= FUNC_8(VAR_3)) ? VAR_5 : VAR_8 + VAR_6 + 8;

 FUNC_6(VAR_3, VAR_4, VAR_8);
 VAR_9 = VAR_5 - VAR_8;

 if (VAR_9) {
  int VAR_10 = (void *)VAR_4 + VAR_8 -
        FUNC_2(VAR_7) + FUNC_3(VAR_7);

  FUNC_5(VAR_3, 0, FUNC_4(VAR_7), VAR_10,
    VAR_9, VAR_7->truesize);
 }

 FUNC_1(VAR_0->hw, VAR_1, VAR_3, VAR_2);
}
