
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct TYPE_6__ {int mutex; TYPE_1__ dev; } ;
struct uwb_rc {TYPE_3__ uwb_dev; int pals; } ;
struct uwb_pal {char* name; int node; int debugfs_dir; TYPE_2__* device; struct uwb_rc* rc; } ;
struct TYPE_5__ {int kobj; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct uwb_pal*) ;

int FUNC_6(struct uwb_pal *VAR_0)
{
 struct uwb_rc *VAR_1 = VAR_0->rc;
 int VAR_2;

 if (VAR_0->device) {

  VAR_2 = FUNC_3(&VAR_0->device->kobj,
     &VAR_1->uwb_dev.dev.kobj, "uwb_rc");
  if (VAR_2 < 0)
   return VAR_2;

  VAR_2 = FUNC_3(&VAR_1->uwb_dev.dev.kobj,
     &VAR_0->device->kobj, VAR_0->name);
  if (VAR_2 < 0) {
   FUNC_4(&VAR_0->device->kobj, "uwb_rc");
   return VAR_2;
  }
 }

 VAR_0->debugfs_dir = FUNC_5(VAR_0);

 FUNC_1(&VAR_1->uwb_dev.mutex);
 FUNC_0(&VAR_0->node, &VAR_1->pals);
 FUNC_2(&VAR_1->uwb_dev.mutex);

 return 0;
}
