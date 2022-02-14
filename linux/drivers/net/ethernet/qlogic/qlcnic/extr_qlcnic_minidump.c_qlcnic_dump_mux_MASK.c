
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct __mux {int val; int no_ops; scalar_t__ val_stride; int read_addr; int addr; } ;
struct TYPE_2__ {struct __mux mux; } ;
struct qlcnic_dump_entry {TYPE_1__ region; } ;
struct qlcnic_adapter {int dummy; } ;
typedef int __le32 ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int) ;

__attribute__((used)) static u32 FUNC_3(struct qlcnic_adapter *VAR_0,
      struct qlcnic_dump_entry *VAR_1, __le32 *VAR_2)
{
 int VAR_3;
 u32 VAR_4, VAR_5 = 0;
 struct __mux *VAR_6 = &VAR_1->region.mux;

 VAR_4 = VAR_6->val;
 for (VAR_3 = 0; VAR_3 < VAR_6->no_ops; VAR_3++) {
  FUNC_2(VAR_0, VAR_6->addr, VAR_4);
  VAR_5 = FUNC_1(VAR_0, VAR_6->read_addr);
  *VAR_2++ = FUNC_0(VAR_4);
  *VAR_2++ = FUNC_0(VAR_5);
  VAR_4 += VAR_6->val_stride;
 }
 return 2 * VAR_6->no_ops * sizeof(u32);
}
