
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct nfp_mip {scalar_t__* name; } const nfp_mip ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_mip const*) ;
 struct nfp_mip const* FUNC_1 (int,int ) ;
 int FUNC_2 (struct nfp_cpp*,struct nfp_mip const*) ;

const struct nfp_mip *FUNC_3(struct nfp_cpp *VAR_1)
{
 struct nfp_mip *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 VAR_2->name[sizeof(VAR_2->name) - 1] = 0;

 return VAR_2;
}
