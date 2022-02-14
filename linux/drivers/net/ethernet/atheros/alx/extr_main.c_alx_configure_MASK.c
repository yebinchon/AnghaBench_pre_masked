
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alx_hw {int rx_ctrl; } ;
struct alx_priv {int dev; struct alx_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct alx_hw*) ;
 int FUNC_2 (struct alx_hw*) ;
 int FUNC_3 (struct alx_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct alx_priv *VAR_1)
{
 struct alx_hw *VAR_2 = &VAR_1->hw;

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 FUNC_0(VAR_1->dev);

 FUNC_3(VAR_2, VAR_0, VAR_2->rx_ctrl);
}
