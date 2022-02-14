
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ expires; } ;
struct brcmf_sdio {int wd_active; TYPE_2__ timer; TYPE_1__* sdiodev; } ;
struct TYPE_5__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

void FUNC_3(struct brcmf_sdio *VAR_3, bool VAR_4)
{

 if (!VAR_4 && VAR_3->wd_active) {
  FUNC_1(&VAR_3->timer);
  VAR_3->wd_active = 0;
  return;
 }


 if (VAR_3->sdiodev->state != VAR_0)
  return;

 if (VAR_4) {
  if (!VAR_3->wd_active) {



   VAR_3->timer.expires = VAR_2 + VAR_1;
   FUNC_0(&VAR_3->timer);
   VAR_3->wd_active = 1;
  } else {

   FUNC_2(&VAR_3->timer, VAR_2 + VAR_1);
  }
 }
}
