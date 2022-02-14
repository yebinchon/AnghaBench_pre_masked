
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_8__ {TYPE_3__* name; } ;
struct TYPE_9__ {TYPE_2__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 TYPE_3__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_5->dev.kobj,
    &VAR_1);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_0(VAR_3[VAR_6].attr.name);
  FUNC_0(VAR_4[VAR_6].attr.name);
 }
 FUNC_0(VAR_2);
 FUNC_0(VAR_4);
 FUNC_0(VAR_3);
}
