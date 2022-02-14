
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qla_hw_data {size_t file_prd_off; TYPE_2__* hablob; } ;
struct qla82xx_uri_table_desc {int findex; int entry_size; } ;
struct qla82xx_uri_data_desc {int dummy; } ;
typedef size_t __le32 ;
struct TYPE_4__ {TYPE_1__* fw; } ;
struct TYPE_3__ {int * data; } ;


 int FUNC_0 (int) ;
 struct qla82xx_uri_table_desc* FUNC_1 (int const*,int) ;

__attribute__((used)) static struct qla82xx_uri_data_desc *
FUNC_2(struct qla_hw_data *VAR_0,
 u32 VAR_1, u32 VAR_2)
{
 const u8 *VAR_3 = VAR_0->hablob->fw->data;
 int VAR_4 = FUNC_0(*((int *)&VAR_3[VAR_0->file_prd_off] + VAR_2));
 struct qla82xx_uri_table_desc *VAR_5 = ((void*)0);
 __le32 VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_1);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_5->findex) +
     (FUNC_0(VAR_5->entry_size) * VAR_4);

 return (struct qla82xx_uri_data_desc *)&VAR_3[VAR_6];
}
