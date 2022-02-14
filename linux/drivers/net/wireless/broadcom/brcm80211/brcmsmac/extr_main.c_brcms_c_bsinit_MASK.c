
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct brcms_c_info {int asi; TYPE_3__* band; TYPE_2__* pub; TYPE_1__* hw; } ;
struct TYPE_6__ {int bandunit; } ;
struct TYPE_5__ {int unit; } ;
struct TYPE_4__ {int d11core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct brcms_c_info*) ;
 int FUNC_2 (struct brcms_c_info*) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct brcms_c_info *VAR_0)
{
 FUNC_3(VAR_0->hw->d11core, "wl%d: bandunit %d\n",
         VAR_0->pub->unit, VAR_0->band->bandunit);


 FUNC_1(VAR_0);


 FUNC_2(VAR_0);


 FUNC_0(VAR_0->asi);

}
