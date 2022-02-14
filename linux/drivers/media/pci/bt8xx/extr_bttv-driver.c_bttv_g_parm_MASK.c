
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int timeperframe; int readbuffers; } ;
struct TYPE_4__ {TYPE_2__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_1__ parm; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {size_t tvnorm; } ;
struct TYPE_6__ {int v4l2_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
    struct v4l2_streamparm *VAR_6)
{
 struct bttv_fh *VAR_7 = VAR_5;
 struct bttv *VAR_8 = VAR_7->btv;

 if (VAR_6->type != VAR_1)
  return -VAR_0;
 VAR_6->parm.capture.readbuffers = VAR_3;
 FUNC_0(VAR_2[VAR_8->tvnorm].v4l2_id,
        &VAR_6->parm.capture.timeperframe);

 return 0;
}
