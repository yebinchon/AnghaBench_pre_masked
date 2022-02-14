
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * platform_data; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;
struct TYPE_5__ {TYPE_3__* platdev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1[VAR_2].platdev) {
   VAR_1[VAR_2].platdev->dev.platform_data = ((void*)0);
   FUNC_0(VAR_1[VAR_2].platdev);
  }
}
