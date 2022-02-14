
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
struct TYPE_8__ {scalar_t__ bytesperline; int field; } ;
struct TYPE_9__ {TYPE_3__ pix; } ;
struct TYPE_10__ {TYPE_4__ fmt; } ;
struct imx_media_video_dev {TYPE_5__ fmt; } ;
struct TYPE_6__ {struct vb2_buffer vb2_buf; int sequence; int field; } ;
struct imx_media_buffer {TYPE_1__ vbuf; } ;
struct TYPE_7__ {int phys; } ;
struct csi_priv {size_t ipu_buf_num; int nfb4eof; int idmac_ch; scalar_t__ interweave_swap; struct imx_media_buffer** active_vb2_buf; TYPE_2__ underrun_buf; int frame_sequence; struct imx_media_video_dev* vdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct imx_media_buffer* FUNC_0 (struct imx_media_video_dev*) ;
 int FUNC_1 (int ,size_t,int ) ;
 scalar_t__ FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 () ;
 int FUNC_5 (struct vb2_buffer*,int ) ;
 int FUNC_6 (struct vb2_buffer*,int ) ;

__attribute__((used)) static void FUNC_7(struct csi_priv *VAR_2)
{
 struct imx_media_video_dev *VAR_3 = VAR_2->vdev;
 struct imx_media_buffer *VAR_4, *VAR_5;
 struct vb2_buffer *VAR_6;
 dma_addr_t VAR_7;

 VAR_4 = VAR_2->active_vb2_buf[VAR_2->ipu_buf_num];
 if (VAR_4) {
  VAR_4->vbuf.field = VAR_3->fmt.fmt.pix.field;
  VAR_4->vbuf.sequence = VAR_2->frame_sequence;
  VAR_6 = &VAR_4->vbuf.vb2_buf;
  VAR_6->timestamp = FUNC_4();
  FUNC_5(VAR_6, VAR_2->nfb4eof ?
    VAR_1 : VAR_0);
 }

 VAR_2->frame_sequence++;
 VAR_2->nfb4eof = 0;


 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5) {
  VAR_7 = FUNC_6(&VAR_5->vbuf.vb2_buf, 0);
  VAR_2->active_vb2_buf[VAR_2->ipu_buf_num] = VAR_5;
 } else {
  VAR_7 = VAR_2->underrun_buf.phys;
  VAR_2->active_vb2_buf[VAR_2->ipu_buf_num] = ((void*)0);
 }

 if (FUNC_2(VAR_2->idmac_ch, VAR_2->ipu_buf_num))
  FUNC_3(VAR_2->idmac_ch, VAR_2->ipu_buf_num);

 if (VAR_2->interweave_swap)
  VAR_7 += VAR_3->fmt.fmt.pix.bytesperline;

 FUNC_1(VAR_2->idmac_ch, VAR_2->ipu_buf_num, VAR_7);
}
