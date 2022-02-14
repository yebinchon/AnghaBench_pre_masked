
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct ccw_device {TYPE_1__ dev; } ;
struct TYPE_4__ {int (* set ) (struct ccw_device*,int ) ;int (* free ) (struct ccw_device*) ;int attr_group; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ccw_device*,int ) ;
 int FUNC_2 (struct ccw_device*) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(struct ccw_device *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->set(VAR_1, 0);
 if (VAR_2)
  return VAR_2;

 FUNC_3(&VAR_1->dev.kobj, VAR_0->attr_group);
 VAR_0->free(VAR_1);
 FUNC_0(&VAR_1->dev);

 return VAR_2;
}
