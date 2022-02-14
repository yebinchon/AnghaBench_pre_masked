
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int BDCtl; int BuffData; } ;
struct TYPE_3__ {int FDCtl; int FDStat; int FDSystem; int FDNext; } ;
struct TxFD {TYPE_2__ bd; TYPE_1__ fd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct TxFD *VAR_0)
{
 FUNC_1("TxFD(%p): %08x %08x %08x %08x\n", VAR_0,
        FUNC_0(VAR_0->fd.FDNext),
        FUNC_0(VAR_0->fd.FDSystem),
        FUNC_0(VAR_0->fd.FDStat),
        FUNC_0(VAR_0->fd.FDCtl));
 FUNC_1("BD: ");
 FUNC_1(" %08x %08x",
        FUNC_0(VAR_0->bd.BuffData),
        FUNC_0(VAR_0->bd.BDCtl));
 FUNC_1("\n");
}
