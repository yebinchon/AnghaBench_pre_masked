
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_ap_apsd_buffered_traffic_cmd {int flags; void* bitmap; void* aid; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct wmi *VAR_3, u8 VAR_4,
          u16 VAR_5, u16 VAR_6, u32 VAR_7)
{
 struct wmi_ap_apsd_buffered_traffic_cmd *VAR_8;
 struct sk_buff *VAR_9;

 VAR_9 = FUNC_1(sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_0;

 VAR_8 = (struct wmi_ap_apsd_buffered_traffic_cmd *)VAR_9->data;
 VAR_8->aid = FUNC_2(VAR_5);
 VAR_8->bitmap = FUNC_2(VAR_6);
 VAR_8->flags = FUNC_3(VAR_7);

 return FUNC_0(VAR_3, VAR_4, VAR_9,
       VAR_2,
       VAR_1);
}
