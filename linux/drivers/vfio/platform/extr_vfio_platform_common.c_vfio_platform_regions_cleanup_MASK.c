
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfio_platform_device {int num_regions; TYPE_1__* regions; } ;
struct TYPE_2__ {int ioaddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct vfio_platform_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_regions; VAR_1++)
  FUNC_0(VAR_0->regions[VAR_1].ioaddr);

 VAR_0->num_regions = 0;
 FUNC_1(VAR_0->regions);
}
