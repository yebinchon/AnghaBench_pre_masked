
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpbe_device {int current_out_index; struct vpbe_config* cfg; } ;
struct vpbe_config {int num_outputs; TYPE_2__* outputs; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ output; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vpbe_device*,int) ;

__attribute__((used)) static int FUNC_2(struct vpbe_device *VAR_1)
{
 struct vpbe_config *VAR_2 = VAR_1->cfg;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_outputs; VAR_3++) {
  if (!FUNC_0(VAR_0,
       VAR_2->outputs[VAR_3].output.name)) {
   int VAR_4 = FUNC_1(VAR_1, VAR_3);

   if (!VAR_4)
    VAR_1->current_out_index = VAR_3;
   return VAR_4;
  }
 }
 return 0;
}
