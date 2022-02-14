
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct hip04_priv {int reg_inten; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct hip04_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_5)
{
 struct hip04_priv *VAR_6 = FUNC_0(VAR_5);
 u32 VAR_7;


 VAR_6->reg_inten &= ~(VAR_0);
 FUNC_2(VAR_6->reg_inten, VAR_6->base + VAR_4);


 VAR_7 = FUNC_1(VAR_6->base + VAR_1);
 VAR_7 &= ~(VAR_2 | VAR_3);
 FUNC_2(VAR_7, VAR_6->base + VAR_1);
}
