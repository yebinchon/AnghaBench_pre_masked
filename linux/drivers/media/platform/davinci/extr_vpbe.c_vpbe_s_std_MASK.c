
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_8__ {int upper_margin; int left_margin; } ;
struct vpbe_device {int current_out_index; int current_sd_index; int lock; TYPE_4__ current_timings; struct osd_state* osd_device; int * encoders; struct vpbe_config* cfg; } ;
struct vpbe_config {TYPE_2__* outputs; } ;
struct TYPE_7__ {int (* set_top_margin ) (struct osd_state*,int ) ;int (* set_left_margin ) (struct osd_state*,int ) ;} ;
struct osd_state {TYPE_3__ ops; } ;
struct TYPE_5__ {int capabilities; } ;
struct TYPE_6__ {TYPE_1__ output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct osd_state*,int ) ;
 int FUNC_3 (struct osd_state*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct vpbe_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct vpbe_device *VAR_4, v4l2_std_id VAR_5)
{
 struct vpbe_config *VAR_6 = VAR_4->cfg;
 int VAR_7 = VAR_4->current_out_index;
 int VAR_8 = VAR_4->current_sd_index;
 int VAR_9;

 if (!(VAR_6->outputs[VAR_7].output.capabilities &
  VAR_1))
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_4, VAR_5);
 if (VAR_9)
  return VAR_9;

 FUNC_0(&VAR_4->lock);

 VAR_9 = FUNC_4(VAR_4->encoders[VAR_8], VAR_3,
          VAR_2, VAR_5);

 if (!VAR_9) {
  struct osd_state *VAR_10 = VAR_4->osd_device;

  VAR_10->ops.set_left_margin(VAR_10,
  VAR_4->current_timings.left_margin);
  VAR_10->ops.set_top_margin(VAR_10,
  VAR_4->current_timings.upper_margin);
 }
 FUNC_1(&VAR_4->lock);

 return VAR_9;
}
