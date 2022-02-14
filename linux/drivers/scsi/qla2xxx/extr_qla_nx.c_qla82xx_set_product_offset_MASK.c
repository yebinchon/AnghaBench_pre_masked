
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
struct qla_hw_data {size_t chip_revision; size_t file_prd_off; TYPE_2__* hablob; } ;
struct qla82xx_uri_table_desc {int num_entries; int findex; int entry_size; } ;
typedef size_t __le32 ;
struct TYPE_4__ {TYPE_1__* fw; } ;
struct TYPE_3__ {size_t* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int) ;
 struct qla82xx_uri_table_desc* FUNC_1 (size_t const*,int ) ;

__attribute__((used)) static int
FUNC_2(struct qla_hw_data *VAR_3)
{
 struct qla82xx_uri_table_desc *VAR_4 = ((void*)0);
 const uint8_t *VAR_5 = VAR_3->hablob->fw->data;
 uint32_t VAR_6;
 __le32 VAR_7;
 __le32 VAR_8, VAR_9, VAR_10;
 uint8_t VAR_11 = VAR_3->chip_revision;

 int VAR_12 = 0;
 uint32_t VAR_13;

 VAR_4 = FUNC_1(VAR_5,
   VAR_1);
 if (!VAR_4)
  return -1;

 VAR_7 = FUNC_0(VAR_4->num_entries);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_10 = FUNC_0(VAR_4->findex) +
   (VAR_6 * FUNC_0(VAR_4->entry_size));
  VAR_8 = FUNC_0(*((int *)&VAR_5[VAR_10] +
   VAR_2));
  VAR_9 = FUNC_0(*((int *)&VAR_5[VAR_10] +
   VAR_0));

  VAR_13 = VAR_12 ? 1 : 2;

  if ((VAR_11 == VAR_9) && ((1ULL << VAR_13) & VAR_8)) {
   VAR_3->file_prd_off = VAR_10;
   return 0;
  }
 }
 return -1;
}
