
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76x02_dev {int pre_tbtt_work; int pre_tbtt_timer; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mt76x02_dev *VAR_0)
{
 do {
  FUNC_2(&VAR_0->pre_tbtt_timer);
  FUNC_0(&VAR_0->pre_tbtt_work);

 } while (FUNC_1(&VAR_0->pre_tbtt_timer));
}
