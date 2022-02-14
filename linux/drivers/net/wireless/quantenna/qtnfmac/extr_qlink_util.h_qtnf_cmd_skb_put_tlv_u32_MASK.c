
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int u32 ;
typedef int u16 ;
typedef int tmp ;
struct sk_buff {int dummy; } ;
struct qlink_tlv_hdr {int val; void* len; void* type; } ;
typedef int __le32 ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;
 struct qlink_tlv_hdr* FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_4(struct sk_buff *VAR_0,
         u16 VAR_1, u32 VAR_2)
{
 struct qlink_tlv_hdr *VAR_3 = FUNC_3(VAR_0, sizeof(*VAR_3) + sizeof(VAR_2));
 __le32 VAR_4 = FUNC_1(VAR_2);

 VAR_3->type = FUNC_0(VAR_1);
 VAR_3->len = FUNC_0(sizeof(VAR_2));
 FUNC_2(VAR_3->val, &VAR_4, sizeof(VAR_4));
}
