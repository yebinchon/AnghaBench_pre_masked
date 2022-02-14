
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_hw {int dummy; } ;
struct iavf_adapter {TYPE_1__* msix_entries; struct iavf_hw hw; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int FUNC_0 (struct iavf_hw*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iavf_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct iavf_adapter *VAR_1)
{
 struct iavf_hw *VAR_2 = &VAR_1->hw;

 if (!VAR_1->msix_entries)
  return;

 FUNC_2(VAR_2, VAR_0, 0);

 FUNC_0(VAR_2);

 FUNC_1(VAR_1->msix_entries[0].vector);
}
