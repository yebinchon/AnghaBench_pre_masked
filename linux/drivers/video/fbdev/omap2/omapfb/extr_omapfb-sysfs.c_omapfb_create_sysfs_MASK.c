
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb2_device {int num_fbs; int dev; TYPE_1__** fbs; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *) ;
 int * VAR_0 ;

int FUNC_4(struct omapfb2_device *VAR_1)
{
 int VAR_2;
 int VAR_3;

 FUNC_1("create sysfs for fbs\n");
 for (VAR_2 = 0; VAR_2 < VAR_1->num_fbs; VAR_2++) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
   VAR_3 = FUNC_3(VAR_1->fbs[VAR_2]->dev,
     &VAR_0[VAR_4]);

   if (VAR_3) {
    FUNC_2(VAR_1->dev, "failed to create sysfs "
      "file\n");
    return VAR_3;
   }
  }
 }

 return 0;
}
