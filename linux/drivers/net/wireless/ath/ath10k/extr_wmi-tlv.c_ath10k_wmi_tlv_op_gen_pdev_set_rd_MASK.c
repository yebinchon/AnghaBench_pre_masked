
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wmi_tlv_pdev_set_rd_cmd {void* conform_limit_5ghz; void* conform_limit_2ghz; void* regd_5ghz; void* regd_2ghz; void* regd; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef enum wmi_dfs_region { ____Placeholder_wmi_dfs_region } wmi_dfs_region ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_4 (struct ath10k*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_5(struct ath10k *VAR_3,
      u16 VAR_4, u16 VAR_5, u16 VAR_6,
      u16 VAR_7, u16 VAR_8,
      enum wmi_dfs_region VAR_9)
{
 struct wmi_tlv_pdev_set_rd_cmd *VAR_10;
 struct wmi_tlv *VAR_11;
 struct sk_buff *VAR_12;

 VAR_12 = FUNC_4(VAR_3, sizeof(*VAR_11) + sizeof(*VAR_10));
 if (!VAR_12)
  return FUNC_0(-VAR_1);

 VAR_11 = (void *)VAR_12->data;
 VAR_11->tag = FUNC_1(VAR_2);
 VAR_11->len = FUNC_1(sizeof(*VAR_10));
 VAR_10 = (void *)VAR_11->value;
 VAR_10->regd = FUNC_2(VAR_4);
 VAR_10->regd_2ghz = FUNC_2(VAR_5);
 VAR_10->regd_5ghz = FUNC_2(VAR_6);
 VAR_10->conform_limit_2ghz = FUNC_2(VAR_7);
 VAR_10->conform_limit_5ghz = FUNC_2(VAR_8);

 FUNC_3(VAR_3, VAR_0, "wmi tlv pdev set rd\n");
 return VAR_12;
}
