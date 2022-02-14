
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* testscript; char* dir; } ;
struct TYPE_4__ {TYPE_1__ fw; } ;
struct ath6kl {int testmode; int fw_testscript_len; int * fw_testscript; TYPE_2__ hw; } ;
typedef int filename ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct ath6kl*,char*,int **,int *) ;
 int FUNC_2 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct ath6kl *VAR_0)
{
 char VAR_1[100];
 int VAR_2;

 if (VAR_0->testmode != 2)
  return 0;

 if (VAR_0->fw_testscript != ((void*)0))
  return 0;

 if (VAR_0->hw.fw.testscript == ((void*)0))
  return 0;

 FUNC_2(VAR_1, sizeof(VAR_1), "%s/%s",
   VAR_0->hw.fw.dir, VAR_0->hw.fw.testscript);

 VAR_2 = FUNC_1(VAR_0, VAR_1, &VAR_0->fw_testscript,
    &VAR_0->fw_testscript_len);
 if (VAR_2) {
  FUNC_0("Failed to get testscript file %s: %d\n",
      VAR_1, VAR_2);
  return VAR_2;
 }

 return 0;
}
