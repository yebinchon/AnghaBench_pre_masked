
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct wmi_echo_cmd {int value; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,size_t) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_3, u32 VAR_4)
{
 struct wmi_echo_cmd *VAR_5;
 struct wmi_tlv *VAR_6;
 struct sk_buff *VAR_7;
 void *VAR_8;
 size_t VAR_9;

 VAR_9 = sizeof(*VAR_6) + sizeof(*VAR_5);
 VAR_7 = FUNC_3(VAR_3, VAR_9);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_8 = (void *)VAR_7->data;
 VAR_6 = VAR_8;
 VAR_6->tag = FUNC_1(VAR_2);
 VAR_6->len = FUNC_1(sizeof(*VAR_5));
 VAR_5 = (void *)VAR_6->value;
 VAR_5->value = FUNC_4(VAR_4);

 VAR_8 += sizeof(*VAR_6);
 VAR_8 += sizeof(*VAR_5);

 FUNC_2(VAR_3, VAR_0, "wmi tlv echo value 0x%08x\n", VAR_4);
 return VAR_7;
}
