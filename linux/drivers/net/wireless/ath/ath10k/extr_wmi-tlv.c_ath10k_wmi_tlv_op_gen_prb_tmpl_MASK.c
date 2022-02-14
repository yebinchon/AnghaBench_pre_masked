
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_tlv_prb_tmpl_cmd {void* buf_len; void* vdev_id; } ;
struct wmi_tlv_bcn_prb_info {scalar_t__ erp; scalar_t__ caps; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*,int ) ;
 struct sk_buff* FUNC_4 (struct ath10k*,size_t) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct ath10k *VAR_5, u32 VAR_6,
          struct sk_buff *VAR_7)
{
 struct wmi_tlv_prb_tmpl_cmd *VAR_8;
 struct wmi_tlv_bcn_prb_info *VAR_9;
 struct wmi_tlv *VAR_10;
 struct sk_buff *VAR_11;
 void *VAR_12;
 size_t VAR_13;

 VAR_13 = sizeof(*VAR_10) + sizeof(*VAR_8) +
       sizeof(*VAR_10) + sizeof(*VAR_9) +
       sizeof(*VAR_10) + FUNC_6(VAR_7->len, 4);
 VAR_11 = FUNC_4(VAR_5, VAR_13);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_12 = (void *)VAR_11->data;
 VAR_10 = VAR_12;
 VAR_10->tag = FUNC_1(VAR_4);
 VAR_10->len = FUNC_1(sizeof(*VAR_8));
 VAR_8 = (void *)VAR_10->value;
 VAR_8->vdev_id = FUNC_2(VAR_6);
 VAR_8->buf_len = FUNC_2(VAR_7->len);

 VAR_12 += sizeof(*VAR_10);
 VAR_12 += sizeof(*VAR_8);

 VAR_10 = VAR_12;
 VAR_10->tag = FUNC_1(VAR_3);
 VAR_10->len = FUNC_1(sizeof(*VAR_9));
 VAR_9 = (void *)VAR_10->value;
 VAR_9->caps = 0;
 VAR_9->erp = 0;

 VAR_12 += sizeof(*VAR_10);
 VAR_12 += sizeof(*VAR_9);

 VAR_10 = VAR_12;
 VAR_10->tag = FUNC_1(VAR_2);
 VAR_10->len = FUNC_1(FUNC_6(VAR_7->len, 4));
 FUNC_5(VAR_10->value, VAR_7->data, VAR_7->len);

 FUNC_3(VAR_5, VAR_0, "wmi tlv prb tmpl vdev_id %i\n",
     VAR_6);
 return VAR_11;
}
