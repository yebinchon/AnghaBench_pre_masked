
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct vme_master_resource {TYPE_1__ bus_resource; int * kern_base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct vme_master_resource *VAR_0)
{
 FUNC_0(VAR_0->kern_base);
 VAR_0->kern_base = ((void*)0);
 FUNC_3(&VAR_0->bus_resource);
 FUNC_1(VAR_0->bus_resource.name);
 FUNC_2(&VAR_0->bus_resource, 0, sizeof(VAR_0->bus_resource));
}
