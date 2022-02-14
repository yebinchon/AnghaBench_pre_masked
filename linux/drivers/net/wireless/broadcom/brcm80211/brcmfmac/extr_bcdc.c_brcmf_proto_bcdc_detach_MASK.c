
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_pub {TYPE_1__* proto; } ;
struct brcmf_bcdc {int fws; } ;
struct TYPE_2__ {struct brcmf_bcdc* pd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct brcmf_bcdc*) ;

void FUNC_2(struct brcmf_pub *VAR_0)
{
 struct brcmf_bcdc *VAR_1 = VAR_0->proto->pd;

 VAR_0->proto->pd = ((void*)0);
 FUNC_0(VAR_1->fws);
 FUNC_1(VAR_1);
}
