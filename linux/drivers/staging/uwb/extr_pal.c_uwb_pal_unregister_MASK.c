
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct TYPE_6__ {TYPE_1__ dev; int mutex; } ;
struct uwb_rc {TYPE_3__ uwb_dev; } ;
struct uwb_pal {char* name; TYPE_2__* device; int debugfs_dir; int node; struct uwb_rc* rc; } ;
struct TYPE_5__ {int kobj; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct uwb_pal*) ;
 scalar_t__ FUNC_6 (struct uwb_rc*) ;

void FUNC_7(struct uwb_pal *VAR_0)
{
 struct uwb_rc *VAR_1 = VAR_0->rc;

 FUNC_5(VAR_0);

 FUNC_2(&VAR_1->uwb_dev.mutex);
 FUNC_1(&VAR_0->node);
 FUNC_3(&VAR_1->uwb_dev.mutex);

 FUNC_0(VAR_0->debugfs_dir);

 if (VAR_0->device) {

  if (FUNC_6(VAR_1))
   FUNC_4(&VAR_1->uwb_dev.dev.kobj, VAR_0->name);


  FUNC_4(&VAR_0->device->kobj, "uwb_rc");
 }
}
