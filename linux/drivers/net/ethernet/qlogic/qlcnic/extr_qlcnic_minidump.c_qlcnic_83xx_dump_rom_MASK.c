
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct __mem {int addr; int size; } ;
struct TYPE_2__ {struct __mem mem; } ;
struct qlcnic_dump_entry {TYPE_1__ region; } ;
struct qlcnic_adapter {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (struct qlcnic_adapter*,int,int *,int) ;

__attribute__((used)) static u32 FUNC_1(struct qlcnic_adapter *VAR_0,
    struct qlcnic_dump_entry *VAR_1, __le32 *VAR_2)
{
 u32 VAR_3, VAR_4;
 struct __mem *VAR_5 = &VAR_1->region.mem;

 VAR_3 = VAR_5->addr;
 VAR_4 = VAR_5->size / 4;

 if (!FUNC_0(VAR_0, VAR_3,
            (u8 *)VAR_2, VAR_4))
  return VAR_5->size;

 return 0;
}
