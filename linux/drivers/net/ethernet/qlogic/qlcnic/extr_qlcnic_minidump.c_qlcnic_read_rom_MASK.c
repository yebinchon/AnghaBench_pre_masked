
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct __mem {int addr; int size; } ;
struct TYPE_3__ {struct __mem mem; } ;
struct qlcnic_dump_entry {TYPE_1__ region; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
typedef int __le32 ;
struct TYPE_4__ {int pci_func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct qlcnic_adapter*,int) ;
 int FUNC_5 (struct qlcnic_adapter*,int ,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static u32 FUNC_7(struct qlcnic_adapter *VAR_6,
      struct qlcnic_dump_entry *VAR_7, __le32 *VAR_8)
{
 int VAR_9, VAR_10 = 0;
 u32 VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 struct __mem *VAR_16 = &VAR_7->region.mem;

 VAR_11 = VAR_16->addr;
 VAR_12 = VAR_16->size / 4;
lock_try:
 VAR_14 = FUNC_1(VAR_6, VAR_3);
 if (!VAR_14 && VAR_10 < VAR_2) {
  FUNC_6(10000, 11000);
  VAR_10++;
  goto lock_try;
 }
 FUNC_2(VAR_6, VAR_4,
       VAR_6->ahw->pci_func);
 for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
  VAR_15 = VAR_11 & 0xFFFF0000;
  FUNC_5(VAR_6, VAR_1, VAR_15);
  VAR_15 = FUNC_0(VAR_11) + VAR_0;
  VAR_13 = FUNC_4(VAR_6, VAR_15);
  VAR_11 += 4;
  *VAR_8++ = FUNC_3(VAR_13);
 }
 FUNC_1(VAR_6, VAR_5);
 return VAR_16->size;
}
