
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmci_handle {scalar_t__ resource; int context; } ;
struct vmci_resource {int type; int node; struct vmci_handle handle; int done; int kref; } ;
typedef enum vmci_resource_type { ____Placeholder_vmci_resource_type } vmci_resource_type ;
struct TYPE_2__ {int lock; int * entries; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int) ;
 unsigned int FUNC_7 (struct vmci_handle) ;
 scalar_t__ FUNC_8 (struct vmci_handle,int) ;
 TYPE_1__ VAR_4 ;

int FUNC_9(struct vmci_resource *VAR_5,
        enum vmci_resource_type VAR_6,
        struct vmci_handle VAR_7)

{
 unsigned int VAR_8;
 int VAR_9;

 FUNC_4(&VAR_4.lock);

 if (VAR_7.resource == VAR_2) {
  VAR_7.resource = FUNC_6(VAR_7.context,
   VAR_6);
  if (VAR_7.resource == VAR_2) {
   VAR_9 = VAR_1;
   goto out;
  }
 } else if (FUNC_8(VAR_7, VAR_6)) {
  VAR_9 = VAR_0;
  goto out;
 }

 VAR_5->handle = VAR_7;
 VAR_5->type = VAR_6;
 FUNC_0(&VAR_5->node);
 FUNC_3(&VAR_5->kref);
 FUNC_2(&VAR_5->done);

 VAR_8 = FUNC_7(VAR_5->handle);
 FUNC_1(&VAR_5->node, &VAR_4.entries[VAR_8]);

 VAR_9 = VAR_3;

out:
 FUNC_5(&VAR_4.lock);
 return VAR_9;
}
