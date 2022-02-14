
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nfp_nffw_info_data {int dummy; } ;
struct nfp_nffw_info {int res; struct nfp_cpp* cpp; struct nfp_nffw_info_data fwinf; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfp_nffw_info* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct nfp_nffw_info*) ;
 struct nfp_nffw_info* FUNC_3 (int,int ) ;
 int FUNC_4 (struct nfp_nffw_info_data*) ;
 scalar_t__ FUNC_5 (struct nfp_nffw_info_data*) ;
 int FUNC_6 (struct nfp_cpp*,int ,int ,struct nfp_nffw_info_data*,int) ;
 int FUNC_7 (struct nfp_cpp*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

struct nfp_nffw_info *FUNC_12(struct nfp_cpp *VAR_5)
{
 struct nfp_nffw_info_data *VAR_6;
 struct nfp_nffw_info *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_7->res = FUNC_7(VAR_5, VAR_4);
 if (FUNC_1(VAR_7->res))
  goto err_free;

 VAR_6 = &VAR_7->fwinf;

 if (sizeof(*VAR_6) > FUNC_11(VAR_7->res))
  goto err_release;

 VAR_9 = FUNC_6(VAR_5, FUNC_9(VAR_7->res),
      FUNC_8(VAR_7->res),
      VAR_6, sizeof(*VAR_6));
 if (VAR_9 < (int)sizeof(*VAR_6))
  goto err_release;

 if (!FUNC_4(VAR_6))
  goto err_release;

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8 > VAR_3)
  goto err_release;

 VAR_7->cpp = VAR_5;
 return VAR_7;

err_release:
 FUNC_10(VAR_7->res);
err_free:
 FUNC_2(VAR_7);
 return FUNC_0(-VAR_0);
}
