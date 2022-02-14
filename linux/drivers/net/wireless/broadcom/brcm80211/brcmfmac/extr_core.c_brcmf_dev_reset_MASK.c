
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct brcmf_pub {scalar_t__* iflist; } ;
struct brcmf_bus {struct brcmf_pub* drvr; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 struct brcmf_bus* FUNC_1 (struct device*) ;

void FUNC_2(struct device *VAR_1)
{
 struct brcmf_bus *VAR_2 = FUNC_1(VAR_1);
 struct brcmf_pub *VAR_3 = VAR_2->drvr;

 if (VAR_3 == ((void*)0))
  return;

 if (VAR_3->iflist[0])
  FUNC_0(VAR_3->iflist[0], VAR_0, 1);
}
