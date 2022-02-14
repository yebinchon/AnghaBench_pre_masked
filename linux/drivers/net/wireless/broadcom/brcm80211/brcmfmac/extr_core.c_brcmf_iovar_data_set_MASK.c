
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_bus {TYPE_1__* drvr; } ;
typedef int s32 ;
struct TYPE_2__ {struct brcmf_if** iflist; } ;


 int FUNC_0 (struct brcmf_if*,char*,void*,int ) ;
 struct brcmf_bus* FUNC_1 (struct device*) ;

s32 FUNC_2(struct device *VAR_0, char *VAR_1, void *VAR_2, u32 VAR_3)
{
 struct brcmf_bus *VAR_4 = FUNC_1(VAR_0);
 struct brcmf_if *VAR_5 = VAR_4->drvr->iflist[0];

 return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3);
}
