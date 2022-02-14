
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int y; int x; int line; int filename_0_7; } ;
struct TYPE_3__ {TYPE_2__ assert; } ;
struct fw_debug_cmd {TYPE_1__ u; } ;
struct adapter {int pdev_dev; } ;
typedef int asrt ;
typedef int __be64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct adapter*,int *,int,int ) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_0, u32 VAR_1)
{
 struct fw_debug_cmd VAR_2;

 FUNC_2(VAR_0, (__be64 *)&VAR_2, sizeof(VAR_2) / 8, VAR_1);
 FUNC_1(VAR_0->pdev_dev,
    "FW assertion at %.16s:%u, val0 %#x, val1 %#x\n",
    VAR_2.u.assert.filename_0_7, FUNC_0(VAR_2.u.assert.line),
    FUNC_0(VAR_2.u.assert.x), FUNC_0(VAR_2.u.assert.y));
}
