
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfpf_init_tlv {int flags; scalar_t__ sb_addr; int stats_stride; int stats_addr; } ;
struct bnx2x_virtf {int cfg_flags; int index; int stats_stride; int fw_stat_map; } ;
struct bnx2x_vf_mbx {TYPE_2__* msg; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct vfpf_init_tlv init; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2x*,int ) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_virtf*,int *) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_3, struct bnx2x_virtf *VAR_4,
         struct bnx2x_vf_mbx *VAR_5)
{
 struct vfpf_init_tlv *VAR_6 = &VAR_5->msg->req.init;
 int VAR_7;


 VAR_4->fw_stat_map = VAR_6->stats_addr;
 VAR_4->stats_stride = VAR_6->stats_stride;
 VAR_7 = FUNC_1(VAR_3, VAR_4, (dma_addr_t *)VAR_6->sb_addr);


 if (VAR_6->flags & VAR_0)
  VAR_4->cfg_flags |= VAR_2;


 if (VAR_4->cfg_flags & VAR_1)
  FUNC_0(VAR_3, VAR_4->index);


 FUNC_2(VAR_3, VAR_4, VAR_7);
}
