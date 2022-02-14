
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vpe_mmr_adb {int * dei_regs; } ;
struct TYPE_2__ {struct vpe_mmr_adb* addr; } ;
struct vpe_ctx {int load_mmrs; TYPE_1__ mmr_adb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct vpe_ctx *VAR_2, int VAR_3)
{
 struct vpe_mmr_adb *VAR_4 = VAR_2->mmr_adb.addr;
 u32 *VAR_5 = &VAR_4->dei_regs[3];

 if (VAR_3 & 0x2)
  FUNC_0(VAR_5, 1, 1, 2);

 if (VAR_3 & 0x3)
  FUNC_0(VAR_5, 1, 1, 3);

 FUNC_0(VAR_5, VAR_3, VAR_0,
  VAR_1);

 VAR_2->load_mmrs = 1;
}
