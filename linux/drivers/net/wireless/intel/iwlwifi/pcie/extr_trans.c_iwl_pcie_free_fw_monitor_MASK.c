
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_blocks; TYPE_1__* fw_mon; } ;
struct iwl_trans {TYPE_2__ dbg; int dev; } ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ physical; int * block; } ;


 int FUNC_0 (int ,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct iwl_trans *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->dbg.num_blocks; VAR_1++) {
  FUNC_0(VAR_0->dev, VAR_0->dbg.fw_mon[VAR_1].size,
      VAR_0->dbg.fw_mon[VAR_1].block,
      VAR_0->dbg.fw_mon[VAR_1].physical);
  VAR_0->dbg.fw_mon[VAR_1].block = ((void*)0);
  VAR_0->dbg.fw_mon[VAR_1].physical = 0;
  VAR_0->dbg.fw_mon[VAR_1].size = 0;
  VAR_0->dbg.num_blocks--;
 }
}
