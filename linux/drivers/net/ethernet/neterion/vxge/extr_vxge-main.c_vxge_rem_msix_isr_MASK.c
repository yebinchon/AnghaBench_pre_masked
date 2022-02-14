
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ intr_type; } ;
struct vxgedev {int no_of_vpath; int pdev; TYPE_1__ config; TYPE_2__* vxge_entries; TYPE_2__* entries; } ;
struct TYPE_4__ {scalar_t__ in_use; int arg; int vector; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct vxgedev *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < (VAR_1->no_of_vpath * 2 + 1);
  VAR_2++) {
  if (VAR_1->vxge_entries[VAR_2].in_use) {
   FUNC_3(VAR_1->entries[VAR_2].vector);
   FUNC_0(VAR_1->entries[VAR_2].vector,
    VAR_1->vxge_entries[VAR_2].arg);
   VAR_1->vxge_entries[VAR_2].in_use = 0;
  }
 }

 FUNC_1(VAR_1->entries);
 FUNC_1(VAR_1->vxge_entries);
 VAR_1->entries = ((void*)0);
 VAR_1->vxge_entries = ((void*)0);

 if (VAR_1->config.intr_type == VAR_0)
  FUNC_2(VAR_1->pdev);
}
