
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_8__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_11__ {size_t num_zones; } ;
struct TYPE_9__ {TYPE_3__* name; } ;
struct TYPE_10__ {TYPE_2__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 TYPE_6__* VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_6)
{
 u8 VAR_7;

 FUNC_2(&VAR_6->dev.kobj, &VAR_2);
 FUNC_1(&VAR_0);
 if (VAR_5) {
  for (VAR_7 = 0; VAR_7 < VAR_1->num_zones; VAR_7++)
   FUNC_0(VAR_5[VAR_7].attr.name);
 }
 FUNC_0(VAR_5);
 FUNC_0(VAR_4);
 FUNC_0(VAR_3);
}
