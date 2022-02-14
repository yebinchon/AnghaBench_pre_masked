
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mid_pb_ddata {struct input_dev* input; } ;
struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct mid_pb_ddata*) ;
 int FUNC_4 (struct mid_pb_ddata*,int*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct mid_pb_ddata *VAR_5 = VAR_4;
 struct input_dev *VAR_6 = VAR_5->input;
 int VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_5, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_6->dev.parent,
   "Read error %d while reading MSIC_PB_STATUS\n", VAR_8);
 } else {
  FUNC_1(VAR_6, VAR_0, VAR_2, VAR_7);
  FUNC_2(VAR_6);
 }

 FUNC_3(VAR_5);
 return VAR_1;
}
