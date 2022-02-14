
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; } ;
struct TYPE_2__ {int pixelformat; int width; int height; } ;
struct sh_vou_device {TYPE_1__ pix; } ;
typedef int dma_addr_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sh_vou_device*,int ,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct sh_vou_device *VAR_2,
     struct vb2_v4l2_buffer *VAR_3)
{
 dma_addr_t VAR_4, VAR_5;

 VAR_4 = FUNC_1(&VAR_3->vb2_buf, 0);
 switch (VAR_2->pix.pixelformat) {
 case 129:
 case 128:
  VAR_5 = VAR_4 + VAR_2->pix.width * VAR_2->pix.height;
  break;
 default:
  VAR_5 = 0;
 }

 FUNC_0(VAR_2, VAR_0, VAR_4);
 FUNC_0(VAR_2, VAR_1, VAR_5);
}
