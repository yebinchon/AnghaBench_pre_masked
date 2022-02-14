
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
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct hip04_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_10)
{
 struct hip04_priv *VAR_11 = FUNC_0(VAR_10);
 u32 VAR_12;


 VAR_12 = FUNC_1(VAR_11->base + VAR_1);
 VAR_12 |= VAR_3 | VAR_5;
 FUNC_2(VAR_12, VAR_11->base + VAR_1);


 VAR_12 = VAR_9;
 FUNC_2(VAR_12, VAR_11->base + VAR_8);


 VAR_12 = VAR_2 | VAR_4;
 FUNC_2(VAR_12, VAR_11->base + VAR_6);


 VAR_11->reg_inten = VAR_0;
 FUNC_2(VAR_11->reg_inten, VAR_11->base + VAR_7);
}
