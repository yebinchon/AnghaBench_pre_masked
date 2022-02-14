
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int timestamp; TYPE_1__* planes; } ;
struct vb2_v4l2_buffer {TYPE_3__ vb2_buf; int field; int sequence; } ;
struct TYPE_6__ {int sizeimage; } ;
struct mcam_camera {TYPE_2__ pix_format; int * buf_seq; } ;
struct TYPE_5__ {int bytesused; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mcam_camera *VAR_2, int VAR_3,
  struct vb2_v4l2_buffer *VAR_4)
{
 VAR_4->vb2_buf.planes[0].bytesused = VAR_2->pix_format.sizeimage;
 VAR_4->sequence = VAR_2->buf_seq[VAR_3];
 VAR_4->field = VAR_0;
 VAR_4->vb2_buf.timestamp = FUNC_0();
 FUNC_2(&VAR_4->vb2_buf, 0, VAR_2->pix_format.sizeimage);
 FUNC_1(&VAR_4->vb2_buf, VAR_1);
}
