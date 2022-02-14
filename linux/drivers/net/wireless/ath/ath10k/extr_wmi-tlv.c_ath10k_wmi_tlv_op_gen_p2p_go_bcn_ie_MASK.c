
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ const u32 ;
struct wmi_tlv_p2p_go_bcn_ie {void* ie_len; void* vdev_id; } ;
struct wmi_tlv {scalar_t__ value; void* len; void* tag; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (scalar_t__ const) ;
 int FUNC_3 (struct ath10k*,int ,char*,scalar_t__ const) ;
 struct sk_buff* FUNC_4 (struct ath10k*,size_t) ;
 int FUNC_5 (scalar_t__,scalar_t__ const*,scalar_t__ const) ;
 int FUNC_6 (scalar_t__ const,int) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct ath10k *VAR_4, u32 VAR_5,
        const u8 *VAR_6)
{
 struct wmi_tlv_p2p_go_bcn_ie *VAR_7;
 struct wmi_tlv *VAR_8;
 struct sk_buff *VAR_9;
 void *VAR_10;
 size_t VAR_11;

 VAR_11 = sizeof(*VAR_8) + sizeof(*VAR_7) +
       sizeof(*VAR_8) + FUNC_6(VAR_6[1] + 2, 4);
 VAR_9 = FUNC_4(VAR_4, VAR_11);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_10 = (void *)VAR_9->data;
 VAR_8 = VAR_10;
 VAR_8->tag = FUNC_1(VAR_3);
 VAR_8->len = FUNC_1(sizeof(*VAR_7));
 VAR_7 = (void *)VAR_8->value;
 VAR_7->vdev_id = FUNC_2(VAR_5);
 VAR_7->ie_len = FUNC_2(VAR_6[1] + 2);

 VAR_10 += sizeof(*VAR_8);
 VAR_10 += sizeof(*VAR_7);

 VAR_8 = VAR_10;
 VAR_8->tag = FUNC_1(VAR_2);
 VAR_8->len = FUNC_1(FUNC_6(VAR_6[1] + 2, 4));
 FUNC_5(VAR_8->value, VAR_6, VAR_6[1] + 2);

 VAR_10 += sizeof(*VAR_8);
 VAR_10 += FUNC_6(VAR_6[1] + 2, 4);

 FUNC_3(VAR_4, VAR_0, "wmi tlv p2p go bcn ie for vdev %i\n",
     VAR_5);
 return VAR_9;
}
