
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx {int * sbutton_input_dev; TYPE_1__* intf; scalar_t__ num_button_polling_addresses; int buttons_query_work; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct em28xx *VAR_0)
{

 FUNC_0(&VAR_0->buttons_query_work);

 VAR_0->num_button_polling_addresses = 0;

 if (VAR_0->sbutton_input_dev) {
  FUNC_1(&VAR_0->intf->dev, "Deregistering snapshot button\n");
  FUNC_2(VAR_0->sbutton_input_dev);
  VAR_0->sbutton_input_dev = ((void*)0);
 }
}
