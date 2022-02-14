
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_vfs; } ;
struct octeon_device {int ifcount; TYPE_2__* props; TYPE_1__ sriov_info; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct octeon_device *VAR_1)
{
 struct net_device *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 if (!VAR_1)
  return;

 VAR_3 = VAR_1->sriov_info.max_vfs;

 for (VAR_5 = 0; VAR_5 < VAR_1->ifcount; VAR_5++) {
  VAR_2 = VAR_1->props[VAR_5].netdev;
  if (!VAR_2)
   continue;

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_0(VAR_2, VAR_4,
         VAR_0);
 }
}
