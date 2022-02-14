
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_vf_config {int dummy; } ;
struct nsim_bus_dev {unsigned int num_vfs; int vfconfigs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct nsim_bus_dev *VAR_2,
       unsigned int VAR_3)
{
 VAR_2->vfconfigs = FUNC_0(VAR_3,
       sizeof(struct nsim_vf_config),
       VAR_1);
 if (!VAR_2->vfconfigs)
  return -VAR_0;
 VAR_2->num_vfs = VAR_3;

 return 0;
}
