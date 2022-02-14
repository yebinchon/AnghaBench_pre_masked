
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfp_pf {int mip; } ;
struct nfp_dump_tl {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct nfp_pf *VAR_0)
{
 u32 VAR_1 = FUNC_2(FUNC_1(VAR_0->mip));

 return sizeof(struct nfp_dump_tl) + FUNC_0(VAR_1 + 1);
}
