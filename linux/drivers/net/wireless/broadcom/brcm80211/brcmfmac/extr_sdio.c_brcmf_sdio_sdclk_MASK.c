
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_sdio {int clkstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct brcmf_sdio *VAR_3, bool VAR_4)
{
 FUNC_0(VAR_2, "Enter\n");

 if (VAR_4)
  VAR_3->clkstate = VAR_1;
 else
  VAR_3->clkstate = VAR_0;

 return 0;
}
