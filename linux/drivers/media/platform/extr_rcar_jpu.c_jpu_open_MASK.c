
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_9__ {int m2m_ctx; int * ctrl_handler; } ;
struct TYPE_8__ {int format; int fmtinfo; } ;
struct TYPE_7__ {int format; int fmtinfo; } ;
struct jpu_ctx {int encoder; TYPE_3__ fh; TYPE_2__ cap_q; TYPE_1__ out_q; struct jpu* jpu; int ctrl_handler; } ;
struct jpu {scalar_t__ ref_count; int mutex; int clk; int m2m_dev; struct video_device vfd_encoder; } ;
struct file {TYPE_3__* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct jpu_ctx*,int *,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct jpu_ctx*) ;
 int VAR_5 ;
 int FUNC_6 (struct jpu*) ;
 int FUNC_7 (struct jpu_ctx*) ;
 struct jpu_ctx* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,struct video_device*) ;
 int FUNC_15 (int ,struct jpu_ctx*,int ) ;
 struct video_device* FUNC_16 (struct file*) ;
 struct jpu* FUNC_17 (struct file*) ;

__attribute__((used)) static int FUNC_18(struct file *VAR_6)
{
 struct jpu *VAR_7 = FUNC_17(VAR_6);
 struct video_device *VAR_8 = FUNC_16(VAR_6);
 struct jpu_ctx *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 FUNC_14(&VAR_9->fh, VAR_8);
 VAR_9->fh.ctrl_handler = &VAR_9->ctrl_handler;
 VAR_6->private_data = &VAR_9->fh;
 FUNC_11(&VAR_9->fh);

 VAR_9->jpu = VAR_7;
 VAR_9->encoder = VAR_8 == &VAR_7->vfd_encoder;

 FUNC_2(VAR_9, &VAR_9->out_q.fmtinfo, &VAR_9->out_q.format,
        VAR_4);
 FUNC_2(VAR_9, &VAR_9->cap_q.fmtinfo, &VAR_9->cap_q.format,
        VAR_3);

 VAR_9->fh.m2m_ctx = FUNC_15(VAR_7->m2m_dev, VAR_9, VAR_5);
 if (FUNC_0(VAR_9->fh.m2m_ctx)) {
  VAR_10 = FUNC_1(VAR_9->fh.m2m_ctx);
  goto v4l_prepare_rollback;
 }

 VAR_10 = FUNC_5(VAR_9);
 if (VAR_10 < 0)
  goto v4l_prepare_rollback;

 if (FUNC_9(&VAR_7->mutex)) {
  VAR_10 = -VAR_1;
  goto v4l_prepare_rollback;
 }

 if (VAR_7->ref_count == 0) {
  VAR_10 = FUNC_4(VAR_7->clk);
  if (VAR_10 < 0)
   goto device_prepare_rollback;

  VAR_10 = FUNC_6(VAR_7);
  if (VAR_10)
   goto jpu_reset_rollback;
 }

 VAR_7->ref_count++;

 FUNC_10(&VAR_7->mutex);
 return 0;

jpu_reset_rollback:
 FUNC_3(VAR_7->clk);
device_prepare_rollback:
 FUNC_10(&VAR_7->mutex);
v4l_prepare_rollback:
 FUNC_12(&VAR_9->fh);
 FUNC_13(&VAR_9->fh);
 FUNC_7(VAR_9);
 return VAR_10;
}
