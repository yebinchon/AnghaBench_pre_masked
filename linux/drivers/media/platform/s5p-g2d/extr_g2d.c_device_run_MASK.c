
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct vb2_v4l2_buffer {int vb2_buf; } ;
struct g2d_dev {int ctrl_lock; TYPE_2__* variant; int gate; struct g2d_ctx* curr; } ;
struct TYPE_10__ {scalar_t__ c_width; scalar_t__ c_height; } ;
struct TYPE_9__ {scalar_t__ c_width; scalar_t__ c_height; } ;
struct TYPE_7__ {int m2m_ctx; } ;
struct g2d_ctx {TYPE_4__ out; TYPE_3__ in; int flip; int rop; TYPE_1__ fh; struct g2d_dev* dev; } ;
struct TYPE_8__ {scalar_t__ hw_rev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct g2d_dev*) ;
 int FUNC_2 (struct g2d_dev*,int ) ;
 int FUNC_3 (struct g2d_dev*,int ) ;
 int FUNC_4 (struct g2d_dev*,TYPE_4__*) ;
 int FUNC_5 (struct g2d_dev*,int ) ;
 int FUNC_6 (struct g2d_dev*,int ) ;
 int FUNC_7 (struct g2d_dev*,int ) ;
 int FUNC_8 (struct g2d_dev*,TYPE_3__*) ;
 int FUNC_9 (struct g2d_dev*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_10 (struct g2d_dev*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 struct vb2_v4l2_buffer* FUNC_13 (int ) ;
 struct vb2_v4l2_buffer* FUNC_14 (int ) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static void FUNC_16(void *VAR_2)
{
 struct g2d_ctx *VAR_3 = VAR_2;
 struct g2d_dev *VAR_4 = VAR_3->dev;
 struct vb2_v4l2_buffer *VAR_5, *VAR_6;
 unsigned long VAR_7;
 u32 VAR_8 = 0;

 VAR_4->curr = VAR_3;

 VAR_5 = FUNC_14(VAR_3->fh.m2m_ctx);
 VAR_6 = FUNC_13(VAR_3->fh.m2m_ctx);

 FUNC_0(VAR_4->gate);
 FUNC_1(VAR_4);

 FUNC_11(&VAR_4->ctrl_lock, VAR_7);

 FUNC_8(VAR_4, &VAR_3->in);
 FUNC_7(VAR_4, FUNC_15(&VAR_5->vb2_buf, 0));

 FUNC_4(VAR_4, &VAR_3->out);
 FUNC_3(VAR_4, FUNC_15(&VAR_6->vb2_buf, 0));

 FUNC_6(VAR_4, VAR_3->rop);
 FUNC_5(VAR_4, VAR_3->flip);

 if (VAR_3->in.c_width != VAR_3->out.c_width ||
  VAR_3->in.c_height != VAR_3->out.c_height) {
  if (VAR_4->variant->hw_rev == VAR_1)
   VAR_8 |= VAR_0;
  else
   FUNC_9(VAR_4, &VAR_3->in, &VAR_3->out);
 }

 FUNC_2(VAR_4, VAR_8);
 FUNC_10(VAR_4);

 FUNC_12(&VAR_4->ctrl_lock, VAR_7);
}
