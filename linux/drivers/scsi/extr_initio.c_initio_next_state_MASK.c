
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct initio_host {TYPE_1__* active; } ;
struct TYPE_2__ {int next_state; } ;


 int FUNC_0 (struct initio_host*) ;
 int FUNC_1 (struct initio_host*) ;
 int FUNC_2 (struct initio_host*) ;
 int FUNC_3 (struct initio_host*) ;
 int FUNC_4 (struct initio_host*) ;
 int FUNC_5 (struct initio_host*) ;
 int FUNC_6 (struct initio_host*) ;
 int FUNC_7 (struct initio_host*) ;
 int FUNC_8 (struct initio_host*) ;

__attribute__((used)) static int FUNC_9(struct initio_host * VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->active->next_state;
 for (;;) {
  switch (VAR_1) {
  case 1:
   VAR_1 = FUNC_2(VAR_0);
   break;
  case 2:
   VAR_1 = FUNC_3(VAR_0);
   break;
  case 3:
   VAR_1 = FUNC_4(VAR_0);
   break;
  case 4:
   VAR_1 = FUNC_5(VAR_0);
   break;
  case 5:
   VAR_1 = FUNC_6(VAR_0);
   break;
  case 6:
   VAR_1 = FUNC_7(VAR_0);
   break;
  case 7:
   VAR_1 = FUNC_8(VAR_0);
   break;
  case 8:
   return FUNC_1(VAR_0);
  default:
   return FUNC_0(VAR_0);
  }
  if (VAR_1 <= 0)
   return VAR_1;
 }
}
