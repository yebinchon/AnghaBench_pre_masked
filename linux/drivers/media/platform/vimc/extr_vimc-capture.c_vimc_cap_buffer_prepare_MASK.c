
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
struct TYPE_3__ {unsigned long sizeimage; } ;
struct vimc_cap_device {TYPE_2__ vdev; int dev; TYPE_1__ format; } ;
struct vb2_buffer {int vb2_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,unsigned long,unsigned long) ;
 struct vimc_cap_device* FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_3(struct vb2_buffer *VAR_1)
{
 struct vimc_cap_device *VAR_2 = FUNC_1(VAR_1->vb2_queue);
 unsigned long VAR_3 = VAR_2->format.sizeimage;

 if (FUNC_2(VAR_1, 0) < VAR_3) {
  FUNC_0(VAR_2->dev, "%s: buffer too small (%lu < %lu)\n",
   VAR_2->vdev.name, FUNC_2(VAR_1, 0), VAR_3);
  return -VAR_0;
 }
 return 0;
}
