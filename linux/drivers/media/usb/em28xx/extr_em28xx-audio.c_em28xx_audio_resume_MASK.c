
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int wq_trigger; } ;
struct em28xx {scalar_t__ usb_audio_type; TYPE_2__ adev; TYPE_1__* intf; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_1)
{
 if (!VAR_1)
  return 0;

 if (VAR_1->usb_audio_type != VAR_0)
  return 0;

 FUNC_0(&VAR_1->intf->dev, "Resuming audio extension\n");

 FUNC_1(&VAR_1->adev.wq_trigger);
 return 0;
}
