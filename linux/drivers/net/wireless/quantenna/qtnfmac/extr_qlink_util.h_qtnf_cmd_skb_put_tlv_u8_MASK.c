
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct qlink_tlv_hdr {int * val; void* len; void* type; } ;


 void* FUNC_0 (int) ;
 struct qlink_tlv_hdr* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_0, u16 VAR_1,
        u8 VAR_2)
{
 struct qlink_tlv_hdr *VAR_3 = FUNC_1(VAR_0, sizeof(*VAR_3) + sizeof(VAR_2));

 VAR_3->type = FUNC_0(VAR_1);
 VAR_3->len = FUNC_0(sizeof(VAR_2));
 *VAR_3->val = VAR_2;
}
