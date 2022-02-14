
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct db8500_thermal_zone {unsigned int cur_index; int interpolated_temp; TYPE_1__* tz; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (struct db8500_thermal_zone*,unsigned int,int ,unsigned long,unsigned long) ;
 int FUNC_2 (int *,char*,unsigned long,unsigned long) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct db8500_thermal_zone *VAR_6 = VAR_5;
 unsigned int VAR_7 = VAR_6->cur_index;
 unsigned long VAR_8, VAR_9;
 int VAR_10 = FUNC_0(VAR_3);

 if (VAR_7 < VAR_10 - 1) {
  VAR_9 = VAR_3[VAR_7+1];
  VAR_8 = VAR_3[VAR_7];
  VAR_7 += 1;

  FUNC_1(VAR_6, VAR_7, VAR_2,
          VAR_8, VAR_9);

  FUNC_2(&VAR_6->tz->device,
    "PRCMU set max %ld, min %ld\n", VAR_9, VAR_8);
 } else if (VAR_7 == VAR_10 - 1)

  VAR_6->interpolated_temp = VAR_3[VAR_7] + 1;

 FUNC_3(VAR_6->tz, VAR_1);

 return VAR_0;
}
