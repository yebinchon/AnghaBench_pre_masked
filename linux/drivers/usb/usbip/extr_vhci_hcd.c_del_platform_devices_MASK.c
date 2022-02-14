
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {struct platform_device* pdev; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct platform_device *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = VAR_3[VAR_5].pdev;
  if (VAR_4 != ((void*)0))
   FUNC_0(VAR_4);
  VAR_3[VAR_5].pdev = ((void*)0);
 }
 FUNC_1(&VAR_1.kobj, VAR_0);
}
