
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vb2_v4l2_buffer {scalar_t__ sequence; int flags; int vb2_buf; } ;
struct coda_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ gop_size; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct coda_ctx {scalar_t__ gopcounter; TYPE_2__ params; int wakeup_mutex; TYPE_1__ fh; scalar_t__* vpu_header_size; int reg_idx; struct coda_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,struct coda_ctx*,char*,int ,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct coda_ctx*,struct vb2_v4l2_buffer*,int ) ;
 scalar_t__ FUNC_4 (struct coda_dev*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct coda_ctx*,struct vb2_v4l2_buffer*) ;
 int FUNC_8 (struct vb2_v4l2_buffer*,struct vb2_v4l2_buffer*,int) ;
 int FUNC_9 (struct vb2_v4l2_buffer*,int ) ;
 struct vb2_v4l2_buffer* FUNC_10 (int ) ;
 struct vb2_v4l2_buffer* FUNC_11 (int ) ;
 struct vb2_v4l2_buffer* FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct coda_ctx *VAR_8)
{
 struct vb2_v4l2_buffer *VAR_9, *VAR_10;
 struct coda_dev *VAR_11 = VAR_8->dev;
 u32 VAR_12, VAR_13;






 FUNC_5(&VAR_8->wakeup_mutex);
 VAR_9 = FUNC_12(VAR_8->fh.m2m_ctx);
 VAR_10 = FUNC_11(VAR_8->fh.m2m_ctx);

 FUNC_7(VAR_8, VAR_10);


 VAR_13 = FUNC_4(VAR_11, VAR_0);
 VAR_12 = FUNC_4(VAR_11, FUNC_0(VAR_8->reg_idx));


 if (VAR_10->sequence == 0 ||
     VAR_9->flags & VAR_4) {
  FUNC_13(&VAR_10->vb2_buf, 0, VAR_12 - VAR_13 +
     VAR_8->vpu_header_size[0] +
     VAR_8->vpu_header_size[1] +
     VAR_8->vpu_header_size[2]);
 } else {
  FUNC_13(&VAR_10->vb2_buf, 0, VAR_12 - VAR_13);
 }

 FUNC_1(1, VAR_8, "frame size = %u\n", VAR_12 - VAR_13);

 FUNC_4(VAR_11, VAR_2);
 FUNC_4(VAR_11, VAR_1);

 VAR_10->flags &= ~(VAR_4 |
       VAR_6 |
       VAR_5);
 if (FUNC_4(VAR_11, VAR_3) == 0)
  VAR_10->flags |= VAR_4;
 else
  VAR_10->flags |= VAR_6;
 VAR_10->flags |= VAR_9->flags & VAR_5;

 FUNC_8(VAR_9, VAR_10, 0);

 FUNC_9(VAR_9, VAR_7);

 VAR_10 = FUNC_10(VAR_8->fh.m2m_ctx);
 FUNC_3(VAR_8, VAR_10, VAR_7);
 FUNC_6(&VAR_8->wakeup_mutex);

 VAR_8->gopcounter--;
 if (VAR_8->gopcounter < 0)
  VAR_8->gopcounter = VAR_8->params.gop_size - 1;

 FUNC_1(1, VAR_8, "job finished: encoded %c frame (%d)%s\n",
   FUNC_2(VAR_10->flags), VAR_10->sequence,
   (VAR_10->flags & VAR_5) ? " (last)" : "");
}
