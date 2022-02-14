
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int board_rev; int boardflags_lo; } ;
struct TYPE_3__ {scalar_t__ vendor; int type; } ;
struct ssb_bus {TYPE_2__ sprom; TYPE_1__ boardinfo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ssb_bus *VAR_2)
{

 if (VAR_2->boardinfo.vendor == VAR_1 &&
     VAR_2->boardinfo.type == 0x4E &&
     VAR_2->sprom.board_rev > 0x40)
  VAR_2->sprom.boardflags_lo |= VAR_0;
}
