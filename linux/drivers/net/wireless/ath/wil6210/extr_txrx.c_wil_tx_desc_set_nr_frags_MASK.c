
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* d; } ;
struct vring_tx_desc {TYPE_1__ mac; } ;


 int VAR_0 ;

__attribute__((used)) static inline
void FUNC_0(struct vring_tx_desc *VAR_1, int VAR_2)
{
 VAR_1->mac.d[2] |= (VAR_2 << VAR_0);
}
