
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct iguanair* priv; } ;
struct iguanair {int receiver_on; int lock; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct iguanair*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rc_dev *VAR_1)
{
 struct iguanair *VAR_2 = VAR_1->priv;
 int VAR_3;

 FUNC_2(&VAR_2->lock);

 VAR_3 = FUNC_1(VAR_2, 0);
 VAR_2->receiver_on = 0;
 if (VAR_3 && VAR_3 != -VAR_0)
  FUNC_0(VAR_2->dev, "failed to disable receiver: %d\n", VAR_3);

 FUNC_3(&VAR_2->lock);
}
