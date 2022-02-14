
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_cpp_area {int dummy; } ;
struct nfp6000_area_priv {int refcnt; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nfp6000_area_priv* FUNC_3 (struct nfp_cpp_area*) ;

__attribute__((used)) static int FUNC_4(struct nfp_cpp_area *VAR_0)
{
 struct nfp6000_area_priv *VAR_1 = FUNC_3(VAR_0);

 if (FUNC_0(!FUNC_2(&VAR_1->refcnt)))
  return 0;

 return FUNC_1(&VAR_1->refcnt);
}
