
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_dumpspec_cpp_isl_id {int island; int token; int target; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct nfp_cpp*,int,int,void*,int) ;
 int FUNC_2 (struct nfp_cpp*,int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nfp_dumpspec_cpp_isl_id*) ;

__attribute__((used)) static int
FUNC_5(struct nfp_cpp *VAR_2,
        struct nfp_dumpspec_cpp_isl_id VAR_3, u32 VAR_4,
        u32 VAR_5, u32 VAR_6, void *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_4);
 VAR_9 = FUNC_0(VAR_3.target,
       VAR_1,
       VAR_3.token, VAR_3.island);
 VAR_10 = FUNC_2(VAR_2, VAR_9, VAR_8, VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_4(&VAR_3);
 VAR_10 = FUNC_1(VAR_2, VAR_9, VAR_8, VAR_7, VAR_5);
 if (VAR_10 != VAR_5)
  return VAR_10 < 0 ? VAR_10 : -VAR_0;

 VAR_10 = FUNC_1(VAR_2, VAR_9, VAR_4, VAR_7, VAR_5);
 if (VAR_10 != VAR_5)
  return VAR_10 < 0 ? VAR_10 : -VAR_0;

 return 0;
}
