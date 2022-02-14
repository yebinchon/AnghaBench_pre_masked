
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ucb1x00_ts {TYPE_1__* ucb; scalar_t__ rtask; } ;
struct input_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ irq_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,struct ucb1x00_ts*) ;
 struct ucb1x00_ts* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_2)
{
 struct ucb1x00_ts *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->rtask)
  FUNC_2(VAR_3->rtask);

 FUNC_4(VAR_3->ucb);
 FUNC_0(VAR_3->ucb->irq_base + VAR_0, VAR_3);
 FUNC_5(VAR_3->ucb, VAR_1, 0);
 FUNC_3(VAR_3->ucb);
}
