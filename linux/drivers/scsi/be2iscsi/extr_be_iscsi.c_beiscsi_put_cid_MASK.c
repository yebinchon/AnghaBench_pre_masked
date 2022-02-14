
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct ulp_cid_info {unsigned short* cid_array; size_t cid_free; int avlbl_cids; } ;
struct hwi_wrb_context {size_t ulp_num; } ;
struct hwi_controller {struct hwi_wrb_context* wrb_context; } ;
struct beiscsi_hba {struct ulp_cid_info** cid_array_info; struct hwi_controller* phwi_ctrlr; } ;


 size_t FUNC_0 (struct beiscsi_hba*,size_t) ;
 size_t FUNC_1 (unsigned short) ;
 unsigned short VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct beiscsi_hba*,int ,char*,unsigned short,int ,size_t) ;

__attribute__((used)) static void FUNC_3(struct beiscsi_hba *VAR_2, unsigned short VAR_3)
{
 uint16_t VAR_4 = FUNC_1(VAR_3);
 struct hwi_wrb_context *VAR_5;
 struct hwi_controller *VAR_6;
 struct ulp_cid_info *VAR_7;
 uint16_t VAR_8;

 VAR_6 = VAR_2->phwi_ctrlr;
 VAR_5 = &VAR_6->wrb_context[VAR_4];
 VAR_8 = VAR_5->ulp_num;

 VAR_7 = VAR_2->cid_array_info[VAR_8];

 if (VAR_7->cid_array[VAR_7->cid_free] != VAR_0) {
  FUNC_2(VAR_2, VAR_1,
         "BS_%d : failed to put cid %u: available %u:%u\n",
         VAR_3, VAR_7->avlbl_cids, VAR_7->cid_free);
  return;
 }
 VAR_7->cid_array[VAR_7->cid_free++] = VAR_3;
 if (VAR_7->cid_free == FUNC_0(VAR_2, VAR_8))
  VAR_7->cid_free = 0;
 VAR_7->avlbl_cids++;
}
