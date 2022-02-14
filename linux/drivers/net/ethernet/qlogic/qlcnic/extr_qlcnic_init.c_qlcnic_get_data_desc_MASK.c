
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct uni_table_desc {int entry_size; int findex; } ;
struct uni_data_desc {int dummy; } ;
struct qlcnic_adapter {size_t file_prd_off; TYPE_1__* fw; } ;
typedef int __le32 ;
struct TYPE_2__ {int * data; } ;


 int FUNC_0 (int ) ;
 struct uni_table_desc* FUNC_1 (int const*,int) ;

__attribute__((used)) static
struct uni_data_desc *FUNC_2(struct qlcnic_adapter *VAR_0,
   u32 VAR_1, u32 VAR_2)
{
 const u8 *VAR_3 = VAR_0->fw->data;
 struct uni_table_desc *VAR_4;
 u32 VAR_5, VAR_6;
 __le32 VAR_7;

 VAR_7 = *((__le32 *)&VAR_3[VAR_0->file_prd_off] + VAR_2);
 VAR_6 = FUNC_0(VAR_7);

 VAR_4 = FUNC_1(VAR_3, VAR_1);

 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_4->findex) +
        FUNC_0(VAR_4->entry_size) * VAR_6;

 return (struct uni_data_desc *)&VAR_3[VAR_5];
}
