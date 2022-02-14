
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct ir_rx51* priv; } ;
struct ir_rx51 {int device_is_open; int pwm; int timer; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ir_rx51*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct rc_dev *VAR_0)
{
 struct ir_rx51 *VAR_1 = VAR_0->priv;

 FUNC_1(&VAR_1->timer);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1->pwm);

 FUNC_0(1, &VAR_1->device_is_open);
}
