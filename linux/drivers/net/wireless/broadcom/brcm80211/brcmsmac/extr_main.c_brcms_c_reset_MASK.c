
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct macstat {int dummy; } ;
struct brcms_c_info {TYPE_3__* hw; TYPE_2__* core; TYPE_1__* pub; } ;
struct TYPE_6__ {int d11core; } ;
struct TYPE_5__ {int macstat_snapshot; } ;
struct TYPE_4__ {int unit; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct brcms_c_info*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(struct brcms_c_info *VAR_0)
{
 FUNC_2(VAR_0->hw->d11core, "wl%d\n", VAR_0->pub->unit);


 FUNC_1(VAR_0);


 FUNC_3(VAR_0->core->macstat_snapshot, 0, sizeof(struct macstat));

 FUNC_0(VAR_0->hw);
}
