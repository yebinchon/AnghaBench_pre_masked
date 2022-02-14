
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcmf_if {TYPE_2__* drvr; } ;
struct TYPE_3__ {int p2pdev_setup_ongoing; } ;
struct TYPE_4__ {TYPE_1__ fweh; } ;



void FUNC_0(struct brcmf_if *VAR_0, bool VAR_1)
{
 VAR_0->drvr->fweh.p2pdev_setup_ongoing = VAR_1;
}
