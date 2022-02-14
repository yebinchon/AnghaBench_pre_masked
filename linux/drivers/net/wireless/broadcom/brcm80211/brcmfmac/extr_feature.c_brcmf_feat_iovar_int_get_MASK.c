
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_if {int fwil_fwerr; TYPE_1__* drvr; } ;
typedef enum brcmf_feat_id { ____Placeholder_brcmf_feat_id } brcmf_feat_id ;
struct TYPE_2__ {int feat_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,...) ;
 int * VAR_2 ;
 int FUNC_2 (struct brcmf_if*,char*,int *) ;

__attribute__((used)) static void FUNC_3(struct brcmf_if *VAR_3,
         enum brcmf_feat_id VAR_4, char *VAR_5)
{
 u32 VAR_6;
 int VAR_7;


 VAR_3->fwil_fwerr = 1;

 VAR_7 = FUNC_2(VAR_3, VAR_5, &VAR_6);
 if (VAR_7 == 0) {
  FUNC_1(VAR_0, "enabling feature: %s\n", VAR_2[VAR_4]);
  VAR_3->drvr->feat_flags |= FUNC_0(VAR_4);
 } else {
  FUNC_1(VAR_1, "%s feature check failed: %d\n",
     VAR_2[VAR_4], VAR_7);
 }

 VAR_3->fwil_fwerr = 0;
}
