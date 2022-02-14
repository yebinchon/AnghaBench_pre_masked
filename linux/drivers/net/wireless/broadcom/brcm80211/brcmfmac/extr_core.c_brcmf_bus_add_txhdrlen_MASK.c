
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct device {int dummy; } ;
struct brcmf_pub {int hdrlen; } ;
struct brcmf_bus {struct brcmf_pub* drvr; } ;


 struct brcmf_bus* FUNC_0 (struct device*) ;

void FUNC_1(struct device *VAR_0, uint VAR_1)
{
 struct brcmf_bus *VAR_2 = FUNC_0(VAR_0);
 struct brcmf_pub *VAR_3 = VAR_2->drvr;

 if (VAR_3) {
  VAR_3->hdrlen += VAR_1;
 }
}
