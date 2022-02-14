
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct qlink_tlv_hdr {int val; void* len; void* type; } ;


 void* FUNC_0 (size_t) ;
 int FUNC_1 (int ,int const*,size_t) ;
 struct qlink_tlv_hdr* FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_3(struct sk_buff *VAR_0,
         u16 VAR_1, const u8 VAR_2[],
         size_t VAR_3)
{
 struct qlink_tlv_hdr *VAR_4 = FUNC_2(VAR_0, sizeof(*VAR_4) + VAR_3);

 VAR_4->type = FUNC_0(VAR_1);
 VAR_4->len = FUNC_0(VAR_3);
 FUNC_1(VAR_4->val, VAR_2, VAR_3);
}
