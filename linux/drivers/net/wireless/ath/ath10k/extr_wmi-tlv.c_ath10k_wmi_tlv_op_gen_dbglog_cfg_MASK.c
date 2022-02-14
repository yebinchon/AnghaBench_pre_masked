
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct wmi_tlv_dbglog_cmd {void* value; void* param; } ;
struct wmi_tlv {void* len; void* tag; scalar_t__ value; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;
typedef int bmap_len ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 void* FUNC_2 (size_t) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct ath10k*,int ,char*,int ) ;
 struct sk_buff* FUNC_5 (struct ath10k*,size_t) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(struct ath10k *VAR_8, u64 VAR_9,
     u32 VAR_10)
{
 struct wmi_tlv_dbglog_cmd *VAR_11;
 struct wmi_tlv *VAR_12;
 struct sk_buff *VAR_13;
 size_t VAR_14, VAR_15;
 u32 VAR_16;
 void *VAR_17;

 if (VAR_9) {
  VAR_16 = FUNC_1(
    VAR_9,
    VAR_3);
 } else {
  VAR_16 = FUNC_1(
    VAR_2,
    VAR_4);
 }

 VAR_15 = 0;
 VAR_14 = sizeof(*VAR_12) + sizeof(*VAR_11) + sizeof(*VAR_12) + VAR_15;
 VAR_13 = FUNC_5(VAR_8, VAR_14);
 if (!VAR_13)
  return FUNC_0(-VAR_1);

 VAR_17 = (void *)VAR_13->data;

 VAR_12 = VAR_17;
 VAR_12->tag = FUNC_2(VAR_7);
 VAR_12->len = FUNC_2(sizeof(*VAR_11));
 VAR_11 = (void *)VAR_12->value;
 VAR_11->param = FUNC_3(VAR_5);
 VAR_11->value = FUNC_3(VAR_16);

 VAR_17 += sizeof(*VAR_12);
 VAR_17 += sizeof(*VAR_11);

 VAR_12 = VAR_17;
 VAR_12->tag = FUNC_2(VAR_6);
 VAR_12->len = FUNC_2(VAR_15);



 VAR_17 += sizeof(*VAR_12);
 VAR_17 += sizeof(VAR_15);

 FUNC_4(VAR_8, VAR_0, "wmi tlv dbglog value 0x%08x\n", VAR_16);
 return VAR_13;
}
