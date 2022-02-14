
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct qbman_pull_desc {int verb; int rsp_addr; scalar_t__ rsp_addr_virt; } ;
struct dpaa2_dq {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct qbman_pull_desc *VAR_2,
     struct dpaa2_dq *VAR_3,
     dma_addr_t VAR_4,
     int VAR_5)
{

 VAR_2->rsp_addr_virt = (u64)(uintptr_t)VAR_3;

 if (!VAR_3) {
  VAR_2->verb &= ~(1 << VAR_0);
  return;
 }
 VAR_2->verb |= 1 << VAR_0;
 if (VAR_5)
  VAR_2->verb |= 1 << VAR_1;
 else
  VAR_2->verb &= ~(1 << VAR_1);

 VAR_2->rsp_addr = FUNC_0(VAR_4);
}
