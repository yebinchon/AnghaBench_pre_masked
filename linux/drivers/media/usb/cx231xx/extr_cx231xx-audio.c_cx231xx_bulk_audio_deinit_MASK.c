
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** transfer_buffer; int ** urb; } ;
struct cx231xx {TYPE_1__ adev; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct cx231xx *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->dev, "Stopping bulk\n");

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->adev.urb[VAR_2]) {
   if (!FUNC_1())
    FUNC_4(VAR_1->adev.urb[VAR_2]);
   else
    FUNC_5(VAR_1->adev.urb[VAR_2]);

   FUNC_3(VAR_1->adev.urb[VAR_2]);
   VAR_1->adev.urb[VAR_2] = ((void*)0);

   FUNC_2(VAR_1->adev.transfer_buffer[VAR_2]);
   VAR_1->adev.transfer_buffer[VAR_2] = ((void*)0);
  }
 }

 return 0;
}
