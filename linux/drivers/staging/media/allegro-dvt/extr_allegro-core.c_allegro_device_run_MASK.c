
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_v4l2_buffer {int vb2_buf; scalar_t__ sequence; } ;
struct allegro_dev {int dummy; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct allegro_channel {int stride; int height; int osequence; TYPE_1__ fh; struct allegro_dev* dev; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (struct allegro_dev*,struct allegro_channel*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct allegro_dev*,struct allegro_channel*,scalar_t__,unsigned long) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;
 struct vb2_v4l2_buffer* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 unsigned long FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct allegro_channel *VAR_1 = VAR_0;
 struct allegro_dev *VAR_2 = VAR_1->dev;
 struct vb2_v4l2_buffer *VAR_3;
 struct vb2_v4l2_buffer *VAR_4;
 dma_addr_t VAR_5;
 dma_addr_t VAR_6;
 dma_addr_t VAR_7;
 unsigned long VAR_8;

 VAR_4 = FUNC_2(VAR_1->fh.m2m_ctx);
 VAR_7 = FUNC_4(&VAR_4->vb2_buf, 0);
 VAR_8 = FUNC_5(&VAR_4->vb2_buf, 0);
 FUNC_1(VAR_2, VAR_1, VAR_7, VAR_8);

 VAR_3 = FUNC_3(VAR_1->fh.m2m_ctx);
 VAR_3->sequence = VAR_1->osequence++;

 VAR_5 = FUNC_4(&VAR_3->vb2_buf, 0);
 VAR_6 = VAR_5 + (VAR_1->stride * VAR_1->height);
 FUNC_0(VAR_2, VAR_1, VAR_5, VAR_6);
}
