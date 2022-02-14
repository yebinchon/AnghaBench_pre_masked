
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flushing; } ;
struct TYPE_3__ {scalar_t__ alive; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(void)
{
 if (!VAR_5)
  return;

 VAR_1.flushing = 1;
 FUNC_0();
 if (VAR_5->alive) {
  if (VAR_4) {
   FUNC_1("%s", VAR_3);
   VAR_4 = 0;
  }
 }
 FUNC_2(&VAR_0);
 FUNC_3(VAR_2);
}
