
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_bus_dev {scalar_t__ num_vfs; int * vfconfigs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nsim_bus_dev *VAR_0)
{
 FUNC_0(VAR_0->vfconfigs);
 VAR_0->vfconfigs = ((void*)0);
 VAR_0->num_vfs = 0;
}
