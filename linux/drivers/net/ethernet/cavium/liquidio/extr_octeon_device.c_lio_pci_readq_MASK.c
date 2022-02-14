
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int pci_win_rd_data; int pci_win_rd_addr_lo; int pci_win_rd_addr_hi; } ;
struct octeon_device {scalar_t__ chip_id; int pci_win_lock; TYPE_1__ reg_list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,int ) ;

u64 FUNC_5(struct octeon_device *VAR_3, u64 VAR_4)
{
 u64 VAR_5;
 unsigned long VAR_6;
 u32 VAR_7, VAR_8;

 FUNC_2(&VAR_3->pci_win_lock, VAR_6);




 VAR_8 = (VAR_4 >> 32);
 if ((VAR_3->chip_id == VAR_1) ||
     (VAR_3->chip_id == VAR_2) ||
     (VAR_3->chip_id == VAR_0))
  VAR_8 |= 0x00060000;
 FUNC_4(VAR_8, VAR_3->reg_list.pci_win_rd_addr_hi);


 VAR_7 = FUNC_0(VAR_3->reg_list.pci_win_rd_addr_hi);

 FUNC_4(VAR_4 & 0xffffffff, VAR_3->reg_list.pci_win_rd_addr_lo);
 VAR_7 = FUNC_0(VAR_3->reg_list.pci_win_rd_addr_lo);

 VAR_5 = FUNC_1(VAR_3->reg_list.pci_win_rd_data);

 FUNC_3(&VAR_3->pci_win_lock, VAR_6);

 return VAR_5;
}
