
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int wp; int * head; } ;
struct rtw_pci_tx_ring {TYPE_1__ r; } ;
struct rtw_pci_tx_buffer_desc {int dummy; } ;



__attribute__((used)) static inline
struct rtw_pci_tx_buffer_desc *FUNC_0(struct rtw_pci_tx_ring *VAR_0,
        u32 VAR_1)
{
 u8 *VAR_2;

 VAR_2 = VAR_0->r.head + VAR_0->r.wp * VAR_1;
 return (struct rtw_pci_tx_buffer_desc *)VAR_2;
}
