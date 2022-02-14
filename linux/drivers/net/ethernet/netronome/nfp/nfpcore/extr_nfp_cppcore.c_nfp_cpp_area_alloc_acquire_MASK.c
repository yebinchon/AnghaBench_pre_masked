
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_cpp_area {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 scalar_t__ FUNC_0 (struct nfp_cpp_area*) ;
 struct nfp_cpp_area* FUNC_1 (struct nfp_cpp*,int ,char const*,unsigned long long,unsigned long) ;
 int FUNC_2 (struct nfp_cpp_area*) ;

struct nfp_cpp_area *
FUNC_3(struct nfp_cpp *VAR_0, const char *VAR_1, u32 VAR_2,
      unsigned long long VAR_3, unsigned long VAR_4)
{
 struct nfp_cpp_area *VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_1, VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 return VAR_5;
}
