
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct em28xx_IR* priv; } ;
struct em28xx_IR {int work; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_1)
{
 struct em28xx_IR *VAR_2 = VAR_1->priv;

 FUNC_0(&VAR_2->work, VAR_0);
 FUNC_1(&VAR_2->work, 0);

 return 0;
}
