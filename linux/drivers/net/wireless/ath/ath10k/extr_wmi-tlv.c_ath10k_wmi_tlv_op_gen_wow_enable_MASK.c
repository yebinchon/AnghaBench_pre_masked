
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_tlv_wow_enable_cmd {void* pause_iface_config; void* enable; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int link_can_suspend; } ;
struct ath10k {TYPE_1__ bus_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,size_t) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_4)
{
 struct wmi_tlv_wow_enable_cmd *VAR_5;
 struct wmi_tlv *VAR_6;
 struct sk_buff *VAR_7;
 size_t VAR_8;

 VAR_8 = sizeof(*VAR_6) + sizeof(*VAR_5);
 VAR_7 = FUNC_4(VAR_4, VAR_8);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_6 = (struct wmi_tlv *)VAR_7->data;
 VAR_6->tag = FUNC_1(VAR_2);
 VAR_6->len = FUNC_1(sizeof(*VAR_5));
 VAR_5 = (void *)VAR_6->value;

 VAR_5->enable = FUNC_2(1);
 if (!VAR_4->bus_param.link_can_suspend)
  VAR_5->pause_iface_config = FUNC_2(VAR_3);

 FUNC_3(VAR_4, VAR_0, "wmi tlv wow enable\n");
 return VAR_7;
}
