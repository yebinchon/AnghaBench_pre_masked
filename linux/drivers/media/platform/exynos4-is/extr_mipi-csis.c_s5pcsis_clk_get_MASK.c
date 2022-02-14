
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct csis_state {void** clock; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_1 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct device*,int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int * VAR_2 ;
 int FUNC_6 (struct device*,char*,int ) ;
 int FUNC_7 (struct csis_state*) ;

__attribute__((used)) static int FUNC_8(struct csis_state *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_3->clock[VAR_5] = FUNC_0(-VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_3->clock[VAR_5] = FUNC_3(VAR_4, VAR_2[VAR_5]);
  if (FUNC_1(VAR_3->clock[VAR_5])) {
   VAR_6 = FUNC_2(VAR_3->clock[VAR_5]);
   goto err;
  }
  VAR_6 = FUNC_4(VAR_3->clock[VAR_5]);
  if (VAR_6 < 0) {
   FUNC_5(VAR_3->clock[VAR_5]);
   VAR_3->clock[VAR_5] = FUNC_0(-VAR_0);
   goto err;
  }
 }
 return 0;
err:
 FUNC_7(VAR_3);
 FUNC_6(VAR_4, "failed to get clock: %s\n", VAR_2[VAR_5]);
 return VAR_6;
}
