
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* v4l2_check_dv_timings_fnc ) (struct v4l2_dv_timings const*,void*) ;
typedef int u32 ;
struct v4l2_bt_timings_cap {int capabilities; scalar_t__ min_height; scalar_t__ max_height; scalar_t__ min_width; scalar_t__ max_width; scalar_t__ min_pixelclock; scalar_t__ max_pixelclock; int standards; } ;
struct v4l2_dv_timings_cap {scalar_t__ type; struct v4l2_bt_timings_cap bt; } ;
struct v4l2_bt_timings {scalar_t__ height; scalar_t__ width; scalar_t__ pixelclock; int standards; scalar_t__ interlaced; } ;
struct v4l2_dv_timings {scalar_t__ type; struct v4l2_bt_timings bt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

bool FUNC_0(const struct v4l2_dv_timings *VAR_4,
      const struct v4l2_dv_timings_cap *VAR_5,
      v4l2_check_dv_timings_fnc VAR_6,
      void *VAR_7)
{
 const struct v4l2_bt_timings *VAR_8 = &VAR_4->bt;
 const struct v4l2_bt_timings_cap *VAR_9 = &VAR_5->bt;
 u32 VAR_10 = VAR_9->capabilities;

 if (VAR_4->type != VAR_0)
  return 0;
 if (VAR_4->type != VAR_5->type ||
     VAR_8->height < VAR_9->min_height ||
     VAR_8->height > VAR_9->max_height ||
     VAR_8->width < VAR_9->min_width ||
     VAR_8->width > VAR_9->max_width ||
     VAR_8->pixelclock < VAR_9->min_pixelclock ||
     VAR_8->pixelclock > VAR_9->max_pixelclock ||
     (!(VAR_10 & VAR_1) &&
      VAR_9->standards && VAR_8->standards &&
      !(VAR_8->standards & VAR_9->standards)) ||
     (VAR_8->interlaced && !(VAR_10 & VAR_2)) ||
     (!VAR_8->interlaced && !(VAR_10 & VAR_3)))
  return 0;
 return VAR_6 == ((void*)0) || VAR_6(VAR_4, VAR_7);
}
