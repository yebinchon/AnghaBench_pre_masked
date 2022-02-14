
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_array {int dummy; } ;
struct TYPE_2__ {int ulp_supported; } ;
struct beiscsi_hba {int ctrl; scalar_t__ init_mem; TYPE_1__ fw_config; } ;
struct be_mem_descriptor {struct mem_array* mem_array; } ;
struct be_dma_mem {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct be_dma_mem*) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*,int) ;
 int FUNC_2 (struct beiscsi_hba*,struct mem_array*,struct be_dma_mem*) ;
 scalar_t__ FUNC_3 (int,int *) ;

__attribute__((used)) static int
FUNC_4(struct beiscsi_hba *VAR_6)
{
 struct be_mem_descriptor *VAR_7;
 struct mem_array *VAR_8;
 struct be_dma_mem VAR_9;
 int VAR_10, VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (FUNC_3(VAR_11, &VAR_6->fw_config.ulp_supported)) {
   VAR_7 = (struct be_mem_descriptor *)VAR_6->init_mem;
   VAR_7 += VAR_2 +
        (VAR_11 * VAR_5);
   VAR_8 = VAR_7->mem_array;

   FUNC_2(VAR_6, VAR_8, &VAR_9);
   VAR_10 = FUNC_0(
     &VAR_6->ctrl, &VAR_9);

   if (VAR_10 != 0) {
    FUNC_1(VAR_6, VAR_3, VAR_0,
         "BM_%d : Post Template HDR Failed for"
         "ULP_%d\n", VAR_11);
    return VAR_10;
   }

   FUNC_1(VAR_6, VAR_4, VAR_0,
        "BM_%d : Template HDR Pages Posted for"
        "ULP_%d\n", VAR_11);
  }
 }
 return 0;
}
