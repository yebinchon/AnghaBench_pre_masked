
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nphy_iq_comp {int b1; int a1; int b0; int a0; } ;
struct brcms_phy {TYPE_1__* sh; } ;
struct TYPE_2__ {int physhim; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (struct brcms_phy*,int,int,int,int,struct nphy_iq_comp*) ;

__attribute__((used)) static void FUNC_2(struct brcms_phy *VAR_1)
{
 struct nphy_iq_comp VAR_2;

 FUNC_1(VAR_1, 15, 4, 0x50, 16, &VAR_2);

 FUNC_0(VAR_1->sh->physhim, VAR_0, VAR_2.a0);
 FUNC_0(VAR_1->sh->physhim, VAR_0 + 2, VAR_2.b0);
 FUNC_0(VAR_1->sh->physhim, VAR_0 + 4, VAR_2.a1);
 FUNC_0(VAR_1->sh->physhim, VAR_0 + 6, VAR_2.b1);
}
