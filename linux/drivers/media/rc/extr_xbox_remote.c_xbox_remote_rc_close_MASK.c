
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbox_remote {int irq_urb; } ;
struct rc_dev {struct xbox_remote* priv; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct rc_dev *VAR_0)
{
 struct xbox_remote *VAR_1 = VAR_0->priv;

 FUNC_0(VAR_1->irq_urb);
}
