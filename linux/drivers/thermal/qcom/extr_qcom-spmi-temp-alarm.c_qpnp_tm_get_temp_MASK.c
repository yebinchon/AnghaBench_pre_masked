
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qpnp_tm_chip {int temp; int adc; int lock; int initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qpnp_tm_chip*) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, int *VAR_3)
{
 struct qpnp_tm_chip *VAR_4 = VAR_2;
 int VAR_5, VAR_6;

 if (!VAR_3)
  return -VAR_1;

 if (!VAR_4->initialized) {
  *VAR_3 = VAR_0;
  return 0;
 }

 if (!VAR_4->adc) {
  FUNC_1(&VAR_4->lock);
  VAR_5 = FUNC_3(VAR_4);
  FUNC_2(&VAR_4->lock);
  if (VAR_5 < 0)
   return VAR_5;
 } else {
  VAR_5 = FUNC_0(VAR_4->adc, &VAR_6);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_4->temp = VAR_6;
 }

 *VAR_3 = VAR_4->temp < 0 ? 0 : VAR_4->temp;

 return 0;
}
