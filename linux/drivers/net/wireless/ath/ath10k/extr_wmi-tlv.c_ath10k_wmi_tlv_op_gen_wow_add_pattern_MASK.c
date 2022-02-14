
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmi_tlv_wow_bitmap_pattern {void* pattern_id; void* bitmask_len; void* pattern_len; void* pattern_offset; int bitmaskbuf; int patternbuf; } ;
struct wmi_tlv_wow_add_pattern_cmd {void* pattern_type; void* pattern_id; void* vdev_id; } ;
struct wmi_tlv {void* len; void* tag; scalar_t__ value; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ath10k*,int ,char*,int,int,int) ;
 struct sk_buff* FUNC_4 (struct ath10k*,size_t) ;
 int FUNC_5 (int ,int const*,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(struct ath10k *VAR_7, u32 VAR_8,
          u32 VAR_9, const u8 *VAR_10,
          const u8 *VAR_11, int VAR_12,
          int VAR_13)
{
 struct wmi_tlv_wow_add_pattern_cmd *VAR_14;
 struct wmi_tlv_wow_bitmap_pattern *VAR_15;
 struct wmi_tlv *VAR_16;
 struct sk_buff *VAR_17;
 void *VAR_18;
 size_t VAR_19;

 VAR_19 = sizeof(*VAR_16) + sizeof(*VAR_14) +
       sizeof(*VAR_16) +
       sizeof(*VAR_16) + sizeof(*VAR_15) +
       sizeof(*VAR_16) +
       sizeof(*VAR_16) +
       sizeof(*VAR_16) +
       sizeof(*VAR_16) +
       sizeof(*VAR_16) + sizeof(u32);

 VAR_17 = FUNC_4(VAR_7, VAR_19);
 if (!VAR_17)
  return FUNC_0(-VAR_1);


 VAR_18 = (void *)VAR_17->data;
 VAR_16 = VAR_18;
 VAR_16->tag = FUNC_1(VAR_4);
 VAR_16->len = FUNC_1(sizeof(*VAR_14));
 VAR_14 = (void *)VAR_16->value;

 VAR_14->vdev_id = FUNC_2(VAR_8);
 VAR_14->pattern_id = FUNC_2(VAR_9);
 VAR_14->pattern_type = FUNC_2(VAR_6);

 VAR_18 += sizeof(*VAR_16);
 VAR_18 += sizeof(*VAR_14);


 VAR_16 = VAR_18;
 VAR_16->tag = FUNC_1(VAR_2);
 VAR_16->len = FUNC_1(sizeof(*VAR_16) + sizeof(*VAR_15));

 VAR_18 += sizeof(*VAR_16);

 VAR_16 = VAR_18;
 VAR_16->tag = FUNC_1(VAR_5);
 VAR_16->len = FUNC_1(sizeof(*VAR_15));
 VAR_15 = (void *)VAR_16->value;

 FUNC_5(VAR_15->patternbuf, VAR_10, VAR_12);
 FUNC_5(VAR_15->bitmaskbuf, VAR_11, VAR_12);
 VAR_15->pattern_offset = FUNC_2(VAR_13);
 VAR_15->pattern_len = FUNC_2(VAR_12);
 VAR_15->bitmask_len = FUNC_2(VAR_12);
 VAR_15->pattern_id = FUNC_2(VAR_9);

 VAR_18 += sizeof(*VAR_16);
 VAR_18 += sizeof(*VAR_15);


 VAR_16 = VAR_18;
 VAR_16->tag = FUNC_1(VAR_2);
 VAR_16->len = FUNC_1(0);

 VAR_18 += sizeof(*VAR_16);


 VAR_16 = VAR_18;
 VAR_16->tag = FUNC_1(VAR_2);
 VAR_16->len = FUNC_1(0);

 VAR_18 += sizeof(*VAR_16);


 VAR_16 = VAR_18;
 VAR_16->tag = FUNC_1(VAR_2);
 VAR_16->len = FUNC_1(0);

 VAR_18 += sizeof(*VAR_16);


 VAR_16 = VAR_18;
 VAR_16->tag = FUNC_1(VAR_3);
 VAR_16->len = FUNC_1(0);

 VAR_18 += sizeof(*VAR_16);


 VAR_16 = VAR_18;
 VAR_16->tag = FUNC_1(VAR_3);
 VAR_16->len = FUNC_1(sizeof(u32));

 FUNC_3(VAR_7, VAR_0, "wmi tlv wow add pattern vdev_id %d pattern_id %d, pattern_offset %d\n",
     VAR_8, VAR_9, VAR_13);
 return VAR_17;
}
