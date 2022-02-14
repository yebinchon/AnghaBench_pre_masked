
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sync; int mode; } ;
struct TYPE_6__ {TYPE_1__ tt; } ;
struct atafb_par {int screen_base; TYPE_2__ hw; } ;
struct TYPE_8__ {int bas_hi; int bas_md; int bas_lo; int syncmode; } ;
struct TYPE_7__ {int tt_shiftmode; } ;


 int FUNC_0 (unsigned long) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct atafb_par *VAR_2)
{
 unsigned long VAR_3;
 VAR_2->hw.tt.mode = VAR_1.tt_shiftmode;
 VAR_2->hw.tt.sync = VAR_0.syncmode;
 VAR_3 = ((VAR_0.bas_hi & 0xff) << 16) |
        ((VAR_0.bas_md & 0xff) << 8) |
        ((VAR_0.bas_lo & 0xff));
 VAR_2->screen_base = FUNC_0(VAR_3);
}
