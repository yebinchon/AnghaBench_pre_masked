
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ name; } ;
struct TYPE_4__ {TYPE_2__ led_classdev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2].led_classdev.name)
   FUNC_1(&VAR_1[VAR_2].led_classdev);
 }

 FUNC_0(VAR_1);
}
