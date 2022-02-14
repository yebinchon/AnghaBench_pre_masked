
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {scalar_t__ cad; } ;
struct TYPE_2__ {scalar_t__ pardev; int timer; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct parport *VAR_1)
{
 if (VAR_1->cad != VAR_0.pardev)
  return;

 FUNC_0(&VAR_0.timer);
 FUNC_1(VAR_0.pardev);
 FUNC_2(VAR_0.pardev);
}
