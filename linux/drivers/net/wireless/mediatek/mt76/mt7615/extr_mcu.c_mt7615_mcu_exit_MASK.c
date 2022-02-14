
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
struct mt7615_dev {TYPE_3__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct mt7615_dev*,int ,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mt7615_dev *VAR_2)
{
 FUNC_0(&VAR_2->mt76);
 FUNC_1(VAR_2, VAR_0, VAR_1);
 FUNC_2(&VAR_2->mt76.mmio.mcu.res_q);
}
