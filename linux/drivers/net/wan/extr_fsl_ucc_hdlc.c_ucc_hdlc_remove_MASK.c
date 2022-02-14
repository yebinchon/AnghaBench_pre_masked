
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucc_hdlc_private {TYPE_1__* utdm; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int * siram; int * si_regs; } ;


 struct ucc_hdlc_private* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ucc_hdlc_private*) ;
 int FUNC_4 (struct ucc_hdlc_private*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct ucc_hdlc_private *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_4(VAR_1);

 if (VAR_1->utdm->si_regs) {
  FUNC_2(VAR_1->utdm->si_regs);
  VAR_1->utdm->si_regs = ((void*)0);
 }

 if (VAR_1->utdm->siram) {
  FUNC_2(VAR_1->utdm->siram);
  VAR_1->utdm->siram = ((void*)0);
 }
 FUNC_3(VAR_1);

 FUNC_1(&VAR_0->dev, "UCC based hdlc module removed\n");

 return 0;
}
