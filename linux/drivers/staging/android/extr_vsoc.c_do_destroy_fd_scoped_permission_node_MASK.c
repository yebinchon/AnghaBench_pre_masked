
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsoc_device_region {int dummy; } ;
struct fd_scoped_permission_node {int list; int permission; } ;
struct TYPE_2__ {int mtx; } ;


 int FUNC_0 (struct vsoc_device_region*,int *) ;
 int FUNC_1 (struct fd_scoped_permission_node*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct vsoc_device_region *VAR_1,
         struct fd_scoped_permission_node *VAR_2)
{
 if (VAR_2) {
  FUNC_0(VAR_1,
      &VAR_2->permission);
  FUNC_3(&VAR_0.mtx);
  FUNC_2(&VAR_2->list);
  FUNC_4(&VAR_0.mtx);
  FUNC_1(VAR_2);
 }
}
