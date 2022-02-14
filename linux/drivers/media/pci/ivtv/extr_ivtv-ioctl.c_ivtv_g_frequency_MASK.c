
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_frequency {scalar_t__ tuner; } ;
struct TYPE_3__ {scalar_t__ vfl_dir; } ;
struct ivtv_stream {TYPE_1__ vdev; } ;
struct ivtv {struct ivtv_stream* streams; } ;
struct file {int dummy; } ;
struct TYPE_4__ {size_t type; struct ivtv* itv; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (void*) ;
 int VAR_2 ;
 int FUNC_1 (struct ivtv*,int ,int ,struct v4l2_frequency*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5, struct v4l2_frequency *VAR_6)
{
 struct ivtv *VAR_7 = FUNC_0(VAR_5)->itv;
 struct ivtv_stream *VAR_8 = &VAR_7->streams[FUNC_0(VAR_5)->type];

 if (VAR_8->vdev.vfl_dir)
  return -VAR_1;
 if (VAR_6->tuner != 0)
  return -VAR_0;

 FUNC_1(VAR_7, VAR_3, VAR_2, VAR_6);
 return 0;
}
