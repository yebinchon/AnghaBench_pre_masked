
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct file {TYPE_3__* private_data; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int m2m_ctx; int * ctrl_handler; } ;
struct TYPE_6__ {int numerator; int denominator; } ;
struct amvdec_session {int width; int height; int m2m_dev; TYPE_3__ fh; int m2m_ctx; int ctrl_handler; int ts_spinlock; int bufs_recycle_lock; int lock; int esparser_queue_work; int bufs_recycle; int timestamps; TYPE_2__ pixelaspect; struct amvdec_format const* fmt_out; int pixfmt_cap; struct amvdec_core* core; } ;
struct amvdec_format {int * pixfmts_cap; } ;
struct amvdec_core {int vdev_dec; TYPE_1__* platform; struct device* dev; } ;
struct TYPE_5__ {struct amvdec_format* formats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int VAR_2 ;
 int FUNC_5 (struct amvdec_session*) ;
 struct amvdec_session* FUNC_6 (int,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (int ,struct amvdec_session*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct amvdec_session*) ;
 int VAR_4 ;
 struct amvdec_core* FUNC_15 (struct file*) ;

__attribute__((used)) static int FUNC_16(struct file *VAR_5)
{
 struct amvdec_core *VAR_6 = FUNC_15(VAR_5);
 struct device *VAR_7 = VAR_6->dev;
 const struct amvdec_format *VAR_8 = VAR_6->platform->formats;
 struct amvdec_session *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->core = VAR_6;

 VAR_9->m2m_dev = FUNC_12(&VAR_4);
 if (FUNC_2(VAR_9->m2m_dev)) {
  FUNC_4(VAR_7, "Fail to v4l2_m2m_init\n");
  VAR_10 = FUNC_3(VAR_9->m2m_dev);
  goto err_free_sess;
 }

 VAR_9->m2m_ctx = FUNC_11(VAR_9->m2m_dev, VAR_9, VAR_3);
 if (FUNC_2(VAR_9->m2m_ctx)) {
  FUNC_4(VAR_7, "Fail to v4l2_m2m_ctx_init\n");
  VAR_10 = FUNC_3(VAR_9->m2m_ctx);
  goto err_m2m_release;
 }

 VAR_10 = FUNC_14(VAR_9);
 if (VAR_10)
  goto err_m2m_release;

 VAR_9->pixfmt_cap = VAR_8[0].pixfmts_cap[0];
 VAR_9->fmt_out = &VAR_8[0];
 VAR_9->width = 1280;
 VAR_9->height = 720;
 VAR_9->pixelaspect.numerator = 1;
 VAR_9->pixelaspect.denominator = 1;

 FUNC_0(&VAR_9->timestamps);
 FUNC_0(&VAR_9->bufs_recycle);
 FUNC_1(&VAR_9->esparser_queue_work, VAR_2);
 FUNC_7(&VAR_9->lock);
 FUNC_7(&VAR_9->bufs_recycle_lock);
 FUNC_8(&VAR_9->ts_spinlock);

 FUNC_10(&VAR_9->fh, VAR_6->vdev_dec);
 VAR_9->fh.ctrl_handler = &VAR_9->ctrl_handler;
 FUNC_9(&VAR_9->fh);
 VAR_9->fh.m2m_ctx = VAR_9->m2m_ctx;
 VAR_5->private_data = &VAR_9->fh;

 return 0;

err_m2m_release:
 FUNC_13(VAR_9->m2m_dev);
err_free_sess:
 FUNC_5(VAR_9);
 return VAR_10;
}
