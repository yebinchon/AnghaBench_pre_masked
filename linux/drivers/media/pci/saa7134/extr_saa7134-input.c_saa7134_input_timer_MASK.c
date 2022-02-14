
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct saa7134_dev {int dummy; } ;
struct saa7134_card_ir {int polling; int timer; TYPE_1__* dev; } ;
struct TYPE_2__ {struct saa7134_dev* priv; } ;


 int FUNC_0 (struct saa7134_dev*) ;
 struct saa7134_card_ir* FUNC_1 (int ,struct timer_list*,int ) ;
 struct saa7134_card_ir* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct saa7134_card_ir *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct saa7134_dev *VAR_5 = VAR_4->dev->priv;

 FUNC_0(VAR_5);
 FUNC_2(&VAR_4->timer, VAR_1 + FUNC_3(VAR_4->polling));
}
