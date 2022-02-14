
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_dev {scalar_t__ csa_complete; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct mt76_dev*) ;

void FUNC_1(struct mt76_dev *VAR_2)
{
 if (!VAR_2->csa_complete)
  return;

 FUNC_0(VAR_2->hw,
  VAR_0,
  VAR_1, VAR_2);

 VAR_2->csa_complete = 0;
}
