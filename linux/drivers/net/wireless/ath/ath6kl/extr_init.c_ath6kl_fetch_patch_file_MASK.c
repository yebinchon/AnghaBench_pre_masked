
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* patch; char* dir; } ;
struct TYPE_3__ {TYPE_2__ fw; } ;
struct ath6kl {int fw_patch_len; int * fw_patch; TYPE_1__ hw; } ;
typedef int filename ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct ath6kl*,char*,int **,int *) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct ath6kl *VAR_0)
{
 char VAR_1[100];
 int VAR_2;

 if (VAR_0->fw_patch != ((void*)0))
  return 0;

 if (VAR_0->hw.fw.patch == ((void*)0))
  return 0;

 FUNC_2(VAR_1, sizeof(VAR_1), "%s/%s",
   VAR_0->hw.fw.dir, VAR_0->hw.fw.patch);

 VAR_2 = FUNC_1(VAR_0, VAR_1, &VAR_0->fw_patch,
       &VAR_0->fw_patch_len);
 if (VAR_2) {
  FUNC_0("Failed to get patch file %s: %d\n",
      VAR_1, VAR_2);
  return VAR_2;
 }

 return 0;
}
