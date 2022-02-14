
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smem_ptable_entry {int cacheline; int host1; int host0; int size; int offset; } ;
struct smem_ptable {struct smem_ptable_entry* entry; int num_entries; } ;
struct smem_partition_header {int dummy; } ;
struct qcom_smem {int global_cacheline; struct smem_partition_header* global_partition; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct smem_ptable*) ;
 int FUNC_1 (struct smem_ptable*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct smem_ptable* FUNC_5 (struct qcom_smem*) ;
 struct smem_partition_header* FUNC_6 (struct qcom_smem*,struct smem_ptable_entry*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct qcom_smem *VAR_2)
{
 struct smem_partition_header *VAR_3;
 struct smem_ptable_entry *VAR_4;
 struct smem_ptable *VAR_5;
 bool VAR_6 = 0;
 int VAR_7;

 if (VAR_2->global_partition) {
  FUNC_2(VAR_2->dev, "Already found the global partition\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_5(VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 for (VAR_7 = 0; VAR_7 < FUNC_4(VAR_5->num_entries); VAR_7++) {
  VAR_4 = &VAR_5->entry[VAR_7];
  if (!FUNC_4(VAR_4->offset))
   continue;
  if (!FUNC_4(VAR_4->size))
   continue;

  if (FUNC_3(VAR_4->host0) != VAR_1)
   continue;

  if (FUNC_3(VAR_4->host1) == VAR_1) {
   VAR_6 = 1;
   break;
  }
 }

 if (!VAR_6) {
  FUNC_2(VAR_2->dev, "Missing entry for global partition\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_6(VAR_2, VAR_4,
    VAR_1, VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->global_partition = VAR_3;
 VAR_2->global_cacheline = FUNC_4(VAR_4->cacheline);

 return 0;
}
