
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct brcmf_pub {int feat_flags; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef enum brcmf_feat_id { ____Placeholder_brcmf_feat_id } brcmf_feat_id ;
typedef int caps ;
struct TYPE_3__ {int feature; int fwcap_id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct brcmf_pub*,char*,int) ;
 int FUNC_3 (int ,char*,char*) ;
 char** VAR_2 ;
 int FUNC_4 (struct brcmf_if*,char*,char*,int) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_5 (char*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct brcmf_if *VAR_4)
{
 struct brcmf_pub *VAR_5 = VAR_4->drvr;
 char VAR_6[VAR_1];
 enum brcmf_feat_id VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_4(VAR_4, "cap", VAR_6, sizeof(VAR_6));
 if (VAR_9) {
  FUNC_2(VAR_5, "could not get firmware cap (%d)\n", VAR_9);
  return;
 }

 FUNC_3(VAR_0, "[ %s]\n", VAR_6);

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  if (FUNC_5(VAR_6, VAR_3[VAR_8].fwcap_id, sizeof(VAR_6))) {
   VAR_7 = VAR_3[VAR_8].feature;
   FUNC_3(VAR_0, "enabling feature: %s\n",
      VAR_2[VAR_7]);
   VAR_4->drvr->feat_flags |= FUNC_1(VAR_7);
  }
 }
}
