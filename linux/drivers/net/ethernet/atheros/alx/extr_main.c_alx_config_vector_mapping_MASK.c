
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct alx_hw {TYPE_1__* pdev; } ;
struct alx_priv {int num_txq; struct alx_hw hw; } ;
struct TYPE_2__ {scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct alx_hw*,int ,int) ;
 int* VAR_4 ;

__attribute__((used)) static void FUNC_1(struct alx_priv *VAR_5)
{
 struct alx_hw *VAR_6 = &VAR_5->hw;
 u32 VAR_7[2] = {0, 0};
 int VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_5->hw.pdev->msix_enabled) {

  for (VAR_8 = 0, VAR_9 = 1; VAR_8 < VAR_5->num_txq; VAR_8++, VAR_9++) {
   VAR_10 = VAR_4[VAR_8 * 2];
   VAR_11 = VAR_4[VAR_8 * 2 + 1];
   VAR_7[VAR_10] |= VAR_9 << VAR_11;
  }


  VAR_7[0] |= 1 << VAR_2;
 }

 FUNC_0(VAR_6, VAR_1, VAR_7[0]);
 FUNC_0(VAR_6, VAR_3, VAR_7[1]);
 FUNC_0(VAR_6, VAR_0, 0);
}
