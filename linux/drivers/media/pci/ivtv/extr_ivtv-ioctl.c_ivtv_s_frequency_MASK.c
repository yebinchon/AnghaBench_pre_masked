
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct TYPE_3__ {scalar_t__ vfl_dir; } ;
struct ivtv_stream {TYPE_1__ vdev; } ;
struct ivtv {struct ivtv_stream* streams; } ;
struct file {int dummy; } ;
struct TYPE_4__ {size_t type; struct ivtv* itv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 TYPE_2__* FUNC_1 (void*) ;
 int FUNC_2 (struct ivtv*,int ,int ,struct v4l2_frequency const*) ;
 int FUNC_3 (struct ivtv*) ;
 int FUNC_4 (struct ivtv*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct file *VAR_4, void *VAR_5, const struct v4l2_frequency *VAR_6)
{
 struct ivtv *VAR_7 = FUNC_1(VAR_5)->itv;
 struct ivtv_stream *VAR_8 = &VAR_7->streams[FUNC_1(VAR_5)->type];

 if (VAR_8->vdev.vfl_dir)
  return -VAR_1;
 if (VAR_6->tuner != 0)
  return -VAR_0;

 FUNC_3(VAR_7);
 FUNC_0("v4l2 ioctl: set frequency %d\n", VAR_6->frequency);
 FUNC_2(VAR_7, VAR_3, VAR_2, VAR_6);
 FUNC_4(VAR_7);
 return 0;
}
