
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_pub {int feat_flags; int fwver; } ;
struct brcmf_feat_fwfeat {int feat_flags; int fwid; } ;


 int FUNC_0 (struct brcmf_feat_fwfeat*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 struct brcmf_feat_fwfeat* VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct brcmf_pub *VAR_4)
{
 const struct brcmf_feat_fwfeat *VAR_5;
 u32 VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  VAR_5 = &VAR_2[VAR_7];
  if (!FUNC_3(VAR_5->fwid, VAR_4->fwver)) {
   VAR_6 = VAR_5->feat_flags;
   break;
  }
 }

 if (!VAR_6)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  if (VAR_6 & FUNC_1(VAR_7))
   FUNC_2(VAR_1, "enabling firmware feature: %s\n",
      VAR_3[VAR_7]);
 VAR_4->feat_flags |= VAR_6;
}
