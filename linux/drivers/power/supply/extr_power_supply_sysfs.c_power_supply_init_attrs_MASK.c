
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device_type {int groups; } ;
struct TYPE_3__ {int attr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int ** VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_1(struct device_type *VAR_3)
{
 int VAR_4;

 VAR_3->groups = VAR_1;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
  VAR_0[VAR_4] = &VAR_2[VAR_4].attr;
}
