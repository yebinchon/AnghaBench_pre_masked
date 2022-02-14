
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_hw {int dummy; } ;
struct iavf_adapter {int num_msix_vectors; TYPE_1__* msix_entries; struct iavf_hw hw; } ;
struct TYPE_2__ {int vector; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct iavf_hw*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iavf_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct iavf_adapter *VAR_0)
{
 int VAR_1;
 struct iavf_hw *VAR_2 = &VAR_0->hw;

 if (!VAR_0->msix_entries)
  return;

 for (VAR_1 = 1; VAR_1 < VAR_0->num_msix_vectors; VAR_1++) {
  FUNC_3(VAR_2, FUNC_0(VAR_1 - 1), 0);
  FUNC_2(VAR_0->msix_entries[VAR_1].vector);
 }
 FUNC_1(VAR_2);
}
