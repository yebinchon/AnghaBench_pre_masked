
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct s5p_jpeg_fmt {int dummy; } ;
struct TYPE_9__ {int m2m_ctx; int * ctrl_handler; } ;
struct TYPE_8__ {struct s5p_jpeg_fmt* fmt; } ;
struct TYPE_7__ {struct s5p_jpeg_fmt* fmt; } ;
struct s5p_jpeg_ctx {TYPE_3__ fh; TYPE_2__ cap_q; TYPE_1__ out_q; int scale_factor; int mode; struct s5p_jpeg* jpeg; int ctrl_handler; } ;
struct s5p_jpeg {int lock; int m2m_dev; struct video_device* vfd_encoder; } ;
struct file {TYPE_3__* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct s5p_jpeg_ctx*) ;
 struct s5p_jpeg_ctx* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_11 ;
 int FUNC_6 (struct s5p_jpeg_ctx*) ;
 struct s5p_jpeg_fmt* FUNC_7 (struct s5p_jpeg_ctx*,int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,struct video_device*) ;
 int FUNC_12 (int ,struct s5p_jpeg_ctx*,int ) ;
 struct video_device* FUNC_13 (struct file*) ;
 struct s5p_jpeg* FUNC_14 (struct file*) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_12)
{
 struct s5p_jpeg *VAR_13 = FUNC_14(VAR_12);
 struct video_device *VAR_14 = FUNC_13(VAR_12);
 struct s5p_jpeg_ctx *VAR_15;
 struct s5p_jpeg_fmt *VAR_16, *VAR_17;
 int VAR_18 = 0;

 VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_5);
 if (!VAR_15)
  return -VAR_0;

 if (FUNC_4(&VAR_13->lock)) {
  VAR_18 = -VAR_1;
  goto free;
 }

 FUNC_11(&VAR_15->fh, VAR_14);

 VAR_15->fh.ctrl_handler = &VAR_15->ctrl_handler;
 VAR_12->private_data = &VAR_15->fh;
 FUNC_8(&VAR_15->fh);

 VAR_15->jpeg = VAR_13;
 if (VAR_14 == VAR_13->vfd_encoder) {
  VAR_15->mode = VAR_7;
  VAR_16 = FUNC_7(VAR_15, VAR_9,
       VAR_4);
  VAR_17 = FUNC_7(VAR_15, VAR_8,
       VAR_3);
 } else {
  VAR_15->mode = VAR_6;
  VAR_16 = FUNC_7(VAR_15, VAR_8,
       VAR_4);
  VAR_17 = FUNC_7(VAR_15, VAR_10,
       VAR_3);
  VAR_15->scale_factor = VAR_2;
 }

 VAR_15->fh.m2m_ctx = FUNC_12(VAR_13->m2m_dev, VAR_15, VAR_11);
 if (FUNC_0(VAR_15->fh.m2m_ctx)) {
  VAR_18 = FUNC_1(VAR_15->fh.m2m_ctx);
  goto error;
 }

 VAR_15->out_q.fmt = VAR_16;
 VAR_15->cap_q.fmt = VAR_17;

 VAR_18 = FUNC_6(VAR_15);
 if (VAR_18 < 0)
  goto error;

 FUNC_5(&VAR_13->lock);
 return 0;

error:
 FUNC_9(&VAR_15->fh);
 FUNC_10(&VAR_15->fh);
 FUNC_5(&VAR_13->lock);
free:
 FUNC_2(VAR_15);
 return VAR_18;
}
