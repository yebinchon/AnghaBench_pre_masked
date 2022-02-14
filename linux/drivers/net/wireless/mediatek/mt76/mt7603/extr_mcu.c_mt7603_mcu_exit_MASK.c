
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int res_q; } ;
struct TYPE_5__ {TYPE_1__ mcu; } ;
struct TYPE_6__ {TYPE_2__ mmio; } ;
struct mt7603_dev {TYPE_3__ mt76; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mt7603_dev *VAR_0)
{
 FUNC_0(&VAR_0->mt76);
 FUNC_1(&VAR_0->mt76.mmio.mcu.res_q);
}
