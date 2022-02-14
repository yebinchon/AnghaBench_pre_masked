
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {int dev; int input_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rc_dev *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_0(VAR_1->input_dev);

 FUNC_2(&VAR_1->dev);




 FUNC_1(VAR_0);
}
