
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_ctrl {int dummy; } ;
struct et8ek8_sensor {int pixel_rate; struct v4l2_ctrl* exposure; TYPE_1__* current_reglist; } ;
struct et8ek8_mode {int max_exp; int pixel_clock; int width; int window_width; } ;
struct TYPE_2__ {struct et8ek8_mode mode; } ;


 int FUNC_0 (struct v4l2_ctrl*,int,int,int,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct et8ek8_sensor *VAR_0)
{
 struct v4l2_ctrl *VAR_1;
 struct et8ek8_mode *VAR_2 = &VAR_0->current_reglist->mode;

 u32 VAR_3, VAR_4, VAR_5;
 static const int VAR_6 = 8;

 VAR_1 = VAR_0->exposure;

 VAR_3 = 1;
 VAR_4 = VAR_2->max_exp;






 VAR_5 = ((VAR_2->pixel_clock + (1 << VAR_6) - 1) >> VAR_6) + VAR_2->width;
 VAR_5 = VAR_2->window_width * (VAR_5 - 1) / VAR_2->width;

 FUNC_0(VAR_1, VAR_3, VAR_4, VAR_3, VAR_4);
 FUNC_1(VAR_0->pixel_rate, VAR_5 << VAR_6);
}
