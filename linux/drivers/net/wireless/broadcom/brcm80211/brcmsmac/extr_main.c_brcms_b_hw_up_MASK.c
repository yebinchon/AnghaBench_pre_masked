
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct brcms_hardware {int ucode_loaded; int boardflags; int boardrev; int sih; TYPE_2__* wlc; TYPE_1__* band; int unit; int d11core; } ;
struct TYPE_6__ {int hw_up; } ;
struct TYPE_5__ {TYPE_3__* pub; } ;
struct TYPE_4__ {int pi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct brcms_hardware*,int ) ;
 int FUNC_4 (struct brcms_hardware*,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct brcms_hardware *VAR_5)
{
 if (VAR_5->wlc->pub->hw_up)
  return;

 FUNC_5(VAR_5->d11core, "wl%d\n", VAR_5->unit);





 FUNC_4(VAR_5, VAR_4);
 FUNC_0(VAR_5->sih);
 FUNC_3(VAR_5, VAR_1);
 FUNC_6(VAR_5->band->pi);

 VAR_5->ucode_loaded = 0;
 VAR_5->wlc->pub->hw_up = 1;

 if ((VAR_5->boardflags & VAR_2)
     && (FUNC_2(VAR_5->sih) == VAR_0)) {
  if (!
      (VAR_5->boardrev >= 0x1250
       && (VAR_5->boardflags & VAR_3)))
   FUNC_1(VAR_5->sih);
 }
}
