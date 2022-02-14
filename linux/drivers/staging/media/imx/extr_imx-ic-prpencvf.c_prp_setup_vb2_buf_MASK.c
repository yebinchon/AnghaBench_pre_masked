
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int phys; } ;
struct prp_priv {TYPE_2__ underrun_buf; struct imx_media_buffer** active_vb2_buf; struct imx_media_video_dev* vdev; } ;
struct imx_media_video_dev {int dummy; } ;
struct TYPE_3__ {int vb2_buf; } ;
struct imx_media_buffer {TYPE_1__ vbuf; } ;
typedef int dma_addr_t ;


 struct imx_media_buffer* FUNC_0 (struct imx_media_video_dev*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct prp_priv *VAR_0, dma_addr_t *VAR_1)
{
 struct imx_media_video_dev *VAR_2 = VAR_0->vdev;
 struct imx_media_buffer *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3) {
   VAR_0->active_vb2_buf[VAR_4] = VAR_3;
   VAR_1[VAR_4] = FUNC_1(
    &VAR_3->vbuf.vb2_buf, 0);
  } else {
   VAR_0->active_vb2_buf[VAR_4] = ((void*)0);
   VAR_1[VAR_4] = VAR_0->underrun_buf.phys;
  }
 }
}
