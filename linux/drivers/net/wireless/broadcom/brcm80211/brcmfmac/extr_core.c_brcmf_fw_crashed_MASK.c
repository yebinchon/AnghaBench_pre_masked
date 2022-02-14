
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct brcmf_pub {int bus_reset; } ;
struct brcmf_bus {struct brcmf_pub* drvr; } ;


 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (struct device*) ;
 struct brcmf_bus* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct device *VAR_0)
{
 struct brcmf_bus *VAR_1 = FUNC_2(VAR_0);
 struct brcmf_pub *VAR_2 = VAR_1->drvr;

 FUNC_0(VAR_2, "Firmware has halted or crashed\n");

 FUNC_1(VAR_0);

 FUNC_3(&VAR_2->bus_reset);
}
