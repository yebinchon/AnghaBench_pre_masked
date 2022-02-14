
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int clipcount; int * clips; } ;
struct TYPE_3__ {TYPE_2__ win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct v4l2_clip {int dummy; } ;
struct saa7134_dev {int nclips; void* overlay_owner; int slock; int clips; TYPE_2__ win; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct saa7134_dev*) ;
 int FUNC_5 (struct saa7134_dev*) ;
 int FUNC_6 (struct saa7134_dev*,TYPE_2__*,int) ;
 struct saa7134_dev* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3, void *VAR_4,
     struct v4l2_format *VAR_5)
{
 struct saa7134_dev *VAR_6 = FUNC_7(VAR_3);
 int VAR_7;
 unsigned long VAR_8;

 if (VAR_2 > 0) {
  FUNC_1("V4L2_BUF_TYPE_VIDEO_OVERLAY: no_overlay\n");
  return -VAR_1;
 }
 if (VAR_5->fmt.win.clips == ((void*)0))
  VAR_5->fmt.win.clipcount = 0;
 VAR_7 = FUNC_6(VAR_6, &VAR_5->fmt.win, 1);
 if (0 != VAR_7)
  return VAR_7;

 VAR_6->win = VAR_5->fmt.win;
 VAR_6->nclips = VAR_5->fmt.win.clipcount;

 if (FUNC_0(VAR_6->clips, VAR_5->fmt.win.clips,
      sizeof(struct v4l2_clip) * VAR_6->nclips))
  return -VAR_0;

 if (VAR_4 == VAR_6->overlay_owner) {
  FUNC_2(&VAR_6->slock, VAR_8);
  FUNC_5(VAR_6);
  FUNC_4(VAR_6);
  FUNC_3(&VAR_6->slock, VAR_8);
 }

 return 0;
}
