
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dataset_patch_addr; } ;
struct ath6kl {int fw_patch_len; int * fw_patch; TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath6kl*,int ,int *,int ) ;
 int FUNC_1 (struct ath6kl*,int ,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct ath6kl *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 if (VAR_2->fw_patch == ((void*)0))
  return 0;

 VAR_3 = VAR_2->hw.dataset_patch_addr;

 FUNC_2(VAR_0, "writing patch to 0x%x (%zd B)\n",
     VAR_3, VAR_2->fw_patch_len);

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_2->fw_patch, VAR_2->fw_patch_len);
 if (VAR_4) {
  FUNC_3("Failed to write patch file: %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_1(VAR_2, VAR_1, VAR_3);

 return 0;
}
