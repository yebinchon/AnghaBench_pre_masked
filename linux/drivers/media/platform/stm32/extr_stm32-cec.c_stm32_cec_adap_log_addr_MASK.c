
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stm32_cec {int regmap; } ;
struct cec_adapter {struct stm32_cec* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int,int,int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct cec_adapter *VAR_7, u8 VAR_8)
{
 struct stm32_cec *VAR_9 = VAR_7->priv;
 u32 VAR_10 = (1 << VAR_8) << 16;
 u32 VAR_11;


 FUNC_0(VAR_9->regmap, VAR_2, VAR_11, !(VAR_11 & VAR_6),
     100, VAR_4 * 1000);
 FUNC_1(VAR_9->regmap, VAR_2, VAR_0, 0);

 if (VAR_8 == VAR_3)
  FUNC_1(VAR_9->regmap, VAR_1, VAR_5, 0);
 else
  FUNC_1(VAR_9->regmap, VAR_1, VAR_10, VAR_10);

 FUNC_1(VAR_9->regmap, VAR_2, VAR_0, VAR_0);

 return 0;
}
