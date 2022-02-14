
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int vfl_type; } ;
struct tm6000_fh {int radio; int type; int fh; int vb_vidq; int height; int width; int fmt; struct tm6000_core* dev; } ;
struct TYPE_3__ {int active; int queued; } ;
struct tm6000_core {int radio; int v4l2_dev; int lock; int slock; int mode; TYPE_1__ vidq; int height; int width; int fourcc; int users; } ;
struct tm6000_buffer {int dummy; } ;
struct file {struct tm6000_fh* private_data; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_4__ {int fourcc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (struct tm6000_core*,int ,char*,...) ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tm6000_fh*) ;
 struct tm6000_fh* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int FUNC_5 (struct tm6000_core*) ;
 int FUNC_6 (struct tm6000_core*) ;
 int FUNC_7 (struct tm6000_core*) ;
 int FUNC_8 (struct tm6000_core*) ;
 int FUNC_9 (struct tm6000_core*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct video_device*) ;
 int * VAR_12 ;
 struct video_device* FUNC_14 (struct file*) ;
 int FUNC_15 (struct video_device*) ;
 struct tm6000_core* FUNC_16 (struct file*) ;
 int FUNC_17 (int *,int *,int *,int *,int,int ,int,struct tm6000_fh*,int *) ;

__attribute__((used)) static int FUNC_18(struct file *VAR_13)
{
 struct video_device *VAR_14 = FUNC_14(VAR_13);
 struct tm6000_core *VAR_15 = FUNC_16(VAR_13);
 struct tm6000_fh *VAR_16;
 enum v4l2_buf_type VAR_17 = VAR_5;
 int VAR_18;
 int VAR_19 = 0;

 FUNC_0(VAR_15, VAR_6, "tm6000: open called (dev=%s)\n",
  FUNC_15(VAR_14));

 switch (VAR_14->vfl_type) {
 case 130:
  VAR_17 = VAR_5;
  break;
 case 128:
  VAR_17 = VAR_4;
  break;
 case 129:
  VAR_19 = 1;
  break;
 default:
  return -VAR_0;
 }


 VAR_15->users++;

 FUNC_0(VAR_15, VAR_6, "open dev=%s type=%s users=%d\n",
  FUNC_15(VAR_14), VAR_12[VAR_17],
  VAR_15->users);


 VAR_16 = FUNC_3(sizeof(*VAR_16), VAR_2);
 if (((void*)0) == VAR_16) {
  VAR_15->users--;
  return -VAR_1;
 }

 FUNC_13(&VAR_16->fh, VAR_14);
 VAR_13->private_data = VAR_16;
 VAR_16->dev = VAR_15;
 VAR_16->radio = VAR_19;
 VAR_15->radio = VAR_19;
 VAR_16->type = VAR_17;
 VAR_15->fourcc = VAR_8[0].fourcc;

 VAR_16->fmt = FUNC_1(VAR_15->fourcc);

 FUNC_5(VAR_15);

 VAR_16->width = VAR_15->width;
 VAR_16->height = VAR_15->height;

 FUNC_0(VAR_15, VAR_6, "Open: fh=%p, dev=%p, dev->vidq=%p\n",
  VAR_16, VAR_15, &VAR_15->vidq);
 FUNC_0(VAR_15, VAR_6, "Open: list_empty queued=%d\n",
  FUNC_4(&VAR_15->vidq.queued));
 FUNC_0(VAR_15, VAR_6, "Open: list_empty active=%d\n",
  FUNC_4(&VAR_15->vidq.active));


 VAR_18 = FUNC_6(VAR_15);
 if (VAR_18 < 0) {
  FUNC_12(&VAR_16->fh);
  FUNC_2(VAR_16);
  return VAR_18;
 }

 VAR_15->mode = VAR_3;

 if (!VAR_16->radio) {
  FUNC_17(&VAR_16->vb_vidq, &VAR_10,
    ((void*)0), &VAR_15->slock,
    VAR_16->type,
    VAR_7,
    sizeof(struct tm6000_buffer), VAR_16, &VAR_15->lock);
 } else {
  FUNC_0(VAR_15, VAR_6, "video_open: setting radio device\n");
  FUNC_8(VAR_15);
  FUNC_10(&VAR_15->v4l2_dev, 0, VAR_11, VAR_9);
  FUNC_7(VAR_15);
  FUNC_9(VAR_15);
 }
 FUNC_11(&VAR_16->fh);

 return 0;
}
