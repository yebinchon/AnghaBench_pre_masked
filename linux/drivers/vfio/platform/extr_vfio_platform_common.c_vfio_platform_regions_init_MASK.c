
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfio_platform_region {int dummy; } ;
struct vfio_platform_device {int num_regions; TYPE_1__* regions; struct resource* (* get_resource ) (struct vfio_platform_device*,int) ;} ;
struct resource {int start; int flags; } ;
struct TYPE_3__ {int addr; int size; int type; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* FUNC_0 (int,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct resource*) ;
 int FUNC_3 (struct resource*) ;
 struct resource* FUNC_4 (struct vfio_platform_device*,int) ;
 struct resource* FUNC_5 (struct vfio_platform_device*,int) ;

__attribute__((used)) static int FUNC_6(struct vfio_platform_device *VAR_10)
{
 int VAR_11 = 0, VAR_12;

 while (VAR_10->get_resource(VAR_10, VAR_11))
  VAR_11++;

 VAR_10->regions = FUNC_0(VAR_11, sizeof(struct vfio_platform_region),
    VAR_2);
 if (!VAR_10->regions)
  return -VAR_1;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  struct resource *VAR_13 =
   VAR_10->get_resource(VAR_10, VAR_12);

  if (!VAR_13)
   goto err;

  VAR_10->regions[VAR_12].addr = VAR_13->start;
  VAR_10->regions[VAR_12].size = FUNC_2(VAR_13);
  VAR_10->regions[VAR_12].flags = 0;

  switch (FUNC_3(VAR_13)) {
  case 128:
   VAR_10->regions[VAR_12].type = VAR_5;
   VAR_10->regions[VAR_12].flags |= VAR_8;
   if (!(VAR_13->flags & VAR_3))
    VAR_10->regions[VAR_12].flags |=
     VAR_9;





   if (!(VAR_10->regions[VAR_12].addr & ~VAR_4) &&
     !(VAR_10->regions[VAR_12].size & ~VAR_4))
    VAR_10->regions[VAR_12].flags |=
     VAR_7;

   break;
  case 129:
   VAR_10->regions[VAR_12].type = VAR_6;
   break;
  default:
   goto err;
  }
 }

 VAR_10->num_regions = VAR_11;

 return 0;
err:
 FUNC_1(VAR_10->regions);
 return -VAR_0;
}
