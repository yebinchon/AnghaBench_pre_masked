
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct qlink_tlv_hdr {scalar_t__ val; void* len; void* type; } ;
struct qlink_random_mac_addr {int mac_addr_mask; int mac_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int ) ;
 struct qlink_tlv_hdr* FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_2,
         const u8 *VAR_3,
         const u8 *VAR_4)
{
 struct qlink_random_mac_addr *VAR_5;
 struct qlink_tlv_hdr *VAR_6 =
  FUNC_2(VAR_2, sizeof(*VAR_6) + sizeof(*VAR_5));

 VAR_6->type = FUNC_0(VAR_1);
 VAR_6->len = FUNC_0(sizeof(*VAR_5));
 VAR_5 = (struct qlink_random_mac_addr *)VAR_6->val;

 FUNC_1(VAR_5->mac_addr, VAR_3, VAR_0);
 FUNC_1(VAR_5->mac_addr_mask, VAR_4, VAR_0);
}
