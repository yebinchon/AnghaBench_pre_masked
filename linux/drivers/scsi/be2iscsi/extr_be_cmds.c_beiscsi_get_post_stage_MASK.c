
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct beiscsi_hba {int pcidev; scalar_t__ csr_va; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static u32 FUNC_3(struct beiscsi_hba *VAR_2)
{
 u32 VAR_3;

 if (FUNC_1(VAR_2))
  VAR_3 = FUNC_0(VAR_2->csr_va + VAR_0);
 else
  FUNC_2(VAR_2->pcidev,
          VAR_1, &VAR_3);
 return VAR_3;
}
