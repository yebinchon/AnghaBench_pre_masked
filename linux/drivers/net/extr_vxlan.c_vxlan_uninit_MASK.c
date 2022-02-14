
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vni; } ;
struct vxlan_dev {TYPE_1__ cfg; int gro_cells; } ;
struct net_device {int tstats; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct vxlan_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct vxlan_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct vxlan_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->gro_cells);

 FUNC_3(VAR_1, VAR_1->cfg.vni);

 FUNC_0(VAR_0->tstats);
}
