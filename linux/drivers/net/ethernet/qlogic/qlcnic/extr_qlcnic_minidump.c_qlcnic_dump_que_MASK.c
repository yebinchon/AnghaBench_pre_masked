
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct __queue {int read_addr; int read_addr_cnt; int no_ops; scalar_t__ stride; scalar_t__ read_addr_stride; int sel_addr; } ;
struct TYPE_2__ {struct __queue que; } ;
struct qlcnic_dump_entry {TYPE_1__ region; } ;
struct qlcnic_adapter {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qlcnic_adapter*,int) ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int) ;

__attribute__((used)) static u32 FUNC_3(struct qlcnic_adapter *VAR_0,
      struct qlcnic_dump_entry *VAR_1, __le32 *VAR_2)
{
 int VAR_3, VAR_4;
 u32 VAR_5, VAR_6, VAR_7, VAR_8 = 0;
 struct __queue *VAR_9 = &VAR_1->region.que;

 VAR_6 = VAR_9->read_addr;
 VAR_5 = VAR_9->read_addr_cnt;

 for (VAR_4 = 0; VAR_4 < VAR_9->no_ops; VAR_4++) {
  FUNC_2(VAR_0, VAR_9->sel_addr, VAR_8);
  VAR_6 = VAR_9->read_addr;
  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
   VAR_7 = FUNC_1(VAR_0, VAR_6);
   *VAR_2++ = FUNC_0(VAR_7);
   VAR_6 += VAR_9->read_addr_stride;
  }
  VAR_8 += VAR_9->stride;
 }
 return VAR_9->no_ops * VAR_5 * sizeof(u32);
}
