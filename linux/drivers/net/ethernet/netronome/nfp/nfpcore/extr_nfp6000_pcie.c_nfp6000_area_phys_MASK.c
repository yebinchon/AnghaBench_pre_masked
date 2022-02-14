
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_cpp_area {int dummy; } ;
struct nfp6000_area_priv {int phys; } ;
typedef int phys_addr_t ;


 struct nfp6000_area_priv* FUNC_0 (struct nfp_cpp_area*) ;

__attribute__((used)) static phys_addr_t FUNC_1(struct nfp_cpp_area *VAR_0)
{
 struct nfp6000_area_priv *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->phys;
}
