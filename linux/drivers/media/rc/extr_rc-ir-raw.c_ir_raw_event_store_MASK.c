
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {int dev; TYPE_1__* raw; } ;
struct ir_raw_event {int pulse; int duration; } ;
struct TYPE_2__ {int kfifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct ir_raw_event) ;

int FUNC_5(struct rc_dev *VAR_2, struct ir_raw_event *VAR_3)
{
 if (!VAR_2->raw)
  return -VAR_0;

 FUNC_2(&VAR_2->dev, "sample: (%05dus %s)\n",
  FUNC_1(VAR_3->duration), FUNC_0(VAR_3->pulse));

 if (!FUNC_4(&VAR_2->raw->kfifo, *VAR_3)) {
  FUNC_3(&VAR_2->dev, "IR event FIFO is full!\n");
  return -VAR_1;
 }

 return 0;
}
