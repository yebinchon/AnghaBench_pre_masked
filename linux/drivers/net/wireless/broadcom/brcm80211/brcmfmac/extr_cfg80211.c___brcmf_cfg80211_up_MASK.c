
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct brcmf_if {TYPE_2__* drvr; TYPE_1__* vif; } ;
typedef int s32 ;
struct TYPE_4__ {int config; } ;
struct TYPE_3__ {int sme_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static s32 FUNC_2(struct brcmf_if *VAR_1)
{
 FUNC_1(VAR_0, &VAR_1->vif->sme_state);

 return FUNC_0(VAR_1->drvr->config);
}
