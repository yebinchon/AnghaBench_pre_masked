
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_short ;
typedef int u_char ;
struct cirrus_state {int misc2; int misc1; int* timer; } ;
struct TYPE_3__ {struct cirrus_state cirrus; } ;
struct TYPE_4__ {TYPE_1__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 (size_t,scalar_t__,int) ;
 int FUNC_3 (int) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static void FUNC_4(u_short VAR_6)
{
    int VAR_7;
    u_char VAR_8;
    struct cirrus_state *VAR_9 = &VAR_5[VAR_6].state.cirrus;

    VAR_8 = FUNC_1(VAR_6, VAR_4);
    FUNC_2(VAR_6, VAR_4, VAR_9->misc2);
    if (VAR_8 & VAR_2) FUNC_3(50);
    VAR_8 = FUNC_1(VAR_6, VAR_3);
    VAR_8 &= ~(VAR_1 | VAR_0);
    FUNC_2(VAR_6, VAR_3, VAR_8 | VAR_9->misc1);
    for (VAR_7 = 0; VAR_7 < 6; VAR_7++)
 FUNC_2(VAR_6, FUNC_0(0)+VAR_7, VAR_9->timer[VAR_7]);
}
