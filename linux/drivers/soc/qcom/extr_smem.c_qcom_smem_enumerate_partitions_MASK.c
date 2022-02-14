
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct smem_ptable_entry {int cacheline; int host1; int host0; int size; int offset; } ;
struct smem_ptable {struct smem_ptable_entry* entry; int num_entries; } ;
struct smem_partition_header {int dummy; } ;
struct qcom_smem {int* cacheline; struct smem_partition_header** partitions; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct smem_ptable*) ;
 int FUNC_1 (struct smem_ptable*) ;
 unsigned int VAR_1 ;
 int FUNC_2 (int ,char*,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct smem_ptable* FUNC_5 (struct qcom_smem*) ;
 struct smem_partition_header* FUNC_6 (struct qcom_smem*,struct smem_ptable_entry*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_7(struct qcom_smem *VAR_2, u16 VAR_3)
{
 struct smem_partition_header *VAR_4;
 struct smem_ptable_entry *VAR_5;
 struct smem_ptable *VAR_6;
 unsigned int VAR_7;
 u16 VAR_8, VAR_9;
 int VAR_10;

 VAR_6 = FUNC_5(VAR_2);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 for (VAR_10 = 0; VAR_10 < FUNC_4(VAR_6->num_entries); VAR_10++) {
  VAR_5 = &VAR_6->entry[VAR_10];
  if (!FUNC_4(VAR_5->offset))
   continue;
  if (!FUNC_4(VAR_5->size))
   continue;

  VAR_8 = FUNC_3(VAR_5->host0);
  VAR_9 = FUNC_3(VAR_5->host1);
  if (VAR_8 == VAR_3)
   VAR_7 = VAR_9;
  else if (VAR_9 == VAR_3)
   VAR_7 = VAR_8;
  else
   continue;

  if (VAR_7 >= VAR_1) {
   FUNC_2(VAR_2->dev, "bad host %hu\n", VAR_7);
   return -VAR_0;
  }

  if (VAR_2->partitions[VAR_7]) {
   FUNC_2(VAR_2->dev, "duplicate host %hu\n", VAR_7);
   return -VAR_0;
  }

  VAR_4 = FUNC_6(VAR_2, VAR_5, VAR_8, VAR_9);
  if (!VAR_4)
   return -VAR_0;

  VAR_2->partitions[VAR_7] = VAR_4;
  VAR_2->cacheline[VAR_7] = FUNC_4(VAR_5->cacheline);
 }

 return 0;
}
