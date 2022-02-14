
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_region {scalar_t__ ioaddr; int size; int addr; } ;
struct vfio_platform_device {struct vfio_platform_region* regions; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct vfio_platform_device *VAR_2)
{
 struct vfio_platform_region *VAR_3 = &VAR_2->regions[0];

 if (!VAR_3->ioaddr) {
  VAR_3->ioaddr =
   FUNC_0(VAR_3->addr, VAR_3->size);
  if (!VAR_3->ioaddr)
   return -VAR_0;
 }


 FUNC_1(0, VAR_3->ioaddr + VAR_1);


 FUNC_2(VAR_3->ioaddr);

 return 0;
}
