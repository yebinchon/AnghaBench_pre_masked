
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct TYPE_2__ {int num_urb; struct urb** urb; } ;
struct em28xx {TYPE_1__ adev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (struct urb*) ;

__attribute__((used)) static int FUNC_4(struct em28xx *VAR_0)
{
 int VAR_1;

 FUNC_0("Stopping isoc\n");
 for (VAR_1 = 0; VAR_1 < VAR_0->adev.num_urb; VAR_1++) {
  struct urb *VAR_2 = VAR_0->adev.urb[VAR_1];

  if (!FUNC_1())
   FUNC_2(VAR_2);
  else
   FUNC_3(VAR_2);
 }

 return 0;
}
