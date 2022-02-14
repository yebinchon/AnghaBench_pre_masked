
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfp_net_r_vector {int nfp_net; int queue; } ;


 struct sk_buff* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,struct nfp_net_r_vector*,struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_2(struct nfp_net_r_vector *VAR_0)
{
 struct sk_buff *VAR_1;

 while ((VAR_1 = FUNC_0(&VAR_0->queue)))
  if (FUNC_1(VAR_0->nfp_net, VAR_0, VAR_1, 1))
   return;
}
