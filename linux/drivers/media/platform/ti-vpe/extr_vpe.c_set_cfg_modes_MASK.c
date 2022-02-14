
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vpe_mmr_adb {int * us3_regs; int * us2_regs; int * us1_regs; } ;
struct vpe_fmt {scalar_t__ fourcc; } ;
struct TYPE_3__ {struct vpe_mmr_adb* addr; } ;
struct vpe_ctx {int load_mmrs; TYPE_1__ mmr_adb; TYPE_2__* q_data; } ;
struct TYPE_4__ {struct vpe_fmt* fmt; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vpe_ctx *VAR_4)
{
 struct vpe_fmt *VAR_5 = VAR_4->q_data[VAR_0].fmt;
 struct vpe_mmr_adb *VAR_6 = VAR_4->mmr_adb.addr;
 u32 *VAR_7 = &VAR_6->us1_regs[0];
 u32 *VAR_8 = &VAR_6->us2_regs[0];
 u32 *VAR_9 = &VAR_6->us3_regs[0];
 int VAR_10 = 1;






 if (VAR_5->fourcc == VAR_1)
  VAR_10 = 0;

 FUNC_0(VAR_7, VAR_10, VAR_2, VAR_3);
 FUNC_0(VAR_8, VAR_10, VAR_2, VAR_3);
 FUNC_0(VAR_9, VAR_10, VAR_2, VAR_3);

 VAR_4->load_mmrs = 1;
}
