
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct brcms_pub {TYPE_3__* wlc; int dbgfs_dir; } ;
struct TYPE_6__ {TYPE_2__* hw; } ;
struct TYPE_5__ {TYPE_1__* d11core; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

void FUNC_2(struct brcms_pub *VAR_1)
{
 VAR_1->dbgfs_dir = FUNC_0(
   FUNC_1(&VAR_1->wlc->hw->d11core->dev), VAR_0);
}
