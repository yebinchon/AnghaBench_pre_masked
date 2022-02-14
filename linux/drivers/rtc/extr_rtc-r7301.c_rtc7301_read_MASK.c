
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct rtc7301_priv {int regmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,unsigned int*) ;

__attribute__((used)) static u8 FUNC_2(struct rtc7301_priv *VAR_0, unsigned int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->regmap);
 unsigned int VAR_3;

 FUNC_1(VAR_0->regmap, VAR_2 * VAR_1, &VAR_3);

 return VAR_3 & 0xf;
}
