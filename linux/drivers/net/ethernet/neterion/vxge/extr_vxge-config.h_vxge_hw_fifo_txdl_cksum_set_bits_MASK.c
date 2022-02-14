
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vxge_hw_fifo_txd {int control_1; } ;



__attribute__((used)) static inline void FUNC_0(void *VAR_0, u64 VAR_1)
{
 struct vxge_hw_fifo_txd *VAR_2 = (struct vxge_hw_fifo_txd *)VAR_0;
 VAR_2->control_1 |= VAR_1;
}
