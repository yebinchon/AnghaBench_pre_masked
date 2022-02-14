
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlynq_device {TYPE_1__* local; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct vlynq_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 100; VAR_2++)
  if (FUNC_1(&VAR_1->local->status) & VAR_0)
   return 1;
  else
   FUNC_0();

 return 0;
}
