
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_bus {struct brcmf_pub* drvr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_pub*,int) ;
 struct brcmf_bus* FUNC_2 (struct device*) ;

void FUNC_3(struct device *VAR_1, bool VAR_2)
{
 struct brcmf_bus *VAR_3 = FUNC_2(VAR_1);
 struct brcmf_pub *VAR_4 = VAR_3->drvr;

 FUNC_0(VAR_0, "Enter\n");

 FUNC_1(VAR_4, VAR_2);
}
