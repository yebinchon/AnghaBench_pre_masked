
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int pci_win_wr_data_lo; int pci_win_wr_data_hi; int pci_win_wr_addr; } ;
struct octeon_device {int pci_win_lock; TYPE_1__ reg_list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;

void FUNC_5(struct octeon_device *VAR_0,
      u64 VAR_1,
      u64 VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_0->pci_win_lock, VAR_4);

 FUNC_4(VAR_2, VAR_0->reg_list.pci_win_wr_addr);


 FUNC_3(VAR_1 >> 32, VAR_0->reg_list.pci_win_wr_data_hi);

 VAR_3 = FUNC_0(VAR_0->reg_list.pci_win_wr_data_hi);

 FUNC_3(VAR_1 & 0xffffffff, VAR_0->reg_list.pci_win_wr_data_lo);

 FUNC_2(&VAR_0->pci_win_lock, VAR_4);
}
