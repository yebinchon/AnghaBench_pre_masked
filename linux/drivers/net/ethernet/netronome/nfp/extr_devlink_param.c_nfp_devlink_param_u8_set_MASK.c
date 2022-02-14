
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct nfp_pf {int cpp; } ;
struct nfp_nsp {int dummy; } ;
struct nfp_devlink_param_u8_arg {char* hwinfo_name; int* dl_to_hi; } ;
struct TYPE_2__ {size_t vu8; } ;
struct devlink_param_gset_ctx {TYPE_1__ val; } ;
struct devlink {int dummy; } ;
typedef int hwinfo ;


 size_t FUNC_0 (struct nfp_devlink_param_u8_arg*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct nfp_nsp*) ;
 int FUNC_2 (struct nfp_nsp*) ;
 struct nfp_pf* FUNC_3 (struct devlink*) ;
 struct nfp_devlink_param_u8_arg* VAR_1 ;
 int FUNC_4 (struct nfp_nsp*) ;
 int FUNC_5 (struct nfp_nsp*,char*,int) ;
 struct nfp_nsp* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*,int,char*,char*,int) ;

__attribute__((used)) static int
FUNC_9(struct devlink *VAR_2, u32 VAR_3,
    struct devlink_param_gset_ctx *VAR_4)
{
 const struct nfp_devlink_param_u8_arg *VAR_5;
 struct nfp_pf *VAR_6 = FUNC_3(VAR_2);
 struct nfp_nsp *VAR_7;
 char VAR_8[32];
 int VAR_9;

 if (VAR_3 >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_5 = &VAR_1[VAR_3];

 VAR_7 = FUNC_6(VAR_6->cpp);
 if (FUNC_1(VAR_7)) {
  VAR_9 = FUNC_2(VAR_7);
  FUNC_7(VAR_6->cpp, "can't access NSP: %d\n", VAR_9);
  return VAR_9;
 }


 FUNC_8(VAR_8, sizeof(VAR_8), "%s=%u",
   VAR_5->hwinfo_name, VAR_5->dl_to_hi[VAR_4->val.vu8]);
 VAR_9 = FUNC_5(VAR_7, VAR_8, sizeof(VAR_8));
 if (VAR_9) {
  FUNC_7(VAR_6->cpp, "HWinfo set failed: %d\n", VAR_9);
  goto exit_close_nsp;
 }

exit_close_nsp:
 FUNC_4(VAR_7);
 return VAR_9;
}
