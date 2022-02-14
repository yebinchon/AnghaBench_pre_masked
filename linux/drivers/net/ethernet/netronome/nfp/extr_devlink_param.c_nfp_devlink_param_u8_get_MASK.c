
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct nfp_pf {int cpp; } ;
struct nfp_nsp {int dummy; } ;
struct nfp_devlink_param_u8_arg {char* hwinfo_name; long max_hi_val; int invalid_dl_val; int* hi_to_dl; int default_hi_val; } ;
struct TYPE_2__ {int vu8; } ;
struct devlink_param_gset_ctx {TYPE_1__ val; } ;
struct devlink {int dummy; } ;
typedef int hwinfo ;


 size_t FUNC_0 (struct nfp_devlink_param_u8_arg*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct nfp_nsp*) ;
 int FUNC_2 (struct nfp_nsp*) ;
 struct nfp_pf* FUNC_3 (struct devlink*) ;
 int FUNC_4 (char*,int ,long*) ;
 struct nfp_devlink_param_u8_arg* VAR_1 ;
 int FUNC_5 (struct nfp_nsp*) ;
 int FUNC_6 (struct nfp_nsp*,char*,int,int ) ;
 struct nfp_nsp* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*,int,char*) ;

__attribute__((used)) static int
FUNC_10(struct devlink *VAR_2, u32 VAR_3,
    struct devlink_param_gset_ctx *VAR_4)
{
 const struct nfp_devlink_param_u8_arg *VAR_5;
 struct nfp_pf *VAR_6 = FUNC_3(VAR_2);
 struct nfp_nsp *VAR_7;
 char VAR_8[32];
 long VAR_9;
 int VAR_10;

 if (VAR_3 >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_5 = &VAR_1[VAR_3];

 VAR_7 = FUNC_7(VAR_6->cpp);
 if (FUNC_1(VAR_7)) {
  VAR_10 = FUNC_2(VAR_7);
  FUNC_8(VAR_6->cpp, "can't access NSP: %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_9(VAR_8, sizeof(VAR_8), VAR_5->hwinfo_name);
 VAR_10 = FUNC_6(VAR_7, VAR_8, sizeof(VAR_8),
          VAR_5->default_hi_val);
 if (VAR_10) {
  FUNC_8(VAR_6->cpp, "HWinfo lookup failed: %d\n", VAR_10);
  goto exit_close_nsp;
 }

 VAR_10 = FUNC_4(VAR_8, 0, &VAR_9);
 if (VAR_10 || VAR_9 < 0 || VAR_9 > VAR_5->max_hi_val) {
  FUNC_8(VAR_6->cpp, "HWinfo '%s' value %li invalid\n",
    VAR_5->hwinfo_name, VAR_9);

  if (VAR_5->invalid_dl_val >= 0)
   VAR_4->val.vu8 = VAR_5->invalid_dl_val;
  else
   VAR_10 = VAR_5->invalid_dl_val;

  goto exit_close_nsp;
 }

 VAR_4->val.vu8 = VAR_5->hi_to_dl[VAR_9];

exit_close_nsp:
 FUNC_5(VAR_7);
 return VAR_10;
}
