
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct video_device {int lock; } ;
struct TYPE_9__ {int lock; int m2m_dev; } ;
struct TYPE_10__ {int lock; int m2m_dev; struct video_device vfd; } ;
struct TYPE_13__ {int lock; int m2m_dev; struct video_device vfd; } ;
struct vicodec_dev {TYPE_1__ stateful_dec; TYPE_2__ stateless_dec; TYPE_5__ stateful_enc; } ;
struct TYPE_14__ {void* m2m_ctx; struct v4l2_ctrl_handler* ctrl_handler; } ;
struct TYPE_12__ {int colorspace; } ;
struct v4l2_ctrl_handler {int error; } ;
struct vicodec_ctx {int is_enc; int is_stateless; TYPE_6__ fh; int * lock; TYPE_4__ state; TYPE_3__* q_data; struct v4l2_ctrl_handler hdl; struct vicodec_dev* dev; } ;
struct v4l2_fwht_pixfmt_info {int sizeimage_mult; int sizeimage_div; } ;
struct fwht_cframe_hdr {int dummy; } ;
struct file {TYPE_6__* private_data; } ;
struct TYPE_11__ {int coded_width; int coded_height; int visible_width; int visible_height; unsigned int sizeimage; struct v4l2_fwht_pixfmt_info const* info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_2 (struct vicodec_ctx*) ;
 struct vicodec_ctx* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct v4l2_fwht_pixfmt_info const VAR_10 ;
 struct v4l2_fwht_pixfmt_info const VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct v4l2_ctrl_handler*) ;
 int FUNC_7 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_8 (struct v4l2_ctrl_handler*) ;
 int FUNC_9 (struct v4l2_ctrl_handler*,int *,int *) ;
 int FUNC_10 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*,struct video_device*) ;
 struct v4l2_fwht_pixfmt_info* FUNC_14 (int ) ;
 void* FUNC_15 (int ,struct vicodec_ctx*,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 struct video_device* FUNC_16 (struct file*) ;
 struct vicodec_dev* FUNC_17 (struct file*) ;

__attribute__((used)) static int FUNC_18(struct file *VAR_15)
{
 const struct v4l2_fwht_pixfmt_info *VAR_16 = FUNC_14(0);
 struct video_device *VAR_17 = FUNC_16(VAR_15);
 struct vicodec_dev *VAR_18 = FUNC_17(VAR_15);
 struct vicodec_ctx *VAR_19 = ((void*)0);
 struct v4l2_ctrl_handler *VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 int VAR_23 = 0;

 if (FUNC_4(VAR_17->lock))
  return -VAR_1;
 VAR_19 = FUNC_3(sizeof(*VAR_19), VAR_2);
 if (!VAR_19) {
  VAR_23 = -VAR_0;
  goto open_unlock;
 }

 if (VAR_17 == &VAR_18->stateful_enc.vfd)
  VAR_19->is_enc = 1;
 else if (VAR_17 == &VAR_18->stateless_dec.vfd)
  VAR_19->is_stateless = 1;

 FUNC_13(&VAR_19->fh, FUNC_16(VAR_15));
 VAR_15->private_data = &VAR_19->fh;
 VAR_19->dev = VAR_18;
 VAR_20 = &VAR_19->hdl;
 FUNC_7(VAR_20, 5);
 FUNC_10(VAR_20, &VAR_13, VAR_6,
     1, 16, 1, 10);
 FUNC_10(VAR_20, &VAR_13, VAR_3,
     1, 31, 1, 20);
 FUNC_10(VAR_20, &VAR_13, VAR_4,
     1, 31, 1, 20);
 if (VAR_19->is_enc)
  FUNC_10(VAR_20, &VAR_13,
      VAR_5, 1, 1, 1, 1);
 if (VAR_19->is_stateless)
  FUNC_9(VAR_20, &VAR_14, ((void*)0));
 if (VAR_20->error) {
  VAR_23 = VAR_20->error;
  FUNC_6(VAR_20);
  FUNC_2(VAR_19);
  goto open_unlock;
 }
 VAR_19->fh.ctrl_handler = VAR_20;
 FUNC_8(VAR_20);

 if (VAR_19->is_enc)
  VAR_19->q_data[VAR_9].info = VAR_16;
 else if (VAR_19->is_stateless)
  VAR_19->q_data[VAR_9].info = &VAR_11;
 else
  VAR_19->q_data[VAR_9].info = &VAR_10;
 VAR_19->q_data[VAR_9].coded_width = 1280;
 VAR_19->q_data[VAR_9].coded_height = 720;
 VAR_19->q_data[VAR_9].visible_width = 1280;
 VAR_19->q_data[VAR_9].visible_height = 720;
 VAR_21 = 1280 * 720 * VAR_16->sizeimage_mult / VAR_16->sizeimage_div;
 VAR_22 = 1280 * 720 * VAR_10.sizeimage_mult /
     VAR_10.sizeimage_div;
 if (VAR_19->is_enc)
  VAR_19->q_data[VAR_9].sizeimage = VAR_21;
 else if (VAR_19->is_stateless)
  VAR_19->q_data[VAR_9].sizeimage = VAR_22;
 else
  VAR_19->q_data[VAR_9].sizeimage =
   VAR_22 + sizeof(struct fwht_cframe_hdr);
 VAR_19->q_data[VAR_8] = VAR_19->q_data[VAR_9];
 if (VAR_19->is_enc) {
  VAR_19->q_data[VAR_8].info = &VAR_10;
  VAR_19->q_data[VAR_8].sizeimage =
   VAR_22 + sizeof(struct fwht_cframe_hdr);
 } else {
  VAR_19->q_data[VAR_8].info = VAR_16;
  VAR_19->q_data[VAR_8].sizeimage = VAR_21;
 }

 VAR_19->state.colorspace = VAR_7;

 if (VAR_19->is_enc) {
  VAR_19->fh.m2m_ctx = FUNC_15(VAR_18->stateful_enc.m2m_dev,
          VAR_19, &VAR_12);
  VAR_19->lock = &VAR_18->stateful_enc.lock;
 } else if (VAR_19->is_stateless) {
  VAR_19->fh.m2m_ctx = FUNC_15(VAR_18->stateless_dec.m2m_dev,
          VAR_19, &VAR_12);
  VAR_19->lock = &VAR_18->stateless_dec.lock;
 } else {
  VAR_19->fh.m2m_ctx = FUNC_15(VAR_18->stateful_dec.m2m_dev,
          VAR_19, &VAR_12);
  VAR_19->lock = &VAR_18->stateful_dec.lock;
 }

 if (FUNC_0(VAR_19->fh.m2m_ctx)) {
  VAR_23 = FUNC_1(VAR_19->fh.m2m_ctx);

  FUNC_6(VAR_20);
  FUNC_12(&VAR_19->fh);
  FUNC_2(VAR_19);
  goto open_unlock;
 }

 FUNC_11(&VAR_19->fh);

open_unlock:
 FUNC_5(VAR_17->lock);
 return VAR_23;
}
