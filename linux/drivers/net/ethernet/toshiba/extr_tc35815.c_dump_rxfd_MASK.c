
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int FDCtl; int FDStat; int FDSystem; int FDNext; } ;
struct RxFD {TYPE_2__* bd; TYPE_1__ fd; } ;
struct TYPE_4__ {int BDCtl; int BuffData; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(struct RxFD *VAR_3)
{
 int VAR_4, VAR_5 = (FUNC_0(VAR_3->fd.FDCtl) & VAR_0) >> VAR_1;
 if (VAR_5 > 8)
  VAR_5 = 8;
 FUNC_1("RxFD(%p): %08x %08x %08x %08x\n", VAR_3,
        FUNC_0(VAR_3->fd.FDNext),
        FUNC_0(VAR_3->fd.FDSystem),
        FUNC_0(VAR_3->fd.FDStat),
        FUNC_0(VAR_3->fd.FDCtl));
 if (FUNC_0(VAR_3->fd.FDCtl) & VAR_2)
  return 0;
 FUNC_1("BD: ");
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_1(" %08x %08x",
         FUNC_0(VAR_3->bd[VAR_4].BuffData),
         FUNC_0(VAR_3->bd[VAR_4].BDCtl));
 FUNC_1("\n");
 return VAR_5;
}
