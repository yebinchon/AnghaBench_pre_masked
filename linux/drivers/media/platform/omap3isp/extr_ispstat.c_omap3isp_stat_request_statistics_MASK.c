
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int tv_usec; int tv_sec; } ;
struct omap3isp_stat_data {int buf_size; int frame_number; int config_counter; TYPE_3__ ts; } ;
struct TYPE_8__ {int tv_nsec; int tv_sec; } ;
struct ispstat_buffer {int empty; int buf_size; int frame_number; int config_counter; TYPE_4__ ts; } ;
struct TYPE_6__ {int name; } ;
struct ispstat {scalar_t__ state; int ioctl_lock; TYPE_2__ subdev; TYPE_1__* isp; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct ispstat_buffer*) ;
 int VAR_2 ;
 int FUNC_1 (struct ispstat_buffer*) ;
 int FUNC_2 (int ,char*,int ) ;
 struct ispstat_buffer* FUNC_3 (struct ispstat*,struct omap3isp_stat_data*) ;
 int FUNC_4 (struct ispstat*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct ispstat *VAR_3,
         struct omap3isp_stat_data *VAR_4)
{
 struct ispstat_buffer *VAR_5;

 if (VAR_3->state != VAR_1) {
  FUNC_2(VAR_3->isp->dev, "%s: engine not enabled.\n",
   VAR_3->subdev.name);
  return -VAR_0;
 }

 FUNC_5(&VAR_3->ioctl_lock);
 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (FUNC_0(VAR_5)) {
  FUNC_6(&VAR_3->ioctl_lock);
  return FUNC_1(VAR_5);
 }

 VAR_4->ts.tv_sec = VAR_5->ts.tv_sec;
 VAR_4->ts.tv_usec = VAR_5->ts.tv_nsec / VAR_2;
 VAR_4->config_counter = VAR_5->config_counter;
 VAR_4->frame_number = VAR_5->frame_number;
 VAR_4->buf_size = VAR_5->buf_size;

 VAR_5->empty = 1;
 FUNC_4(VAR_3);
 FUNC_6(&VAR_3->ioctl_lock);

 return 0;
}
