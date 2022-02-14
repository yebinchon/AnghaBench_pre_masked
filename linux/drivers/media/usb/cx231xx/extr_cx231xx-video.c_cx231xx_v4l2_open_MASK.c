
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_device {int vfl_type; } ;
struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {int type; int fh; int vb_vidq; struct cx231xx* dev; } ;
struct cx231xx_buffer {int dummy; } ;
struct TYPE_6__ {int slock; } ;
struct TYPE_5__ {int slock; } ;
struct TYPE_4__ {scalar_t__ external_av; } ;
struct cx231xx {scalar_t__ users; int video_input; int lock; TYPE_3__ vbi_mode; TYPE_2__ video_mode; TYPE_1__ board; int dev; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int FUNC_0 (struct cx231xx*,int ,int ) ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (struct cx231xx*,int ,int ) ;
 scalar_t__ FUNC_3 (struct cx231xx*,int ) ;
 int FUNC_4 (struct cx231xx*,int ) ;
 int FUNC_5 (struct cx231xx*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ VAR_15 ;
 int FUNC_8 (struct cx231xx_fh*) ;
 struct cx231xx_fh* FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct video_device*) ;
 int * VAR_18 ;
 struct video_device* FUNC_14 (struct file*) ;
 int FUNC_15 (struct video_device*) ;
 struct cx231xx* FUNC_16 (struct file*) ;
 int FUNC_17 (int *,int *,int *,int *,int,int ,int,struct cx231xx_fh*,int *) ;

__attribute__((used)) static int FUNC_18(struct file *VAR_19)
{
 int VAR_20 = 0;
 struct video_device *VAR_21 = FUNC_14(VAR_19);
 struct cx231xx *VAR_22 = FUNC_16(VAR_19);
 struct cx231xx_fh *VAR_23;
 enum v4l2_buf_type VAR_24 = 0;

 switch (VAR_21->vfl_type) {
 case 130:
  VAR_24 = VAR_10;
  break;
 case 128:
  VAR_24 = VAR_9;
  break;
 case 129:
  VAR_20 = 1;
  break;
 default:
  return -VAR_2;
 }

 FUNC_6("open dev=%s type=%s users=%d\n",
    FUNC_15(VAR_21), VAR_18[VAR_24],
    VAR_22->users);
 VAR_23 = FUNC_9(sizeof(struct cx231xx_fh), VAR_5);
 if (!VAR_23)
  return -VAR_3;
 if (FUNC_10(&VAR_22->lock)) {
  FUNC_8(VAR_23);
  return -VAR_4;
 }
 VAR_23->dev = VAR_22;
 VAR_23->type = VAR_24;
 VAR_19->private_data = VAR_23;
 FUNC_13(&VAR_23->fh, VAR_21);

 if (VAR_23->type == VAR_10 && VAR_22->users == 0) {

  if (VAR_22->board.external_av)
   FUNC_4(VAR_22,
     VAR_8);
  else
   FUNC_4(VAR_22, VAR_7);






  FUNC_5(VAR_22);



  FUNC_1(VAR_22);


  VAR_22->video_input = VAR_22->video_input > 2 ? 2 : VAR_22->video_input;

 }
 if (VAR_20) {
  FUNC_6("video_open: setting radio device\n");



  FUNC_0(VAR_22, VAR_17, VAR_16);
 }

 VAR_22->users++;

 if (VAR_23->type == VAR_10)
  FUNC_17(&VAR_23->vb_vidq, &VAR_14,
         ((void*)0), &VAR_22->video_mode.slock,
         VAR_23->type, VAR_11,
         sizeof(struct cx231xx_buffer),
         VAR_23, &VAR_22->lock);
 if (VAR_23->type == VAR_9) {


  FUNC_2(VAR_22, VAR_6, 0);

  FUNC_17(&VAR_23->vb_vidq, &VAR_13,
         ((void*)0), &VAR_22->vbi_mode.slock,
         VAR_23->type, VAR_12,
         sizeof(struct cx231xx_buffer),
         VAR_23, &VAR_22->lock);
 }
 FUNC_11(&VAR_22->lock);
 FUNC_12(&VAR_23->fh);

 return 0;
}
