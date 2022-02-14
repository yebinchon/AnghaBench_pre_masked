
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int start; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct ath10k_qmi {int msa_va; int msa_pa; int msa_mem_size; struct ath10k* ar; } ;
struct ath10k {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int *,int ) ;
 int FUNC_3 (struct ath10k*,char*) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,int ,int ,int ) ;
 int FUNC_6 (struct device*,int ,int *,int ) ;
 int FUNC_7 (struct device_node*,int ,struct resource*) ;
 int FUNC_8 (struct device_node*) ;
 struct device_node* FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (struct resource*) ;

__attribute__((used)) static int FUNC_11(struct ath10k_qmi *VAR_4, u32 VAR_5)
{
 struct ath10k *VAR_6 = VAR_4->ar;
 struct device *VAR_7 = VAR_6->dev;
 struct device_node *VAR_8;
 struct resource VAR_9;
 int VAR_10;

 VAR_8 = FUNC_9(VAR_7->of_node, "memory-region", 0);
 if (VAR_8) {
  VAR_10 = FUNC_7(VAR_8, 0, &VAR_9);
  if (VAR_10) {
   FUNC_4(VAR_7, "failed to resolve msa fixed region\n");
   return VAR_10;
  }
  FUNC_8(VAR_8);

  VAR_4->msa_pa = VAR_9.start;
  VAR_4->msa_mem_size = FUNC_10(&VAR_9);
  VAR_4->msa_va = FUNC_5(VAR_7, VAR_4->msa_pa, VAR_4->msa_mem_size,
         VAR_3);
  if (FUNC_0(VAR_4->msa_va)) {
   FUNC_4(VAR_7, "failed to map memory region: %pa\n", &VAR_9.start);
   return FUNC_1(VAR_4->msa_va);
  }
 } else {
  VAR_4->msa_va = FUNC_6(VAR_7, VAR_5,
        &VAR_4->msa_pa, VAR_2);
  if (!VAR_4->msa_va) {
   FUNC_3(VAR_6, "failed to allocate dma memory for msa region\n");
   return -VAR_1;
  }
  VAR_4->msa_mem_size = VAR_5;
 }

 FUNC_2(VAR_6, VAR_0, "msa pa: %pad , msa va: 0x%p\n",
     &VAR_4->msa_pa,
     VAR_4->msa_va);

 return 0;
}
