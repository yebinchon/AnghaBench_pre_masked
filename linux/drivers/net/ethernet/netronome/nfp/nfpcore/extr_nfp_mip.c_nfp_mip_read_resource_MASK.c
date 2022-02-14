
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nfp_nffw_info {int dummy; } ;
struct nfp_mip {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 scalar_t__ FUNC_0 (struct nfp_nffw_info*) ;
 int FUNC_1 (struct nfp_nffw_info*) ;
 int FUNC_2 (struct nfp_cpp*,int ,int ,struct nfp_mip*) ;
 int FUNC_3 (struct nfp_nffw_info*) ;
 int FUNC_4 (struct nfp_nffw_info*,int *,int *) ;
 struct nfp_nffw_info* FUNC_5 (struct nfp_cpp*) ;

__attribute__((used)) static int FUNC_6(struct nfp_cpp *VAR_0, struct nfp_mip *VAR_1)
{
 struct nfp_nffw_info *VAR_2;
 u32 VAR_3;
 u64 VAR_4;
 int VAR_5;

 VAR_2 = FUNC_5(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_5 = FUNC_4(VAR_2, &VAR_3, &VAR_4);
 if (VAR_5)
  goto exit_close_nffw;

 VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_4, VAR_1);
exit_close_nffw:
 FUNC_3(VAR_2);
 return VAR_5;
}
