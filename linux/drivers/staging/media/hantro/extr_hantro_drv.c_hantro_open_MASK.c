
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct hantro_func {scalar_t__ id; } ;
struct hantro_dev {int m2m_dev; TYPE_1__* variant; } ;
struct TYPE_7__ {int * ctrl_handler; void* m2m_ctx; } ;
struct hantro_ctx {TYPE_2__ fh; int ctrl_handler; int buf_finish; struct hantro_dev* dev; } ;
struct file {TYPE_2__* private_data; } ;
struct TYPE_6__ {int codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct hantro_dev*,struct hantro_ctx*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct hantro_ctx*) ;
 struct hantro_func* FUNC_5 (struct video_device*) ;
 int FUNC_6 (struct hantro_ctx*) ;
 struct hantro_ctx* FUNC_7 (int,int ) ;
 int VAR_9 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,struct video_device*) ;
 void* FUNC_12 (int ,struct hantro_ctx*,int ) ;
 struct video_device* FUNC_13 (struct file*) ;
 struct hantro_dev* FUNC_14 (struct file*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(struct file *VAR_10)
{
 struct hantro_dev *VAR_11 = FUNC_14(VAR_10);
 struct video_device *VAR_12 = FUNC_13(VAR_10);
 struct hantro_func *VAR_13 = FUNC_5(VAR_12);
 struct hantro_ctx *VAR_14;
 int VAR_15, VAR_16;
 VAR_14 = FUNC_7(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->dev = VAR_11;
 if (VAR_13->id == VAR_6) {
  VAR_15 = VAR_11->variant->codec & VAR_4;
  VAR_14->buf_finish = VAR_8;
  VAR_14->fh.m2m_ctx = FUNC_12(VAR_11->m2m_dev, VAR_14,
          VAR_9);
 } else if (VAR_13->id == VAR_5) {
  VAR_15 = VAR_11->variant->codec & VAR_3;
  VAR_14->buf_finish = VAR_7;
  VAR_14->fh.m2m_ctx = FUNC_12(VAR_11->m2m_dev, VAR_14,
          VAR_9);
 } else {
  VAR_14->fh.m2m_ctx = FUNC_0(-VAR_0);
 }
 if (FUNC_1(VAR_14->fh.m2m_ctx)) {
  VAR_16 = FUNC_2(VAR_14->fh.m2m_ctx);
  FUNC_6(VAR_14);
  return VAR_16;
 }

 FUNC_11(&VAR_14->fh, VAR_12);
 VAR_10->private_data = &VAR_14->fh;
 FUNC_8(&VAR_14->fh);

 FUNC_4(VAR_14);

 VAR_16 = FUNC_3(VAR_11, VAR_14, VAR_15);
 if (VAR_16) {
  FUNC_15("Failed to set up controls\n");
  goto err_fh_free;
 }
 VAR_14->fh.ctrl_handler = &VAR_14->ctrl_handler;

 return 0;

err_fh_free:
 FUNC_9(&VAR_14->fh);
 FUNC_10(&VAR_14->fh);
 FUNC_6(VAR_14);
 return VAR_16;
}
