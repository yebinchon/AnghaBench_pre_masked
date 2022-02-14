
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfp_net_r_vector {int lock; } ;
struct nfp_net {struct nfp_net_r_vector* r_vecs; } ;


 int FUNC_0 (struct nfp_net*,struct nfp_net_r_vector*,struct sk_buff*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct nfp_net *VAR_0, struct sk_buff *VAR_1)
{
 struct nfp_net_r_vector *VAR_2 = &VAR_0->r_vecs[0];
 bool VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1, 0);
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
