
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_cpp_area {int dummy; } ;
struct nfp6000_area_priv {int refcnt; } ;


 int FUNC_0 (int *) ;
 struct nfp6000_area_priv* FUNC_1 (struct nfp_cpp_area*) ;

__attribute__((used)) static void FUNC_2(struct nfp_cpp_area *VAR_0)
{
 struct nfp6000_area_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->refcnt);
}
