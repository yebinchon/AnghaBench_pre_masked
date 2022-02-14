
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pub {int dummy; } ;
struct brcmf_if {int vif; struct brcmf_pub* drvr; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (struct brcmf_if*,char*,int) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct brcmf_if *VAR_1, int VAR_2)
{
 struct brcmf_pub *VAR_3 = VAR_1->drvr;
 s32 VAR_4 = 0;

 if (FUNC_3(VAR_1->vif)) {
  VAR_4 = FUNC_2(VAR_1, "mpc", VAR_2);
  if (VAR_4) {
   FUNC_0(VAR_3, "fail to set mpc\n");
   return;
  }
  FUNC_1(VAR_0, "MPC : %d\n", VAR_2);
 }
}
