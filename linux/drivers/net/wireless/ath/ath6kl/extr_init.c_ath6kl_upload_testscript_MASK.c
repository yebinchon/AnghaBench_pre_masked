
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ target_ver; } ;
struct TYPE_4__ {int testscript_addr; } ;
struct ath6kl {int testmode; TYPE_1__ version; int fw_testscript_len; int * fw_testscript; TYPE_2__ hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath6kl*,int,int *,int ) ;
 int FUNC_1 (struct ath6kl*,int ,int) ;
 int FUNC_2 (int ,char*,int,int ) ;
 int FUNC_3 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct ath6kl *VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 if (VAR_6->testmode != 2)
  return 0;

 if (VAR_6->fw_testscript == ((void*)0))
  return 0;

 VAR_7 = VAR_6->hw.testscript_addr;

 FUNC_2(VAR_2, "writing testscript to 0x%x (%zd B)\n",
     VAR_7, VAR_6->fw_testscript_len);

 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_6->fw_testscript,
  VAR_6->fw_testscript_len);
 if (VAR_8) {
  FUNC_3("Failed to write testscript file: %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_1(VAR_6, VAR_4, VAR_7);

 if ((VAR_6->version.target_ver != VAR_0) &&
     (VAR_6->version.target_ver != VAR_1))
  FUNC_1(VAR_6, VAR_3, 4096);

 FUNC_1(VAR_6, VAR_5, 1);

 return 0;
}
