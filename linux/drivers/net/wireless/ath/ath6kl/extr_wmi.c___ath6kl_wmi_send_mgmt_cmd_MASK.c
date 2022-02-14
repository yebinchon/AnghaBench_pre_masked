
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct wmi_send_mgmt_cmd {int * data; int len; void* no_cck; void* wait; void* freq; void* id; } ;
struct wmi {scalar_t__ last_mgmt_tx_frame_len; int * last_mgmt_tx_frame; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int *,int const*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct wmi *VAR_6, u8 VAR_7, u32 VAR_8,
          u32 VAR_9, u32 VAR_10, const u8 *VAR_11,
          u16 VAR_12, u32 VAR_13)
{
 struct sk_buff *VAR_14;
 struct wmi_send_mgmt_cmd *VAR_15;
 u8 *VAR_16;

 if (VAR_10)
  return -VAR_1;

 VAR_16 = FUNC_6(VAR_12, VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_14 = FUNC_2(sizeof(*VAR_15) + VAR_12);
 if (!VAR_14) {
  FUNC_5(VAR_16);
  return -VAR_2;
 }

 FUNC_5(VAR_6->last_mgmt_tx_frame);
 FUNC_7(VAR_16, VAR_11, VAR_12);
 VAR_6->last_mgmt_tx_frame = VAR_16;
 VAR_6->last_mgmt_tx_frame_len = VAR_12;

 FUNC_0(VAR_0,
     "send_action_cmd: id=%u freq=%u wait=%u len=%u\n",
     VAR_8, VAR_9, VAR_10, VAR_12);
 VAR_15 = (struct wmi_send_mgmt_cmd *) VAR_14->data;
 VAR_15->id = FUNC_4(VAR_8);
 VAR_15->freq = FUNC_4(VAR_9);
 VAR_15->wait = FUNC_4(VAR_10);
 VAR_15->no_cck = FUNC_4(VAR_13);
 VAR_15->len = FUNC_3(VAR_12);
 FUNC_7(VAR_15->data, VAR_11, VAR_12);
 return FUNC_1(VAR_6, VAR_7, VAR_14, VAR_5,
       VAR_4);
}
