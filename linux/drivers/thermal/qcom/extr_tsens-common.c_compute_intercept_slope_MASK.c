
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tsens_priv {int num_sensors; TYPE_1__* sensor; int dev; } ;
struct TYPE_2__ {int slope; scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,int,...) ;

void FUNC_1(struct tsens_priv *VAR_5, u32 *VAR_6,
        u32 *VAR_7, u32 VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_5->num_sensors; VAR_9++) {
  FUNC_0(VAR_5->dev,
   "sensor%d - data_point1:%#x data_point2:%#x\n",
   VAR_9, VAR_6[VAR_9], VAR_7[VAR_9]);

  VAR_5->sensor[VAR_9].slope = VAR_2;
  if (VAR_8 == VAR_4) {




   VAR_10 = VAR_7[VAR_9] - VAR_6[VAR_9];
   VAR_10 *= VAR_3;
   VAR_11 = VAR_1 - VAR_0;
   VAR_5->sensor[VAR_9].slope = VAR_10 / VAR_11;
  }

  VAR_5->sensor[VAR_9].offset = (VAR_6[VAR_9] * VAR_3) -
    (VAR_0 *
    VAR_5->sensor[VAR_9].slope);
  FUNC_0(VAR_5->dev, "offset:%d\n", VAR_5->sensor[VAR_9].offset);
 }
}
