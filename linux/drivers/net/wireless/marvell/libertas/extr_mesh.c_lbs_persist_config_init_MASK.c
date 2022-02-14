
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct net_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 int VAR_3;
 VAR_3 = FUNC_1(&(VAR_2->dev.kobj), &VAR_0);
 if (VAR_3)
  FUNC_0("failed to create boot_opts_group.\n");

 VAR_3 = FUNC_1(&(VAR_2->dev.kobj), &VAR_1);
 if (VAR_3)
  FUNC_0("failed to create mesh_ie_group.\n");
}
