
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct brcmf_if {size_t bsscfgidx; TYPE_1__* drvr; int ifidx; } ;
struct TYPE_3__ {struct brcmf_if** iflist; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,size_t,int ) ;
 int FUNC_2 (TYPE_1__*,size_t,int) ;
 int FUNC_3 (TYPE_1__*,struct brcmf_if*) ;

void FUNC_4(struct brcmf_if *VAR_1, bool VAR_2)
{
 if (!VAR_1 || FUNC_0(VAR_1->drvr->iflist[VAR_1->bsscfgidx] != VAR_1))
  return;
 FUNC_1(VAR_0, "Enter, bsscfgidx=%d, ifidx=%d\n", VAR_1->bsscfgidx,
    VAR_1->ifidx);
 FUNC_3(VAR_1->drvr, VAR_1);
 FUNC_2(VAR_1->drvr, VAR_1->bsscfgidx, VAR_2);
}
