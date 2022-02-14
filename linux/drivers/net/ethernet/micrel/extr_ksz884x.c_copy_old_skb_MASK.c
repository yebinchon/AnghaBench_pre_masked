
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int csum; int ip_summed; int protocol; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_1, struct sk_buff *VAR_2)
{
 VAR_2->dev = VAR_1->dev;
 VAR_2->protocol = VAR_1->protocol;
 VAR_2->ip_summed = VAR_1->ip_summed;
 VAR_2->csum = VAR_1->csum;
 FUNC_1(VAR_2, VAR_0);

 FUNC_0(VAR_1);
}
