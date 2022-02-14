
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ beacon_mask; } ;
struct mt76x02_dev {int pre_tbtt_timer; TYPE_1__ mt76; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mt76x02_dev*) ;
 int FUNC_2 (struct mt76x02_dev*) ;

__attribute__((used)) static void FUNC_3(struct mt76x02_dev *VAR_0, bool VAR_1)
{
 if (VAR_1 && VAR_0->mt76.beacon_mask &&
     !FUNC_0(&VAR_0->pre_tbtt_timer))
  FUNC_1(VAR_0);
 if (!VAR_1)
  FUNC_2(VAR_0);
}
