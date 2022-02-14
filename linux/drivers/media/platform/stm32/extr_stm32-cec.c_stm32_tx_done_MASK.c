
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ len; int * msg; } ;
struct stm32_cec {int irq_status; scalar_t__ tx_cnt; int adap; int regmap; TYPE_1__ tx_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int,int,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct stm32_cec *VAR_13, u32 VAR_14)
{
 if (VAR_14 & (VAR_11 | VAR_12)) {
  FUNC_0(VAR_13->adap, VAR_4,
      0, 0, 0, 1);
  return;
 }

 if (VAR_14 & VAR_0) {
  FUNC_0(VAR_13->adap, VAR_3,
      1, 0, 0, 0);
  return;
 }

 if (VAR_14 & VAR_7) {
  FUNC_0(VAR_13->adap, VAR_5,
      0, 1, 0, 0);
  return;
 }

 if (VAR_13->irq_status & VAR_8) {

  if (VAR_13->tx_cnt < VAR_13->tx_msg.len)
   FUNC_2(VAR_13->regmap, VAR_2,
         VAR_13->tx_msg.msg[VAR_13->tx_cnt++]);


  if (VAR_13->tx_cnt == VAR_13->tx_msg.len)
   FUNC_1(VAR_13->regmap, VAR_1, VAR_10, VAR_10);
 }

 if (VAR_13->irq_status & VAR_9)
  FUNC_0(VAR_13->adap, VAR_6, 0, 0, 0, 0);
}
