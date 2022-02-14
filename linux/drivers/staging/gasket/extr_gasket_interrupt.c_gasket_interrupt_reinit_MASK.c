
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gasket_dev {int dev; TYPE_1__* interrupt_data; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct gasket_dev*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct gasket_dev*) ;

int FUNC_6(struct gasket_dev *VAR_1)
{
 int VAR_2;

 if (!VAR_1->interrupt_data) {
  FUNC_0(VAR_1->dev,
   "Attempted to reinit uninitialized interrupt data\n");
  return -VAR_0;
 }

 switch (VAR_1->interrupt_data->type) {
 case 128:
  FUNC_3(VAR_1->interrupt_data);
  VAR_2 = FUNC_4(VAR_1->interrupt_data);
  if (VAR_2)
   break;
  FUNC_2(VAR_1);
  break;

 default:
  VAR_2 = -VAR_0;
 }

 if (VAR_2) {



  FUNC_1(VAR_1->dev, "Couldn't reinit interrupts: %d\n",
    VAR_2);
  return 0;
 }

 FUNC_5(VAR_1);

 return 0;
}
