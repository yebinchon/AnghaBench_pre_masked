
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct file {struct bttv_fh* private_data; } ;
struct bttv_fh {int fh; } ;
struct TYPE_2__ {int nr; } ;
struct bttv {int mute; int radio_user; struct bttv_fh init; TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bttv*,int ) ;
 int FUNC_1 (char*,int ) ;
 struct bttv_fh* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct video_device*) ;
 struct video_device* FUNC_6 (struct file*) ;
 int FUNC_7 (struct video_device*) ;
 struct bttv* FUNC_8 (struct file*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_2)
{
 struct video_device *VAR_3 = FUNC_6(VAR_2);
 struct bttv *VAR_4 = FUNC_8(VAR_2);
 struct bttv_fh *VAR_5;

 FUNC_1("open dev=%s\n", FUNC_7(VAR_3));

 FUNC_1("%d: open called (radio)\n", VAR_4->c.nr);


 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (FUNC_3(!VAR_5))
  return -VAR_0;
 VAR_2->private_data = VAR_5;
 *VAR_5 = VAR_4->init;
 FUNC_5(&VAR_5->fh, VAR_3);

 VAR_4->radio_user++;
 FUNC_0(VAR_4, VAR_4->mute);

 FUNC_4(&VAR_5->fh);

 return 0;
}
