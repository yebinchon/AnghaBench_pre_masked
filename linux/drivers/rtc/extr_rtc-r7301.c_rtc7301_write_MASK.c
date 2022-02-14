
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc7301_priv {int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct rtc7301_priv *VAR_0, u8 VAR_1, unsigned int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0->regmap);

 FUNC_1(VAR_0->regmap, VAR_3 * VAR_2, VAR_1);
}
