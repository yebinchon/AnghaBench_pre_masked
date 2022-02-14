
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_tlv_pdev_get_temp_cmd {int dummy; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct ath10k *VAR_3)
{
 struct wmi_tlv_pdev_get_temp_cmd *VAR_4;
 struct wmi_tlv *VAR_5;
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_3(VAR_3, sizeof(*VAR_5) + sizeof(*VAR_4));
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_5 = (void *)VAR_6->data;
 VAR_5->tag = FUNC_1(VAR_2);
 VAR_5->len = FUNC_1(sizeof(*VAR_4));
 VAR_4 = (void *)VAR_5->value;
 FUNC_2(VAR_3, VAR_0, "wmi pdev get temperature tlv\n");
 return VAR_6;
}
