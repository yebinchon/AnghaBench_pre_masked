
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_buffer {int dummy; } ;
struct imx_media_video_dev {int dummy; } ;
struct TYPE_3__ {struct vb2_buffer vb2_buf; } ;
struct imx_media_buffer {TYPE_1__ vbuf; } ;
struct TYPE_4__ {int phys; } ;
struct imx7_csi {TYPE_2__ underrun_buf; struct imx_media_buffer** active_vb2_buf; struct imx_media_video_dev* vdev; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct imx7_csi*,int ,int) ;
 struct imx_media_buffer* FUNC_1 (struct imx_media_video_dev*) ;
 int FUNC_2 (struct vb2_buffer*,int ) ;

__attribute__((used)) static void FUNC_3(struct imx7_csi *VAR_0)
{
 struct imx_media_video_dev *VAR_1 = VAR_0->vdev;
 struct imx_media_buffer *VAR_2;
 struct vb2_buffer *VAR_3;
 dma_addr_t VAR_4[2];
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2) {
   VAR_0->active_vb2_buf[VAR_5] = VAR_2;
   VAR_3 = &VAR_2->vbuf.vb2_buf;
   VAR_4[VAR_5] = FUNC_2(VAR_3, 0);
  } else {
   VAR_0->active_vb2_buf[VAR_5] = ((void*)0);
   VAR_4[VAR_5] = VAR_0->underrun_buf.phys;
  }

  FUNC_0(VAR_0, VAR_4[VAR_5], VAR_5);
 }
}
