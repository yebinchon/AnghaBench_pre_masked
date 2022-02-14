
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_hwinfo {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 int FUNC_0 (struct nfp_cpp*,struct nfp_hwinfo*,size_t) ;
 struct nfp_hwinfo* FUNC_1 (struct nfp_cpp*,size_t*) ;
 int FUNC_2 (struct nfp_hwinfo*) ;

struct nfp_hwinfo *FUNC_3(struct nfp_cpp *VAR_0)
{
 struct nfp_hwinfo *VAR_1;
 size_t VAR_2 = 0;
 int VAR_3;

 VAR_1 = FUNC_1(VAR_0, &VAR_2);
 if (!VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
