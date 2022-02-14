
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsens_sensor {size_t hw_id; } ;
struct tsens_priv {int * rf; struct tsens_sensor* sensor; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,struct tsens_sensor*) ;
 int FUNC_1 (int ,int*) ;

int FUNC_2(struct tsens_priv *VAR_1, int VAR_2, int *VAR_3)
{
 struct tsens_sensor *VAR_4 = &VAR_1->sensor[VAR_2];
 int VAR_5 = 0, VAR_6;

 VAR_6 = FUNC_1(VAR_1->rf[VAR_0 + VAR_4->hw_id], &VAR_5);
 if (VAR_6)
  return VAR_6;

 *VAR_3 = FUNC_0(VAR_5, VAR_4) * 1000;

 return 0;
}
