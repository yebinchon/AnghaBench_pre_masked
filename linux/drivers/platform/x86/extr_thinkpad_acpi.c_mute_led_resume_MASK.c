
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_led_table {scalar_t__ state; } ;


 int VAR_0 ;
 struct tp_led_table* VAR_1 ;
 int FUNC_0 (struct tp_led_table*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct tp_led_table *VAR_3 = &VAR_1[VAR_2];
  if (VAR_3->state >= 0)
   FUNC_0(VAR_3, VAR_3->state);
 }
}
