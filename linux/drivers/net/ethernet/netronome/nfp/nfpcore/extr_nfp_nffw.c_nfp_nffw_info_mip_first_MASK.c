
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nfp_nffw_info {int cpp; } ;
struct nffw_fwinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nffw_fwinfo*) ;
 scalar_t__ FUNC_1 (struct nffw_fwinfo*) ;
 int FUNC_2 (struct nffw_fwinfo*) ;
 int FUNC_3 (int ) ;
 struct nffw_fwinfo* FUNC_4 (struct nfp_nffw_info*) ;

int FUNC_5(struct nfp_nffw_info *VAR_3, u32 *VAR_4, u64 *VAR_5)
{
 struct nffw_fwinfo *VAR_6;

 VAR_6 = FUNC_4(VAR_3);
 if (!VAR_6)
  return -VAR_0;

 *VAR_4 = FUNC_0(VAR_6);
 *VAR_5 = FUNC_2(VAR_6);

 if (FUNC_1(VAR_6)) {
  int VAR_7 = FUNC_3(VAR_3->cpp);

  *VAR_5 &= ~(VAR_2 << VAR_7);
  *VAR_5 |= VAR_1 << VAR_7;
 }

 return 0;
}
