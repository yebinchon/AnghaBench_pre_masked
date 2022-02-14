
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct softing {int dpram; int ** net; } ;
struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct softing*) ;
 struct softing* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct softing*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct softing *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;


 FUNC_4(VAR_2);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->net); ++VAR_3) {
  if (!VAR_2->net[VAR_3])
   continue;
  FUNC_5(VAR_2->net[VAR_3]);
  VAR_2->net[VAR_3] = ((void*)0);
 }
 FUNC_6(&VAR_1->dev.kobj, &VAR_0);

 FUNC_1(VAR_2->dpram);
 FUNC_2(VAR_2);
 return 0;
}
