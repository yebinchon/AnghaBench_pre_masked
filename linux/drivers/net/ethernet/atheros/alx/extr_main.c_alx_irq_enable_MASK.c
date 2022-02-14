
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alx_hw {TYPE_1__* pdev; } ;
struct alx_priv {int num_vec; struct alx_hw hw; int int_mask; } ;
struct TYPE_2__ {scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alx_hw*,int,int) ;
 int FUNC_1 (struct alx_hw*) ;
 int FUNC_2 (struct alx_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct alx_priv *VAR_2)
{
 struct alx_hw *VAR_3 = &VAR_2->hw;
 int VAR_4;


 FUNC_2(VAR_3, VAR_1, 0);
 FUNC_2(VAR_3, VAR_0, VAR_2->int_mask);
 FUNC_1(VAR_3);

 if (VAR_2->hw.pdev->msix_enabled) {

  for (VAR_4 = 0; VAR_4 < VAR_2->num_vec; VAR_4++)
   FUNC_0(VAR_3, VAR_4, 0);
 }
}
