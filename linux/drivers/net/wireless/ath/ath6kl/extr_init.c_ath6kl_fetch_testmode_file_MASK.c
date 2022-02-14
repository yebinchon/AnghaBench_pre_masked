
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* utf; char* dir; char* tcmd; } ;
struct TYPE_4__ {TYPE_1__ fw; } ;
struct ath6kl {int testmode; int fw_len; int fw; int flag; TYPE_2__ hw; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (struct ath6kl*,char*,int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct ath6kl *VAR_3)
{
 char VAR_4[100];
 int VAR_5;

 if (VAR_3->testmode == 0)
  return 0;

 FUNC_0(VAR_0, "testmode %d\n", VAR_3->testmode);

 if (VAR_3->testmode == 2) {
  if (VAR_3->hw.fw.utf == ((void*)0)) {
   FUNC_3("testmode 2 not supported\n");
   return -VAR_1;
  }

  FUNC_5(VAR_4, sizeof(VAR_4), "%s/%s",
    VAR_3->hw.fw.dir, VAR_3->hw.fw.utf);
 } else {
  if (VAR_3->hw.fw.tcmd == ((void*)0)) {
   FUNC_3("testmode 1 not supported\n");
   return -VAR_1;
  }

  FUNC_5(VAR_4, sizeof(VAR_4), "%s/%s",
    VAR_3->hw.fw.dir, VAR_3->hw.fw.tcmd);
 }

 FUNC_4(VAR_2, &VAR_3->flag);

 VAR_5 = FUNC_2(VAR_3, VAR_4, &VAR_3->fw, &VAR_3->fw_len);
 if (VAR_5) {
  FUNC_1("Failed to get testmode %d firmware file %s: %d\n",
      VAR_3->testmode, VAR_4, VAR_5);
  return VAR_5;
 }

 return 0;
}
