
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hotkey_mask; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 TYPE_3__ VAR_5 ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static void FUNC_8(void)
{






 if (VAR_2)
  FUNC_1(VAR_2, &VAR_6->dev.kobj);

 FUNC_0(VAR_0 | VAR_1,
     "restoring original HKEY status and mask\n");


 if (((VAR_5.hotkey_mask &&
       FUNC_2(VAR_4)) |
      FUNC_4(0)) != 0)
  FUNC_7("failed to restore hot key mask to BIOS defaults\n");
}
