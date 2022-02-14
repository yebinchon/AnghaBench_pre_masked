
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* msg; scalar_t__ len; } ;
struct stm32_cec {int irq_status; TYPE_1__ rx_msg; int adap; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct stm32_cec *VAR_5, u32 VAR_6)
{
 if (VAR_5->irq_status & (VAR_1 | VAR_4)) {
  VAR_5->rx_msg.len = 0;
  return;
 }

 if (VAR_5->irq_status & VAR_2) {
  u32 VAR_7;

  FUNC_1(VAR_5->regmap, VAR_0, &VAR_7);
  VAR_5->rx_msg.msg[VAR_5->rx_msg.len++] = VAR_7 & 0xFF;
 }

 if (VAR_5->irq_status & VAR_3) {
  FUNC_0(VAR_5->adap, &VAR_5->rx_msg);
  VAR_5->rx_msg.len = 0;
 }
}
