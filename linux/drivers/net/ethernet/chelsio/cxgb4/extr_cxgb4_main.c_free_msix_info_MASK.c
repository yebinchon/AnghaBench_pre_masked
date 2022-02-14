
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msix_bmap; } ;
struct adapter {TYPE_1__ msix_bmap_ulds; int msix_info_ulds; scalar_t__ num_ofld_uld; scalar_t__ num_uld; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0)
{
 if (!(VAR_0->num_uld && VAR_0->num_ofld_uld))
  return;

 FUNC_0(VAR_0->msix_info_ulds);
 FUNC_0(VAR_0->msix_bmap_ulds.msix_bmap);
}
