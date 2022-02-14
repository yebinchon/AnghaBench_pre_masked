
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_rtsym_table {int dummy; } ;
struct nfp_mip {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 struct nfp_rtsym_table* FUNC_0 (struct nfp_cpp*,struct nfp_mip const*) ;
 int FUNC_1 (struct nfp_mip const*) ;
 struct nfp_mip* FUNC_2 (struct nfp_cpp*) ;

struct nfp_rtsym_table *FUNC_3(struct nfp_cpp *VAR_0)
{
 struct nfp_rtsym_table *VAR_1;
 const struct nfp_mip *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 VAR_1 = FUNC_0(VAR_0, VAR_2);
 FUNC_1(VAR_2);

 return VAR_1;
}
