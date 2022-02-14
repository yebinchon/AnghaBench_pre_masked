
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int y; int x; int line; int filename_0_7; } ;
struct TYPE_4__ {int dprtstrparam3; int dprtstrparam2; int dprtstrparam1; int dprtstrparam0; int dprtstridx; } ;
struct TYPE_6__ {TYPE_2__ assert; TYPE_1__ prt; } ;
struct fw_debug_cmd {TYPE_3__ u; int op_type; } ;
struct csio_hw {int dummy; } ;
typedef int __be64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct csio_hw*,char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct csio_hw*,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct csio_hw *VAR_0, __be64 *VAR_1)
{
 struct fw_debug_cmd *VAR_2 = (struct fw_debug_cmd *)VAR_1;

 if ((FUNC_0(FUNC_3(VAR_2->op_type))) == 1) {
  FUNC_2(VAR_0, "FW print message:\n");
  FUNC_2(VAR_0, "\tdebug->dprtstridx = %d\n",
       FUNC_4(VAR_2->u.prt.dprtstridx));
  FUNC_2(VAR_0, "\tdebug->dprtstrparam0 = 0x%x\n",
       FUNC_3(VAR_2->u.prt.dprtstrparam0));
  FUNC_2(VAR_0, "\tdebug->dprtstrparam1 = 0x%x\n",
       FUNC_3(VAR_2->u.prt.dprtstrparam1));
  FUNC_2(VAR_0, "\tdebug->dprtstrparam2 = 0x%x\n",
       FUNC_3(VAR_2->u.prt.dprtstrparam2));
  FUNC_2(VAR_0, "\tdebug->dprtstrparam3 = 0x%x\n",
       FUNC_3(VAR_2->u.prt.dprtstrparam3));
 } else {

  FUNC_1(VAR_0, "FW assertion at %.16s:%u, val0 %#x, val1 %#x\n",
       VAR_2->u.assert.filename_0_7,
       FUNC_3(VAR_2->u.assert.line),
       FUNC_3(VAR_2->u.assert.x),
       FUNC_3(VAR_2->u.assert.y));
 }
}
