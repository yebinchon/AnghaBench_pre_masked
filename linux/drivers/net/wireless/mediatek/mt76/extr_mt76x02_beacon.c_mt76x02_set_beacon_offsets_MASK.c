
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct mt76x02_dev {TYPE_1__* beacon_ops; } ;
struct TYPE_2__ {int nslots; int slot_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mt76x02_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mt76x02_dev *VAR_0)
{
 u32 VAR_1[4] = {};
 u16 VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->beacon_ops->nslots; VAR_3++) {
  VAR_2 = VAR_3 * VAR_0->beacon_ops->slot_size;
  VAR_1[VAR_3 / 4] |= (VAR_2 / 64) << (8 * (VAR_3 % 4));
 }

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  FUNC_1(VAR_0, FUNC_0(VAR_3), VAR_1[VAR_3]);
}
