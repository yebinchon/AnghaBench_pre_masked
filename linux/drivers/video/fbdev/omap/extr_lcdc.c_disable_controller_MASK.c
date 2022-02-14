
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* fbdev; int last_frame_complete; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 FUNC_2(&VAR_0.last_frame_complete);
 FUNC_1();
 if (!FUNC_4(&VAR_0.last_frame_complete,
    FUNC_3(500)))
  FUNC_0(VAR_0.fbdev->dev, "timeout waiting for FRAME DONE\n");
}
