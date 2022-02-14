
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vb2_buffer {int timestamp; } ;
struct TYPE_6__ {int field; } ;
struct TYPE_7__ {TYPE_1__ pix; } ;
struct TYPE_8__ {TYPE_2__ fmt; } ;
struct imx_media_video_dev {TYPE_3__ fmt; } ;
struct TYPE_9__ {struct vb2_buffer vb2_buf; int sequence; int field; } ;
struct imx_media_buffer {TYPE_4__ vbuf; } ;
struct TYPE_10__ {int phys; } ;
struct imx7_csi {size_t buf_num; struct imx_media_buffer** active_vb2_buf; TYPE_5__ underrun_buf; int frame_sequence; struct imx_media_video_dev* vdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct imx7_csi*,int ,size_t) ;
 struct imx_media_buffer* FUNC_1 (struct imx_media_video_dev*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct vb2_buffer*,int ) ;
 int FUNC_4 (struct vb2_buffer*,int ) ;

__attribute__((used)) static void FUNC_5(struct imx7_csi *VAR_1)
{
 struct imx_media_video_dev *VAR_2 = VAR_1->vdev;
 struct imx_media_buffer *VAR_3, *VAR_4;
 struct vb2_buffer *VAR_5;
 dma_addr_t VAR_6;

 VAR_3 = VAR_1->active_vb2_buf[VAR_1->buf_num];
 if (VAR_3) {
  VAR_3->vbuf.field = VAR_2->fmt.fmt.pix.field;
  VAR_3->vbuf.sequence = VAR_1->frame_sequence;
  VAR_5 = &VAR_3->vbuf.vb2_buf;
  VAR_5->timestamp = FUNC_2();
  FUNC_3(VAR_5, VAR_0);
 }
 VAR_1->frame_sequence++;


 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4) {
  VAR_6 = FUNC_4(&VAR_4->vbuf.vb2_buf, 0);
  VAR_1->active_vb2_buf[VAR_1->buf_num] = VAR_4;
 } else {
  VAR_6 = VAR_1->underrun_buf.phys;
  VAR_1->active_vb2_buf[VAR_1->buf_num] = ((void*)0);
 }

 FUNC_0(VAR_1, VAR_6, VAR_1->buf_num);
}
