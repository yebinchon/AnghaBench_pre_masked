
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb2_device {int num_fbs; TYPE_1__** fbs; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 int * VAR_0 ;

void FUNC_3(struct omapfb2_device *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_1("remove sysfs for fbs\n");
 for (VAR_2 = 0; VAR_2 < VAR_1->num_fbs; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
   FUNC_2(VAR_1->fbs[VAR_2]->dev,
     &VAR_0[VAR_3]);
 }
}
