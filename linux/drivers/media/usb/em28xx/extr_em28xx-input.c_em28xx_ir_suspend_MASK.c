
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx_IR {int work; } ;
struct em28xx {int buttons_query_work; TYPE_1__* intf; scalar_t__ is_audio_only; struct em28xx_IR* ir; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_0)
{
 struct em28xx_IR *VAR_1 = VAR_0->ir;

 if (VAR_0->is_audio_only)
  return 0;

 FUNC_1(&VAR_0->intf->dev, "Suspending input extension\n");
 if (VAR_1)
  FUNC_0(&VAR_1->work);
 FUNC_0(&VAR_0->buttons_query_work);





 return 0;
}
