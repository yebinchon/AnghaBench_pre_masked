
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct priv {int clk; scalar_t__ base; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct priv* FUNC_2 (struct phy*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_7)
{
 struct priv *VAR_8 = FUNC_2(VAR_7);
 u32 VAR_9;

 FUNC_1(VAR_8->clk);


 VAR_9 = FUNC_3(VAR_8->base + VAR_6);
 VAR_9 |= (VAR_2 | VAR_1 |
  VAR_4 | VAR_3);
 FUNC_4(VAR_9 , VAR_8->base + VAR_6);


 VAR_9 = FUNC_3(VAR_8->base + VAR_5);
 VAR_9 &= ~VAR_0;
 FUNC_4(VAR_9, VAR_8->base + VAR_5);

 FUNC_0(VAR_8->clk);

 return 0;
}
