
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {size_t num_blocks; TYPE_1__* fw_mon; } ;
struct iwl_trans {TYPE_2__ dbg; int dev; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {scalar_t__ size; int physical; void* block; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_trans*,char*,unsigned long,unsigned long) ;
 int FUNC_2 (struct iwl_trans*,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_1 ;
 void* FUNC_4 (int ,scalar_t__,int *,int) ;

__attribute__((used)) static void FUNC_5(struct iwl_trans *VAR_2,
         u8 VAR_3, u8 VAR_4)
{
 void *VAR_5 = ((void*)0);
 dma_addr_t VAR_6 = 0;
 u32 VAR_7 = 0;
 u8 VAR_8;

 for (VAR_8 = VAR_3; VAR_8 >= VAR_4; VAR_8--) {
  VAR_7 = FUNC_0(VAR_8);
  VAR_5 = FUNC_4(VAR_2->dev, VAR_7, &VAR_6,
           VAR_0 | VAR_1);
  if (!VAR_5)
   continue;

  FUNC_2(VAR_2,
    "Allocated 0x%08x bytes for firmware monitor.\n",
    VAR_7);
  break;
 }

 if (FUNC_3(!VAR_5))
  return;

 if (VAR_8 != VAR_3)
  FUNC_1(VAR_2,
   "Sorry - debug buffer is only %luK while you requested %luK\n",
   (unsigned long)FUNC_0(VAR_8 - 10),
   (unsigned long)FUNC_0(VAR_3 - 10));

 VAR_2->dbg.fw_mon[VAR_2->dbg.num_blocks].block = VAR_5;
 VAR_2->dbg.fw_mon[VAR_2->dbg.num_blocks].physical = VAR_6;
 VAR_2->dbg.fw_mon[VAR_2->dbg.num_blocks].size = VAR_7;
 VAR_2->dbg.num_blocks++;
}
