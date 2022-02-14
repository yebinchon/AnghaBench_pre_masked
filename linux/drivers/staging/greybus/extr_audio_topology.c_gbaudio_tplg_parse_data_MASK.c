
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbaudio_module_info {unsigned int jack_mask; unsigned int button_mask; int dev; scalar_t__ route_offset; scalar_t__ widget_offset; scalar_t__ control_offset; } ;
struct gb_audio_widget {int dummy; } ;
struct gb_audio_topology {int jack_type; } ;
struct gb_audio_route {int dummy; } ;
struct gb_audio_control {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct gbaudio_module_info*,struct gb_audio_topology*) ;
 int FUNC_3 (struct gbaudio_module_info*,struct gb_audio_control*) ;
 int FUNC_4 (struct gbaudio_module_info*,struct gb_audio_route*) ;
 int FUNC_5 (struct gbaudio_module_info*,struct gb_audio_widget*) ;
 unsigned int FUNC_6 (int ) ;

int FUNC_7(struct gbaudio_module_info *VAR_3,
       struct gb_audio_topology *VAR_4)
{
 int VAR_5;
 struct gb_audio_control *VAR_6;
 struct gb_audio_widget *VAR_7;
 struct gb_audio_route *VAR_8;
 unsigned int VAR_9;

 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_3->dev, "%d: Error in parsing topology header\n",
   VAR_5);
  return VAR_5;
 }


 VAR_6 = (struct gb_audio_control *)VAR_3->control_offset;
 VAR_5 = FUNC_3(VAR_3, VAR_6);
 if (VAR_5) {
  FUNC_1(VAR_3->dev,
   "%d: Error in parsing controls data\n", VAR_5);
  return VAR_5;
 }
 FUNC_0(VAR_3->dev, "Control parsing finished\n");


 VAR_7 = (struct gb_audio_widget *)VAR_3->widget_offset;
 VAR_5 = FUNC_5(VAR_3, VAR_7);
 if (VAR_5) {
  FUNC_1(VAR_3->dev,
   "%d: Error in parsing widgets data\n", VAR_5);
  return VAR_5;
 }
 FUNC_0(VAR_3->dev, "Widget parsing finished\n");


 VAR_8 = (struct gb_audio_route *)VAR_3->route_offset;
 VAR_5 = FUNC_4(VAR_3, VAR_8);
 if (VAR_5) {
  FUNC_1(VAR_3->dev,
   "%d: Error in parsing routes data\n", VAR_5);
  return VAR_5;
 }
 FUNC_0(VAR_3->dev, "Route parsing finished\n");


 VAR_9 = FUNC_6(VAR_4->jack_type);
 if (VAR_9) {
  VAR_3->jack_mask = VAR_9 & VAR_2;
  VAR_3->button_mask = VAR_9 & VAR_1;
 }

 return VAR_5;
}
