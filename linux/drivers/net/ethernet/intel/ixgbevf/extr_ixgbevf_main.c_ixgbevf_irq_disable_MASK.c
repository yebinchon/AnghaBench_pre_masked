
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {int num_msix_vectors; TYPE_1__* msix_entries; struct ixgbe_hw hw; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct ixgbevf_adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 int VAR_5;

 FUNC_1(VAR_4, VAR_1, 0);
 FUNC_1(VAR_4, VAR_2, ~0);
 FUNC_1(VAR_4, VAR_0, 0);

 FUNC_0(VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_3->num_msix_vectors; VAR_5++)
  FUNC_2(VAR_3->msix_entries[VAR_5].vector);
}
