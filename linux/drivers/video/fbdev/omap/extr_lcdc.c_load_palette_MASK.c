
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int palette_code; int palette_size; int ext_mode; TYPE_1__* fbdev; int palette_load_complete; int palette_phys; scalar_t__ palette_virt; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_3 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static void FUNC_12(void)
{
 u16 *VAR_4;

 VAR_4 = (u16 *)VAR_3.palette_virt;

 *(u16 *)VAR_4 &= 0x0fff;
 *(u16 *)VAR_4 |= VAR_3.palette_code;

 FUNC_6(VAR_3.palette_phys,
  VAR_3.palette_size / 4 + 1, 1, VAR_0);

 FUNC_7(1);
 FUNC_8();

 FUNC_4(&VAR_3.palette_load_complete);
 FUNC_3(VAR_1);
 FUNC_10(VAR_2);
 FUNC_2();
 if (!FUNC_11(&VAR_3.palette_load_complete,
    FUNC_5(500)))
  FUNC_0(VAR_3.fbdev->dev, "timeout waiting for FRAME DONE\n");

 FUNC_1(VAR_1);
 FUNC_9();

 FUNC_7(VAR_3.ext_mode);
}
