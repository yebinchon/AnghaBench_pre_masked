
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_pub {TYPE_1__* proto; } ;
struct brcmf_fws_info {int dummy; } ;
struct brcmf_bcdc {struct brcmf_fws_info* fws; } ;
struct TYPE_2__ {struct brcmf_bcdc* pd; } ;


 scalar_t__ FUNC_0 (struct brcmf_fws_info*) ;
 int FUNC_1 (struct brcmf_fws_info*) ;
 struct brcmf_fws_info* FUNC_2 (struct brcmf_pub*) ;

__attribute__((used)) static int
FUNC_3(struct brcmf_pub *VAR_0)
{
 struct brcmf_bcdc *VAR_1 = VAR_0->proto->pd;
 struct brcmf_fws_info *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->fws = VAR_2;
 return 0;
}
