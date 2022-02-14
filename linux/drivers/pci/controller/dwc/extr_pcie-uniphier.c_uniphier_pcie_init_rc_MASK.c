
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_pcie_priv {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct uniphier_pcie_priv*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uniphier_pcie_priv *VAR_9)
{
 u32 VAR_10;


 VAR_10 = FUNC_0(VAR_9->base + VAR_0);
 VAR_10 |= VAR_8;
 FUNC_3(VAR_10, VAR_9->base + VAR_0);


 VAR_10 = FUNC_0(VAR_9->base + VAR_7);
 VAR_10 &= ~(VAR_2 | VAR_4
   | VAR_6);
 VAR_10 |= VAR_1 | VAR_3
  | VAR_5;
 FUNC_3(VAR_10, VAR_9->base + VAR_7);

 FUNC_1(VAR_9, 0);

 FUNC_2(100000, 200000);


 VAR_10 = FUNC_0(VAR_9->base + VAR_7);
 VAR_10 |= VAR_4 | VAR_3;
 FUNC_3(VAR_10, VAR_9->base + VAR_7);
}
