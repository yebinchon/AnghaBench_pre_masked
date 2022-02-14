
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct uni_table_desc {int findex; int entry_size; int num_entries; } ;
struct qlcnic_adapter {TYPE_1__* fw; } ;
struct TYPE_2__ {scalar_t__ size; int * data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct qlcnic_adapter *VAR_2)
{
 const u8 *VAR_3 = VAR_2->fw->data;
 struct uni_table_desc *VAR_4 = (struct uni_table_desc *) &VAR_3[0];
 u32 VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_8 = VAR_2->fw->size;

 if (VAR_8 < VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4->num_entries);
 VAR_6 = FUNC_0(VAR_4->entry_size);
 VAR_7 = FUNC_0(VAR_4->findex) + (VAR_5 * VAR_6);

 if (VAR_8 < VAR_7)
  return -VAR_0;

 return 0;
}
