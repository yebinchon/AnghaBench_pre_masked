
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smem_ptable {size_t num_entries; int * entry; } ;
struct smem_info {int num_items; int magic; } ;
struct qcom_smem {int dummy; } ;


 scalar_t__ FUNC_0 (struct smem_ptable*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 struct smem_ptable* FUNC_3 (struct qcom_smem*) ;

__attribute__((used)) static u32 FUNC_4(struct qcom_smem *VAR_2)
{
 struct smem_ptable *VAR_3;
 struct smem_info *VAR_4;

 VAR_3 = FUNC_3(VAR_2);
 if (FUNC_0(VAR_3))
  return VAR_1;

 VAR_4 = (struct smem_info *)&VAR_3->entry[VAR_3->num_entries];
 if (FUNC_2(VAR_4->magic, VAR_0, sizeof(VAR_4->magic)))
  return VAR_1;

 return FUNC_1(VAR_4->num_items);
}
