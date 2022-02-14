
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int f1regdata; } ;
struct brcmf_sdio {unsigned long hostintmask; int intstatus; TYPE_1__ sdcnt; int sdiodev; int fcstate; struct brcmf_core* sdio_core; } ;
struct brcmf_core {scalar_t__ base; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int *) ;
 int FUNC_2 (int *,int) ;
 unsigned long FUNC_3 (int ,scalar_t__,int*) ;
 int FUNC_4 (int ,scalar_t__,unsigned long,int*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct brcmf_sdio *VAR_2)
{
 struct brcmf_core *VAR_3 = VAR_2->sdio_core;
 u32 VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_4 = VAR_3->base + FUNC_0(VAR_1);

 VAR_5 = FUNC_3(VAR_2->sdiodev, VAR_4, &VAR_6);
 VAR_2->sdcnt.f1regdata++;
 if (VAR_6 != 0)
  return VAR_6;

 VAR_5 &= VAR_2->hostintmask;
 FUNC_2(&VAR_2->fcstate, !!(VAR_5 & VAR_0));


 if (VAR_5) {
  FUNC_4(VAR_2->sdiodev, VAR_4, VAR_5, &VAR_6);
  VAR_2->sdcnt.f1regdata++;
  FUNC_1(VAR_5, &VAR_2->intstatus);
 }

 return VAR_6;
}
