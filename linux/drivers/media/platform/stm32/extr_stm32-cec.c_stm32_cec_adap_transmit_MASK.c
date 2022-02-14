
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cec_msg {int len; int * msg; } ;
struct stm32_cec {scalar_t__ tx_cnt; struct cec_msg tx_msg; int regmap; } ;
struct cec_adapter {struct stm32_cec* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct cec_adapter *VAR_4, u8 VAR_5,
       u32 VAR_6, struct cec_msg *VAR_7)
{
 struct stm32_cec *VAR_8 = VAR_4->priv;


 VAR_8->tx_msg = *VAR_7;
 VAR_8->tx_cnt = 0;





 if (VAR_8->tx_msg.len == 1)
  FUNC_0(VAR_8->regmap, VAR_0, VAR_2, VAR_2);


 FUNC_0(VAR_8->regmap, VAR_0, VAR_3, VAR_3);


 FUNC_1(VAR_8->regmap, VAR_1, VAR_8->tx_msg.msg[0]);
 VAR_8->tx_cnt++;

 return 0;
}
