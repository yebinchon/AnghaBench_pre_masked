
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_nffw_info {int fwinf; } ;
struct nffw_fwinfo {int dummy; } ;


 scalar_t__ FUNC_0 (struct nffw_fwinfo*) ;
 unsigned int FUNC_1 (int *,struct nffw_fwinfo**) ;

__attribute__((used)) static struct nffw_fwinfo *FUNC_2(struct nfp_nffw_info *VAR_0)
{
 struct nffw_fwinfo *VAR_1;
 unsigned int VAR_2, VAR_3;

 VAR_2 = FUNC_1(&VAR_0->fwinf, &VAR_1);
 if (!VAR_2)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (FUNC_0(&VAR_1[VAR_3]))
   return &VAR_1[VAR_3];

 return ((void*)0);
}
