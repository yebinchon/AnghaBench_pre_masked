
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_IR {int polling; int work; } ;
struct em28xx {int button_polling_interval; int buttons_query_work; scalar_t__ num_button_polling_addresses; TYPE_1__* intf; scalar_t__ is_audio_only; struct em28xx_IR* ir; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_0)
{
 struct em28xx_IR *VAR_1 = VAR_0->ir;

 if (VAR_0->is_audio_only)
  return 0;

 FUNC_0(&VAR_0->intf->dev, "Resuming input extension\n");




 if (VAR_1)
  FUNC_2(&VAR_1->work, FUNC_1(VAR_1->polling));
 if (VAR_0->num_button_polling_addresses)
  FUNC_2(&VAR_0->buttons_query_work,
          FUNC_1(VAR_0->button_polling_interval));
 return 0;
}
