
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct brcms_hardware {TYPE_1__* band; TYPE_2__* wlc; int up; } ;
struct TYPE_4__ {int wl; scalar_t__ macintmask; } ;
struct TYPE_3__ {int pi; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_hardware*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct brcms_hardware *VAR_1)
{
 bool VAR_2;
 uint VAR_3 = 0;

 if (!VAR_1->up)
  return VAR_3;

 VAR_2 = FUNC_1(VAR_1->wlc);


 if (VAR_2)
  VAR_1->wlc->macintmask = 0;
 else {

  FUNC_2(VAR_1->wlc->wl);


  FUNC_0(VAR_1, VAR_0);
 }

 VAR_3 += FUNC_3(VAR_1->band->pi);

 return VAR_3;
}
