
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_device {scalar_t__ vfl_type; } ;
struct file {struct bttv_fh* private_data; } ;
struct TYPE_4__ {scalar_t__ setup_ok; } ;
struct bttv_fh {int type; int do_crop; int fh; int vbi_fmt; int vbi; int cap; TYPE_1__ ov; } ;
struct bttv_buffer {int dummy; } ;
struct TYPE_6__ {TYPE_2__* pci; int nr; } ;
struct bttv {int tvnorm; int mute; int input; int lock; int s_lock; TYPE_3__ c; struct bttv_fh init; int users; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bttv*,int ) ;
 int FUNC_2 (struct bttv*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*,int ,...) ;
 struct bttv_fh* FUNC_5 (int,int ) ;
 int VAR_11 ;
 int FUNC_6 (struct bttv*,int ,int ) ;
 int FUNC_7 (struct bttv*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,struct video_device*) ;
 int * VAR_12 ;
 struct video_device* FUNC_11 (struct file*) ;
 int FUNC_12 (struct video_device*) ;
 struct bttv* FUNC_13 (struct file*) ;
 int FUNC_14 (int *,int *,int *,int *,int,int ,int,struct bttv_fh*,int *) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_13)
{
 struct video_device *VAR_14 = FUNC_11(VAR_13);
 struct bttv *VAR_15 = FUNC_13(VAR_13);
 struct bttv_fh *VAR_16;
 enum v4l2_buf_type VAR_17 = 0;

 FUNC_4("open dev=%s\n", FUNC_12(VAR_14));

 if (VAR_14->vfl_type == VAR_7) {
  VAR_17 = VAR_4;
 } else if (VAR_14->vfl_type == VAR_8) {
  VAR_17 = VAR_3;
 } else {
  FUNC_0(1);
  return -VAR_0;
 }

 FUNC_4("%d: open called (type=%s)\n",
  VAR_15->c.nr, VAR_12[VAR_17]);


 VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_2);
 if (FUNC_8(!VAR_16))
  return -VAR_1;
 VAR_15->users++;
 VAR_13->private_data = VAR_16;

 *VAR_16 = VAR_15->init;
 FUNC_10(&VAR_16->fh, VAR_14);

 VAR_16->type = VAR_17;
 VAR_16->ov.setup_ok = 0;

 FUNC_14(&VAR_16->cap, &VAR_10,
       &VAR_15->c.pci->dev, &VAR_15->s_lock,
       VAR_4,
       VAR_5,
       sizeof(struct bttv_buffer),
       VAR_16, &VAR_15->lock);
 FUNC_14(&VAR_16->vbi, &VAR_9,
       &VAR_15->c.pci->dev, &VAR_15->s_lock,
       VAR_3,
       VAR_6,
       sizeof(struct bttv_buffer),
       VAR_16, &VAR_15->lock);
 FUNC_7(VAR_15,VAR_15->tvnorm);
 FUNC_6(VAR_15, VAR_15->input, VAR_15->tvnorm);
 FUNC_1(VAR_15, VAR_15->mute);
 VAR_16->do_crop = !VAR_11;




 FUNC_3(&VAR_16->vbi_fmt, VAR_15->tvnorm);

 FUNC_2(VAR_15);
 FUNC_9(&VAR_16->fh);
 return 0;
}
