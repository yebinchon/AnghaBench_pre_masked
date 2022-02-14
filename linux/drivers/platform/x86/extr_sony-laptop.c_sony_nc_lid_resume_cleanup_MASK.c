
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_7__ {TYPE_1__ attr; } ;
struct TYPE_6__ {TYPE_4__* attrs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_2)
{
 int VAR_3;

 if (VAR_1) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if (!VAR_1->attrs[VAR_3].attr.name)
    break;

   FUNC_0(&VAR_2->dev, &VAR_1->attrs[VAR_3]);
  }

  FUNC_1(VAR_1);
  VAR_1 = ((void*)0);
 }
}
