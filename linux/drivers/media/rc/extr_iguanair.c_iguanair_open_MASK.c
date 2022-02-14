
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct iguanair* priv; } ;
struct iguanair {int receiver_on; int lock; } ;


 int FUNC_0 (struct iguanair*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct rc_dev *VAR_0)
{
 struct iguanair *VAR_1 = VAR_0->priv;
 int VAR_2;

 FUNC_1(&VAR_1->lock);

 VAR_2 = FUNC_0(VAR_1, 1);
 if (VAR_2 == 0)
  VAR_1->receiver_on = 1;

 FUNC_2(&VAR_1->lock);

 return VAR_2;
}
