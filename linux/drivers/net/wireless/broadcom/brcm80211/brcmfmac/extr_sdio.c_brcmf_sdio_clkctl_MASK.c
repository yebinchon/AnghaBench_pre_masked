
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct brcmf_sdio {int clkstate; } ;





 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int const,int) ;
 int FUNC_2 (struct brcmf_sdio*,int,int) ;
 int FUNC_3 (struct brcmf_sdio*,int) ;

__attribute__((used)) static int FUNC_4(struct brcmf_sdio *VAR_1, uint VAR_2, bool VAR_3)
{




 FUNC_0(VAR_0, "Enter\n");


 if (VAR_1->clkstate == VAR_2)
  return 0;

 switch (VAR_2) {
 case 130:

  if (VAR_1->clkstate == 129)
   FUNC_3(VAR_1, 1);

  FUNC_2(VAR_1, 1, VAR_3);
  break;

 case 128:

  if (VAR_1->clkstate == 129)
   FUNC_3(VAR_1, 1);
  else if (VAR_1->clkstate == 130)
   FUNC_2(VAR_1, 0, 0);
  else
   FUNC_1("request for %d -> %d\n",
      VAR_1->clkstate, VAR_2);
  break;

 case 129:

  if (VAR_1->clkstate == 130)
   FUNC_2(VAR_1, 0, 0);

  FUNC_3(VAR_1, 0);
  break;
 }




 return 0;
}
