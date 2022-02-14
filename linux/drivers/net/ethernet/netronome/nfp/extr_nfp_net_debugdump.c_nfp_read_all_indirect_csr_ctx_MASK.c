
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cpp_id; } ;
struct nfp_dumpspec_csr {TYPE_1__ cpp; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_cpp*,int ,int,int,int,void*) ;

__attribute__((used)) static int
FUNC_1(struct nfp_cpp *VAR_1,
         struct nfp_dumpspec_csr *VAR_2, u32 VAR_3,
         u32 VAR_4, void *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = FUNC_0(VAR_1, VAR_2->cpp.cpp_id, VAR_3,
         VAR_4, VAR_6, VAR_5 + VAR_6 * VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
