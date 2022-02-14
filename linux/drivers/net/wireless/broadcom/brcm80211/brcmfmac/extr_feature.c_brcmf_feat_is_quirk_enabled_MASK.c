
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_if {TYPE_1__* drvr; } ;
typedef enum brcmf_feat_quirk { ____Placeholder_brcmf_feat_quirk } brcmf_feat_quirk ;
struct TYPE_2__ {int chip_quirks; } ;


 int FUNC_0 (int) ;

bool FUNC_1(struct brcmf_if *VAR_0,
     enum brcmf_feat_quirk VAR_1)
{
 return (VAR_0->drvr->chip_quirks & FUNC_0(VAR_1));
}
