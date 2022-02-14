
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alx_hw {TYPE_1__* pdev; } ;
struct alx_priv {int num_vec; struct alx_hw hw; } ;
struct TYPE_2__ {scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct alx_hw*,int,int) ;
 int FUNC_1 (struct alx_hw*) ;
 int FUNC_2 (struct alx_hw*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct alx_priv *VAR_3)
{
 struct alx_hw *VAR_4 = &VAR_3->hw;
 int VAR_5;

 FUNC_2(VAR_4, VAR_1, VAR_2);
 FUNC_2(VAR_4, VAR_0, 0);
 FUNC_1(VAR_4);

 if (VAR_3->hw.pdev->msix_enabled) {
  for (VAR_5 = 0; VAR_5 < VAR_3->num_vec; VAR_5++) {
   FUNC_0(VAR_4, VAR_5, 1);
   FUNC_4(FUNC_3(VAR_3->hw.pdev, VAR_5));
  }
 } else {
  FUNC_4(FUNC_3(VAR_3->hw.pdev, 0));
 }
}
