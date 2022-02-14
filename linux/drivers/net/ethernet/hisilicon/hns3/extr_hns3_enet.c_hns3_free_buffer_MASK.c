
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct hns3_enet_ring {int dummy; } ;
struct hns3_desc_cb {scalar_t__ type; scalar_t__ priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hns3_enet_ring*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct hns3_desc_cb*,int ,int) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static void FUNC_4(struct hns3_enet_ring *VAR_1,
        struct hns3_desc_cb *VAR_2)
{
 if (VAR_2->type == VAR_0)
  FUNC_1((struct sk_buff *)VAR_2->priv);
 else if (!FUNC_0(VAR_1))
  FUNC_3((struct page *)VAR_2->priv);
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
}
