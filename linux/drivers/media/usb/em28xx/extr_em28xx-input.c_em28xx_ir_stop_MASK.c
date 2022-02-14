
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct em28xx_IR* priv; } ;
struct em28xx_IR {int work; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct rc_dev *VAR_0)
{
 struct em28xx_IR *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_1->work);
}
