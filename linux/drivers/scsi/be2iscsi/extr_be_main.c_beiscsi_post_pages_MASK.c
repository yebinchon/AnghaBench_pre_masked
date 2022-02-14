
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mem_array {int size; } ;
struct iscsi_sge {int dummy; } ;
struct TYPE_4__ {int* iscsi_icd_start; int ulp_supported; } ;
struct TYPE_3__ {int num_sge_per_io; } ;
struct beiscsi_hba {int ctrl; TYPE_2__ fw_config; TYPE_1__ params; struct be_mem_descriptor* init_mem; } ;
struct be_mem_descriptor {unsigned int num_elements; struct mem_array* mem_array; } ;
struct be_dma_mem {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct be_dma_mem*,unsigned int,int) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_2 (struct beiscsi_hba*,struct mem_array*,struct be_dma_mem*) ;
 scalar_t__ FUNC_3 (int,int *) ;

__attribute__((used)) static int
FUNC_4(struct beiscsi_hba *VAR_6)
{
 struct be_mem_descriptor *VAR_7;
 struct mem_array *VAR_8;
 unsigned int VAR_9, VAR_10;
 struct be_dma_mem VAR_11;
 int VAR_12, VAR_13 = 0;

 VAR_7 = VAR_6->init_mem;
 VAR_7 += VAR_2;
 VAR_8 = VAR_7->mem_array;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++)
  if (FUNC_3(VAR_13, &VAR_6->fw_config.ulp_supported))
   break;

 VAR_9 = (sizeof(struct iscsi_sge) * VAR_6->params.num_sge_per_io *
   VAR_6->fw_config.iscsi_icd_start[VAR_13]) / VAR_5;
 for (VAR_10 = 0; VAR_10 < VAR_7->num_elements; VAR_10++) {
  FUNC_2(VAR_6, VAR_8, &VAR_11);
  VAR_12 = FUNC_0(&VAR_6->ctrl, &VAR_11,
      VAR_9,
      (VAR_8->size / VAR_5));
  VAR_9 += VAR_8->size / VAR_5;
  if (VAR_12 != 0) {
   FUNC_1(VAR_6, VAR_3, VAR_0,
        "BM_%d : post sgl failed.\n");
   return VAR_12;
  }
  VAR_8++;
 }
 FUNC_1(VAR_6, VAR_4, VAR_0,
      "BM_%d : POSTED PAGES\n");
 return 0;
}
