
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_rtsym_table {int num; struct nfp_rtsym const* symtab; } ;
struct nfp_rtsym {int dummy; } ;



const struct nfp_rtsym *FUNC_0(struct nfp_rtsym_table *VAR_0, int VAR_1)
{
 if (!VAR_0)
  return ((void*)0);
 if (VAR_1 >= VAR_0->num)
  return ((void*)0);

 return &VAR_0->symtab[VAR_1];
}
