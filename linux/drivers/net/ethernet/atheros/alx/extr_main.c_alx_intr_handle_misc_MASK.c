
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alx_hw {int dummy; } ;
struct alx_priv {int int_mask; int dev; struct alx_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct alx_priv*) ;
 int FUNC_1 (struct alx_priv*) ;
 int FUNC_2 (struct alx_hw*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct alx_priv*,struct alx_hw*,int ,char*,int) ;

__attribute__((used)) static bool FUNC_5(struct alx_priv *VAR_4, u32 VAR_5)
{
 struct alx_hw *VAR_6 = &VAR_4->hw;

 if (VAR_5 & VAR_2) {
  FUNC_4(VAR_4, VAR_6, VAR_4->dev,
      "fatal interrupt 0x%x, resetting\n", VAR_5);
  FUNC_1(VAR_4);
  return 1;
 }

 if (VAR_5 & VAR_1)
  FUNC_3(VAR_4->dev, "alert interrupt: 0x%x\n", VAR_5);

 if (VAR_5 & VAR_3) {




  VAR_4->int_mask &= ~VAR_3;
  FUNC_2(VAR_6, VAR_0, VAR_4->int_mask);
  FUNC_0(VAR_4);
 }

 return 0;
}
