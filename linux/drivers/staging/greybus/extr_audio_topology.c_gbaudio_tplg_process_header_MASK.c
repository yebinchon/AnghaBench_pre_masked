
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbaudio_module_info {unsigned long dai_offset; unsigned long control_offset; unsigned long widget_offset; unsigned long route_offset; int dev; int num_dapm_routes; int num_dapm_widgets; int num_controls; } ;
struct gb_audio_topology {int size_widgets; int size_controls; int size_dais; int data; int num_routes; int num_widgets; int num_controls; } ;


 int FUNC_0 (int ,char*,unsigned long) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gbaudio_module_info *VAR_0,
           struct gb_audio_topology *VAR_1)
{

 VAR_0->num_controls = VAR_1->num_controls;
 VAR_0->num_dapm_widgets = VAR_1->num_widgets;
 VAR_0->num_dapm_routes = VAR_1->num_routes;


 VAR_0->dai_offset = (unsigned long)&VAR_1->data;
 VAR_0->control_offset = VAR_0->dai_offset +
     FUNC_1(VAR_1->size_dais);
 VAR_0->widget_offset = VAR_0->control_offset +
     FUNC_1(VAR_1->size_controls);
 VAR_0->route_offset = VAR_0->widget_offset +
     FUNC_1(VAR_1->size_widgets);

 FUNC_0(VAR_0->dev, "DAI offset is 0x%lx\n", VAR_0->dai_offset);
 FUNC_0(VAR_0->dev, "control offset is %lx\n",
  VAR_0->control_offset);
 FUNC_0(VAR_0->dev, "widget offset is %lx\n", VAR_0->widget_offset);
 FUNC_0(VAR_0->dev, "route offset is %lx\n", VAR_0->route_offset);

 return 0;
}
