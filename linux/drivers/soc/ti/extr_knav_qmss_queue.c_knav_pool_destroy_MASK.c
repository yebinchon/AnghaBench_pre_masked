
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knav_pool {int name; int list; int region_inst; scalar_t__ num_desc; TYPE_1__* region; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int used_desc; } ;


 int FUNC_0 (int ,struct knav_pool*) ;
 int FUNC_1 (struct knav_pool*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(void *VAR_2)
{
 struct knav_pool *VAR_3 = VAR_2;

 if (!VAR_3)
  return;

 if (!VAR_3->region)
  return;

 FUNC_1(VAR_3);
 FUNC_4(&VAR_1);

 VAR_3->region->used_desc -= VAR_3->num_desc;
 FUNC_3(&VAR_3->region_inst);
 FUNC_3(&VAR_3->list);

 FUNC_5(&VAR_1);
 FUNC_2(VAR_3->name);
 FUNC_0(VAR_0->dev, VAR_3);
}
