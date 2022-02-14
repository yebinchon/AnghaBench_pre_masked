
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int desc_size; void* head; } ;
struct rtw_pci_tx_ring {TYPE_1__ r; } ;



__attribute__((used)) static inline void *FUNC_0(struct rtw_pci_tx_ring *VAR_0, u8 VAR_1)
{
 int VAR_2 = VAR_0->r.desc_size * VAR_1;

 return VAR_0->r.head + VAR_2;
}
