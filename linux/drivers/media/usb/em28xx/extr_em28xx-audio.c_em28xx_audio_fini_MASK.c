
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * sndcard; int wq_trigger; } ;
struct em28xx {scalar_t__ usb_audio_type; int ref; TYPE_2__ adev; TYPE_1__* intf; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct em28xx*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct em28xx *VAR_2)
{
 if (!VAR_2)
  return 0;

 if (VAR_2->usb_audio_type != VAR_0) {





  return 0;
 }

 FUNC_0(&VAR_2->intf->dev, "Closing audio extension\n");

 if (VAR_2->adev.sndcard) {
  FUNC_4(VAR_2->adev.sndcard);
  FUNC_2(&VAR_2->adev.wq_trigger);

  FUNC_1(VAR_2);

  FUNC_5(VAR_2->adev.sndcard);
  VAR_2->adev.sndcard = ((void*)0);
 }

 FUNC_3(&VAR_2->ref, VAR_1);
 return 0;
}
