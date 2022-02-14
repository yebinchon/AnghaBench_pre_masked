
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct hnae_ring {int dummy; } ;
struct hnae_desc_cb {scalar_t__ type; int * priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct hnae_ring*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct hnae_ring *VAR_1, struct hnae_desc_cb *VAR_2)
{
 if (FUNC_3(!VAR_2->priv))
  return;

 if (VAR_2->type == VAR_0)
  FUNC_0((struct sk_buff *)VAR_2->priv);
 else if (FUNC_3(FUNC_1(VAR_1)))
  FUNC_2((struct page *)VAR_2->priv);

 VAR_2->priv = ((void*)0);
}
