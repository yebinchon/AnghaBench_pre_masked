
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int beacon_int; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mt76x02_dev*,int,int *) ;
 int FUNC_2 (struct mt76x02_dev*) ;

__attribute__((used)) static void FUNC_3(struct mt76x02_dev *VAR_1, bool VAR_2)
{
 int VAR_3;

 if (FUNC_0(!VAR_1->mt76.beacon_int))
  return;

 if (VAR_2) {
  FUNC_2(VAR_1);
 } else {



  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   FUNC_1(VAR_1, VAR_3, ((void*)0));
 }
}
