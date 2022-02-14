
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_flower_non_repr_priv {int list; scalar_t__ ref_count; } ;


 int FUNC_0 (struct nfp_flower_non_repr_priv*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nfp_flower_non_repr_priv *VAR_0)
{
 if (--VAR_0->ref_count)
  return;

 FUNC_1(&VAR_0->list);
 FUNC_0(VAR_0);
}
