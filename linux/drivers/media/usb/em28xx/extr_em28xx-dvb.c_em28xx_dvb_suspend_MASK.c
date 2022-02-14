
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct em28xx_dvb {scalar_t__* fe; } ;
struct TYPE_3__ {int has_dvb; } ;
struct em28xx {TYPE_2__* intf; struct em28xx_dvb* dvb; TYPE_1__ board; scalar_t__ is_audio_only; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->is_audio_only)
  return 0;

 if (!VAR_0->board.has_dvb)
  return 0;

 FUNC_0(&VAR_0->intf->dev, "Suspending DVB extension\n");
 if (VAR_0->dvb) {
  struct em28xx_dvb *VAR_2 = VAR_0->dvb;

  if (VAR_2->fe[0]) {
   VAR_1 = FUNC_1(VAR_2->fe[0]);
   FUNC_0(&VAR_0->intf->dev, "fe0 suspend %d\n", VAR_1);
  }
  if (VAR_2->fe[1]) {
   FUNC_1(VAR_2->fe[1]);
   FUNC_0(&VAR_0->intf->dev, "fe1 suspend %d\n", VAR_1);
  }
 }

 return 0;
}
