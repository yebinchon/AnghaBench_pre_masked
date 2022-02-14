
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int ctrl_handler; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ v4l2_dev; } ;
struct bttv {TYPE_2__ c; } ;


 int FUNC_0 (struct bttv*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 struct video_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3)
{
 struct video_device *VAR_4 = FUNC_2(VAR_2);
 struct bttv_fh *VAR_5 = VAR_3;
 struct bttv *VAR_6 = VAR_5->btv;

 FUNC_1(VAR_4->ctrl_handler, VAR_6->c.v4l2_dev.name);
 FUNC_0(VAR_6, VAR_0, VAR_1);
 return 0;
}
