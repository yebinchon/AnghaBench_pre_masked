
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {int vb2_queue; } ;
struct TYPE_4__ {unsigned int num_planes; TYPE_1__* plane_fmt; } ;
struct sun4i_csi {int dev; TYPE_2__ fmt; } ;
struct TYPE_3__ {unsigned long sizeimage; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long) ;
 struct sun4i_csi* FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct vb2_buffer*,unsigned int) ;
 int FUNC_3 (struct vb2_buffer*,unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct vb2_buffer *VAR_1)
{
 struct sun4i_csi *VAR_2 = FUNC_1(VAR_1->vb2_queue);
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->fmt.num_planes; VAR_3++) {
  unsigned long VAR_4 = VAR_2->fmt.plane_fmt[VAR_3].sizeimage;

  if (FUNC_2(VAR_1, VAR_3) < VAR_4) {
   FUNC_0(VAR_2->dev, "buffer too small (%lu < %lu)\n",
    FUNC_2(VAR_1, VAR_3), VAR_4);
   return -VAR_0;
  }

  FUNC_3(VAR_1, VAR_3, VAR_4);
 }

 return 0;
}
