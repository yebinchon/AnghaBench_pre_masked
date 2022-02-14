
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct tsens_sensor {size_t hw_id; } ;
struct tsens_priv {TYPE_2__* fields; TYPE_1__* feat; int * rf; struct tsens_sensor* sensor; } ;
struct TYPE_4__ {int lsb; int msb; } ;
struct TYPE_3__ {scalar_t__ adc; } ;


 size_t FUNC_0 (int ,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (size_t,struct tsens_sensor*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,size_t*) ;
 int FUNC_5 (size_t,scalar_t__) ;

int FUNC_6(struct tsens_priv *VAR_2, int VAR_3, int *VAR_4)
{
 struct tsens_sensor *VAR_5 = &VAR_2->sensor[VAR_3];
 u32 VAR_6 = VAR_0 + VAR_5->hw_id;
 u32 VAR_7 = VAR_1 + VAR_5->hw_id;
 u32 VAR_8 = 0, VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_2->rf[VAR_7], &VAR_9);
 if (VAR_11)
  return VAR_11;
 while (!VAR_9) {




  FUNC_3(400);
  VAR_11 = FUNC_4(VAR_2->rf[VAR_7], &VAR_9);
  if (VAR_11)
   return VAR_11;
 }


 VAR_11 = FUNC_4(VAR_2->rf[VAR_6], &VAR_8);
 if (VAR_11)
  return VAR_11;

 if (VAR_2->feat->adc) {

  *VAR_4 = FUNC_1(VAR_8, VAR_5) * 1000;
 } else {
  VAR_10 = FUNC_0(VAR_2->fields[VAR_0].msb,
          VAR_2->fields[VAR_0].lsb);

  *VAR_4 = FUNC_5(VAR_8, FUNC_2(VAR_10) - 1) * 100;
 }

 return 0;
}
