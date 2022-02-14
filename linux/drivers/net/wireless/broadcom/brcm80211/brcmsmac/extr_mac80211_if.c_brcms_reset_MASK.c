
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
struct brcms_info {int resched; TYPE_2__* pub; TYPE_3__* wlc; } ;
struct TYPE_6__ {TYPE_1__* hw; } ;
struct TYPE_5__ {int up; int unit; } ;
struct TYPE_4__ {int d11core; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,char*,int ) ;

uint FUNC_2(struct brcms_info *VAR_0)
{
 FUNC_1(VAR_0->wlc->hw->d11core, "Resetting wl%d\n", VAR_0->pub->unit);
 FUNC_0(VAR_0->wlc);


 VAR_0->resched = 0;


 VAR_0->pub->up = 0;

 return 0;
}
