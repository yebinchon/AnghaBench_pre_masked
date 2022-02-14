
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_if {int dummy; } ;
struct brcmf_btcoex_info {int saved_regs_part1; int reg68; int reg41; int reg66; TYPE_1__* vif; } ;
struct TYPE_2__ {struct brcmf_if* ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_if*,int,int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct brcmf_btcoex_info *VAR_1)
{
 struct brcmf_if *VAR_2 = VAR_1->vif->ifp;

 if (!VAR_1->saved_regs_part1) {

  FUNC_0(VAR_2, 66, &VAR_1->reg66);
  FUNC_0(VAR_2, 41, &VAR_1->reg41);
  FUNC_0(VAR_2, 68, &VAR_1->reg68);
  VAR_1->saved_regs_part1 = 1;
  FUNC_1(VAR_0,
     "saved btc_params regs (66,41,68) 0x%x 0x%x 0x%x\n",
     VAR_1->reg66, VAR_1->reg41,
     VAR_1->reg68);
 }
}
