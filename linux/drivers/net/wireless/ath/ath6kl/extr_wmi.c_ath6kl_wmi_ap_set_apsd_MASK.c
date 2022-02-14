
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wmi_ap_set_apsd_cmd {int enable; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;

int FUNC_2(struct wmi *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct wmi_ap_set_apsd_cmd *VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = (struct wmi_ap_set_apsd_cmd *)VAR_7->data;
 VAR_6->enable = VAR_5;

 return FUNC_0(VAR_3, VAR_4, VAR_7, VAR_2,
       VAR_1);
}
