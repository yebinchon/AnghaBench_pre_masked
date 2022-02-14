
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {TYPE_1__* vsi; } ;
struct mtk_mdp_ctx {TYPE_2__ vpu; } ;
struct mtk_mdp_addr {scalar_t__* addr; } ;
struct mdp_buffer {scalar_t__* addr_mva; } ;
struct TYPE_3__ {struct mdp_buffer src_buffer; } ;


 int FUNC_0 (scalar_t__*) ;

void FUNC_1(struct mtk_mdp_ctx *VAR_0,
          struct mtk_mdp_addr *VAR_1)
{
 struct mdp_buffer *VAR_2 = &VAR_0->vpu.vsi->src_buffer;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->addr); VAR_3++)
  VAR_2->addr_mva[VAR_3] = (uint64_t)VAR_1->addr[VAR_3];
}
