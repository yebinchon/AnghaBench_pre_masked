
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx {TYPE_1__* intf; int has_video; scalar_t__ is_audio_only; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct em28xx*) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_0)
{
 if (VAR_0->is_audio_only)
  return 0;

 if (!VAR_0->has_video)
  return 0;

 FUNC_0(&VAR_0->intf->dev, "Suspending video extension\n");
 FUNC_1(VAR_0);
 return 0;
}
