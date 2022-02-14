
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_if {int dummy; } ;
struct brcmf_btcoex_info {int saved_regs_part2; int reg71; int reg65; int reg64; int reg51; int reg50; TYPE_1__* cfg; } ;
struct TYPE_2__ {int pub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct brcmf_if*,int,int *) ;
 int FUNC_1 (struct brcmf_if*,int,int ) ;
 int FUNC_2 (int ,char*,...) ;
 struct brcmf_if* FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct brcmf_btcoex_info *VAR_6,
        bool VAR_7)
{
 struct brcmf_if *VAR_8 = FUNC_3(VAR_6->cfg->pub, 0);

 if (VAR_7 && !VAR_6->saved_regs_part2) {





  FUNC_2(VAR_5, "new SCO/eSCO coex algo {save & override}\n");
  FUNC_0(VAR_8, 50, &VAR_6->reg50);
  FUNC_0(VAR_8, 51, &VAR_6->reg51);
  FUNC_0(VAR_8, 64, &VAR_6->reg64);
  FUNC_0(VAR_8, 65, &VAR_6->reg65);
  FUNC_0(VAR_8, 71, &VAR_6->reg71);

  VAR_6->saved_regs_part2 = 1;
  FUNC_2(VAR_5,
     "saved bt_params[50,51,64,65,71]: 0x%x 0x%x 0x%x 0x%x 0x%x\n",
     VAR_6->reg50, VAR_6->reg51, VAR_6->reg64,
     VAR_6->reg65, VAR_6->reg71);


  FUNC_1(VAR_8, 50, VAR_0);
  FUNC_1(VAR_8, 51, VAR_1);
  FUNC_1(VAR_8, 64, VAR_2);
  FUNC_1(VAR_8, 65, VAR_3);
  FUNC_1(VAR_8, 71, VAR_4);

 } else if (VAR_6->saved_regs_part2) {

  FUNC_2(VAR_5, "Do new SCO/eSCO coex algo {restore}\n");
  FUNC_1(VAR_8, 50, VAR_6->reg50);
  FUNC_1(VAR_8, 51, VAR_6->reg51);
  FUNC_1(VAR_8, 64, VAR_6->reg64);
  FUNC_1(VAR_8, 65, VAR_6->reg65);
  FUNC_1(VAR_8, 71, VAR_6->reg71);

  FUNC_2(VAR_5,
     "restored bt_params[50,51,64,65,71]: 0x%x 0x%x 0x%x 0x%x 0x%x\n",
     VAR_6->reg50, VAR_6->reg51, VAR_6->reg64,
     VAR_6->reg65, VAR_6->reg71);

  VAR_6->saved_regs_part2 = 0;
 } else {
  FUNC_2(VAR_5, "attempted to restore not saved BTCOEX params\n");
 }
}
