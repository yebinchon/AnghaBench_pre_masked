
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_frame {int dummy; } ;
struct bnxt_tx_ring_info {int dummy; } ;
struct bnxt_sw_tx_bd {struct xdp_frame* xdpf; int action; } ;
struct bnxt {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct bnxt_sw_tx_bd* FUNC_0 (struct bnxt*,struct bnxt_tx_ring_info*,int ,int ) ;
 int FUNC_1 (struct bnxt_sw_tx_bd*,int ,int ) ;
 int FUNC_2 (struct bnxt_sw_tx_bd*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct bnxt *VAR_1,
         struct bnxt_tx_ring_info *VAR_2,
         dma_addr_t VAR_3, u32 VAR_4,
         struct xdp_frame *VAR_5)
{
 struct bnxt_sw_tx_bd *VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_6->action = VAR_0;
 VAR_6->xdpf = VAR_5;
 FUNC_1(VAR_6, VAR_3, VAR_3);
 FUNC_2(VAR_6, VAR_4, 0);
}
