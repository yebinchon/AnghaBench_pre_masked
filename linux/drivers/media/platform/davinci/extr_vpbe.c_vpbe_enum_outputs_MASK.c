
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpbe_device {struct vpbe_config* cfg; } ;
struct vpbe_config {unsigned int num_outputs; TYPE_1__* outputs; } ;
struct v4l2_output {unsigned int index; } ;
struct TYPE_2__ {struct v4l2_output output; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vpbe_device *VAR_1,
        struct v4l2_output *VAR_2)
{
 struct vpbe_config *VAR_3 = VAR_1->cfg;
 unsigned int VAR_4 = VAR_2->index;

 if (VAR_4 >= VAR_3->num_outputs)
  return -VAR_0;

 *VAR_2 = VAR_3->outputs[VAR_4].output;
 VAR_2->index = VAR_4;

 return 0;
}
