
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iavf_hw {int dummy; } ;
struct iavf_adapter {int num_msix_vectors; struct iavf_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct iavf_hw*,int ,int) ;

void FUNC_3(struct iavf_adapter *VAR_2, u32 VAR_3)
{
 struct iavf_hw *VAR_4 = &VAR_2->hw;
 int VAR_5;

 for (VAR_5 = 1; VAR_5 < VAR_2->num_msix_vectors; VAR_5++) {
  if (VAR_3 & FUNC_0(VAR_5 - 1)) {
   FUNC_2(VAR_4, FUNC_1(VAR_5 - 1),
        VAR_0 |
        VAR_1);
  }
 }
}
