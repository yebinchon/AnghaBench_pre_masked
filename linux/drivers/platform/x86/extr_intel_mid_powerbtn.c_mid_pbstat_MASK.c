
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mid_pb_ddata {int pbstat_mask; int pbstat_addr; struct input_dev* input; } ;
struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static int FUNC_2(struct mid_pb_ddata *VAR_0, int *VAR_1)
{
 struct input_dev *VAR_2 = VAR_0->input;
 int VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_1(VAR_0->pbstat_addr, &VAR_4);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_2->dev.parent, "PB_INT status= %d\n", VAR_4);

 *VAR_1 = !(VAR_4 & VAR_0->pbstat_mask);
 return 0;
}
