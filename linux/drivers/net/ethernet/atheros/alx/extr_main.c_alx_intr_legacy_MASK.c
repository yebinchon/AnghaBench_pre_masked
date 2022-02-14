
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alx_hw {int dummy; } ;
struct alx_priv {int int_mask; struct alx_hw hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct alx_priv*,int) ;
 int FUNC_1 (struct alx_hw*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct alx_priv *VAR_5 = VAR_4;
 struct alx_hw *VAR_6 = &VAR_5->hw;
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_0);

 if (VAR_7 & VAR_1 || !(VAR_7 & VAR_5->int_mask))
  return VAR_2;

 return FUNC_0(VAR_5, VAR_7);
}
