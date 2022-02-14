
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct uni_table_desc {int entry_size; int findex; } ;
struct uni_data_desc {int size; int findex; } ;
struct qlcnic_adapter {size_t file_prd_off; TYPE_1__* fw; } ;
typedef int __le32 ;
struct TYPE_2__ {int size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct uni_table_desc* FUNC_1 (int const*,int ) ;

__attribute__((used)) static int
FUNC_2(struct qlcnic_adapter *VAR_3)
{
 struct uni_table_desc *VAR_4;
 struct uni_data_desc *VAR_5;
 const u8 *VAR_6 = VAR_3->fw->data;
 u32 VAR_7, VAR_8, VAR_9, VAR_10;
 __le32 VAR_11;

 VAR_11 = *((__le32 *)&VAR_6[VAR_3->file_prd_off] +
   VAR_2);
 VAR_10 = FUNC_0(VAR_11);
 VAR_4 = FUNC_1(VAR_6, VAR_1);

 if (!VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_4->findex) +
     FUNC_0(VAR_4->entry_size) * (VAR_10 + 1);

 if (VAR_3->fw->size < VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_4->findex) +
        FUNC_0(VAR_4->entry_size) * VAR_10;
 VAR_5 = (struct uni_data_desc *)&VAR_6[VAR_7];
 VAR_9 = FUNC_0(VAR_5->findex) + FUNC_0(VAR_5->size);

 if (VAR_3->fw->size < VAR_9)
  return -VAR_0;

 return 0;
}
