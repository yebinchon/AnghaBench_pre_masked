
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {unsigned int height; unsigned int width; } ;
struct vpe_q_data {int flags; TYPE_2__ c_rect; } ;
struct vpe_mmr_adb {unsigned int* dei_regs; } ;
struct TYPE_3__ {struct vpe_mmr_adb* addr; } ;
struct vpe_ctx {int load_mmrs; int deinterlacing; struct vpe_q_data* q_data; TYPE_1__ mmr_adb; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct vpe_ctx *VAR_6)
{
 struct vpe_mmr_adb *VAR_7 = VAR_6->mmr_adb.addr;
 struct vpe_q_data *VAR_8 = &VAR_6->q_data[VAR_0];
 unsigned int VAR_9 = VAR_8->c_rect.height;
 unsigned int VAR_10 = VAR_8->c_rect.width;
 u32 *VAR_11 = &VAR_7->dei_regs[0];
 bool VAR_12 = 1;
 u32 VAR_13 = 0;







 if (!(VAR_8->flags & VAR_1) || !VAR_6->deinterlacing) {
  VAR_12 = 0;
  VAR_13 = VAR_4;
 }

 VAR_9 = VAR_12 ? VAR_9 * 2 : VAR_9;

 VAR_13 |= (VAR_9 << VAR_3) |
  (VAR_10 << VAR_5) |
  VAR_2;

 *VAR_11 = VAR_13;

 VAR_6->load_mmrs = 1;
}
