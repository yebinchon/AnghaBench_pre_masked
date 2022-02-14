
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int hw; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct rt2x00_dev*) ;
 scalar_t__ FUNC_1 (struct rt2x00_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct rt2x00_dev *VAR_4)
{
 if (!FUNC_2(VAR_0, &VAR_4->flags))
  return;


 FUNC_0(
  VAR_4->hw, VAR_1,
  VAR_2, VAR_4);





 if (FUNC_1(VAR_4))
  return;


 FUNC_0(
  VAR_4->hw, VAR_1,
  VAR_3, VAR_4);
}
