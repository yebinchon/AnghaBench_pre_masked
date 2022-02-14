
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_wmm_params_all_arg {int ac_vo; int ac_vi; int ac_bk; int ac_be; } ;
struct wmi_wmm_params {int dummy; } ;
struct wmi_tlv_pdev_set_wmm_cmd {int dummy; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_3 (struct ath10k*,size_t) ;
 void* FUNC_4 (void*,int *) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_3,
       const struct wmi_wmm_params_all_arg *VAR_4)
{
 struct wmi_tlv_pdev_set_wmm_cmd *VAR_5;
 struct wmi_wmm_params *VAR_6;
 struct wmi_tlv *VAR_7;
 struct sk_buff *VAR_8;
 size_t VAR_9;
 void *VAR_10;

 VAR_9 = (sizeof(*VAR_7) + sizeof(*VAR_5)) +
       (4 * (sizeof(*VAR_7) + sizeof(*VAR_6)));
 VAR_8 = FUNC_3(VAR_3, VAR_9);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_10 = (void *)VAR_8->data;

 VAR_7 = VAR_10;
 VAR_7->tag = FUNC_1(VAR_2);
 VAR_7->len = FUNC_1(sizeof(*VAR_5));
 VAR_5 = (void *)VAR_7->value;



 VAR_10 += sizeof(*VAR_7);
 VAR_10 += sizeof(*VAR_5);

 VAR_10 = FUNC_4(VAR_10, &VAR_4->ac_be);
 VAR_10 = FUNC_4(VAR_10, &VAR_4->ac_bk);
 VAR_10 = FUNC_4(VAR_10, &VAR_4->ac_vi);
 VAR_10 = FUNC_4(VAR_10, &VAR_4->ac_vo);

 FUNC_2(VAR_3, VAR_0, "wmi tlv pdev set wmm\n");
 return VAR_8;
}
