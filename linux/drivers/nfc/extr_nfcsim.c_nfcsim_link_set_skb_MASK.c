
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sk_buff {int dummy; } ;
struct nfcsim_link {int lock; void* mode; void* rf_tech; struct sk_buff* skb; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nfcsim_link *VAR_0, struct sk_buff *VAR_1,
    u8 VAR_2, u8 VAR_3)
{
 FUNC_1(&VAR_0->lock);

 FUNC_0(VAR_0->skb);
 VAR_0->skb = VAR_1;
 VAR_0->rf_tech = VAR_2;
 VAR_0->mode = VAR_3;

 FUNC_2(&VAR_0->lock);
}
