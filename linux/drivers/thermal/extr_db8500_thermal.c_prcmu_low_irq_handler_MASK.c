
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct db8500_thermal_zone {unsigned int cur_index; TYPE_1__* tz; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long* VAR_4 ;
 int FUNC_0 (struct db8500_thermal_zone*,unsigned int,int ,unsigned long,unsigned long) ;
 int FUNC_1 (int *,char*,unsigned long,unsigned long) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct db8500_thermal_zone *VAR_7 = VAR_6;
 unsigned int VAR_8 = VAR_7->cur_index;
 unsigned long VAR_9, VAR_10;

 if (VAR_8 == 0)

  return VAR_0;

 if (VAR_8 == 1) {
  VAR_10 = VAR_4[0];
  VAR_9 = VAR_1;
 } else {
  VAR_10 = VAR_4[VAR_8 - 1];
  VAR_9 = VAR_4[VAR_8 - 2];
 }
 VAR_8 -= 1;

 FUNC_0(VAR_7, VAR_8, VAR_3,
         VAR_9, VAR_10);
 FUNC_1(&VAR_7->tz->device,
  "PRCMU set max %ld, min %ld\n", VAR_10, VAR_9);

 FUNC_2(VAR_7->tz, VAR_2);

 return VAR_0;
}
