
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct wmi_tlv_bcn_tmpl_cmd {void* buf_len; void* tim_ie_offset; void* vdev_id; } ;
struct wmi_tlv_bcn_prb_info {scalar_t__ ies; void* erp; void* caps; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct sk_buff {size_t len; void* data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (struct ath10k*,int ,char*,size_t) ;
 struct sk_buff* FUNC_5 (struct ath10k*,size_t) ;
 int FUNC_6 (scalar_t__,void*,size_t) ;
 int FUNC_7 (size_t,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_8(struct ath10k *VAR_6, u32 VAR_7,
          u32 VAR_8, struct sk_buff *VAR_9,
          u32 VAR_10, u32 VAR_11, void *VAR_12,
          size_t VAR_13)
{
 struct wmi_tlv_bcn_tmpl_cmd *VAR_14;
 struct wmi_tlv_bcn_prb_info *VAR_15;
 struct wmi_tlv *VAR_16;
 struct sk_buff *VAR_17;
 void *VAR_18;
 size_t VAR_19;

 if (FUNC_1(VAR_13 > 0 && !VAR_12))
  return FUNC_0(-VAR_1);

 VAR_19 = sizeof(*VAR_16) + sizeof(*VAR_14) +
       sizeof(*VAR_16) + sizeof(*VAR_15) + VAR_13 +
       sizeof(*VAR_16) + FUNC_7(VAR_9->len, 4);
 VAR_17 = FUNC_5(VAR_6, VAR_19);
 if (!VAR_17)
  return FUNC_0(-VAR_2);

 VAR_18 = (void *)VAR_17->data;
 VAR_16 = VAR_18;
 VAR_16->tag = FUNC_2(VAR_5);
 VAR_16->len = FUNC_2(sizeof(*VAR_14));
 VAR_14 = (void *)VAR_16->value;
 VAR_14->vdev_id = FUNC_3(VAR_7);
 VAR_14->tim_ie_offset = FUNC_3(VAR_8);
 VAR_14->buf_len = FUNC_3(VAR_9->len);

 VAR_18 += sizeof(*VAR_16);
 VAR_18 += sizeof(*VAR_14);






 VAR_16 = VAR_18;
 VAR_16->tag = FUNC_2(VAR_4);
 VAR_16->len = FUNC_2(sizeof(*VAR_15) + VAR_13);
 VAR_15 = (void *)VAR_16->value;
 VAR_15->caps = FUNC_3(VAR_10);
 VAR_15->erp = FUNC_3(VAR_11);
 FUNC_6(VAR_15->ies, VAR_12, VAR_13);

 VAR_18 += sizeof(*VAR_16);
 VAR_18 += sizeof(*VAR_15);
 VAR_18 += VAR_13;

 VAR_16 = VAR_18;
 VAR_16->tag = FUNC_2(VAR_3);
 VAR_16->len = FUNC_2(FUNC_7(VAR_9->len, 4));
 FUNC_6(VAR_16->value, VAR_9->data, VAR_9->len);



 FUNC_4(VAR_6, VAR_0, "wmi tlv bcn tmpl vdev_id %i\n",
     VAR_7);
 return VAR_17;
}
