
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_if {int fwil_fwerr; TYPE_1__* drvr; } ;
typedef enum brcmf_feat_id { ____Placeholder_brcmf_feat_id } brcmf_feat_id ;
struct TYPE_2__ {int feat_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,...) ;
 int * VAR_3 ;
 int FUNC_2 (struct brcmf_if*,char*,void const*,size_t) ;

__attribute__((used)) static void FUNC_3(struct brcmf_if *VAR_4,
          enum brcmf_feat_id VAR_5, char *VAR_6,
          const void *VAR_7, size_t VAR_8)
{
 int VAR_9;


 VAR_4->fwil_fwerr = 1;

 VAR_9 = FUNC_2(VAR_4, VAR_6, VAR_7, VAR_8);
 if (VAR_9 != -VAR_0) {
  FUNC_1(VAR_1, "enabling feature: %s\n", VAR_3[VAR_5]);
  VAR_4->drvr->feat_flags |= FUNC_0(VAR_5);
 } else {
  FUNC_1(VAR_2, "%s feature check failed: %d\n",
     VAR_3[VAR_5], VAR_9);
 }

 VAR_4->fwil_fwerr = 0;
}
