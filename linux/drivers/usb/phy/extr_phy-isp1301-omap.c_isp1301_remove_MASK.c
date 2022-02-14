
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1301 {int work; int timer; int todo; } ;
struct i2c_client {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct isp1301*) ;
 int FUNC_3 (int) ;
 struct isp1301* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct isp1301*,int ,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct isp1301*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_4)
{
 struct isp1301 *VAR_5;

 VAR_5 = FUNC_4(VAR_4);

 FUNC_5(VAR_5, VAR_0, ~0);
 FUNC_5(VAR_5, VAR_1, ~0);
 FUNC_2(VAR_4->irq, VAR_5);



 if (FUNC_6())
  FUNC_3(2);

 FUNC_9(VAR_2, &VAR_5->todo);
 FUNC_0(&VAR_5->timer);
 FUNC_1(&VAR_5->work);

 FUNC_8(&VAR_4->dev);
 VAR_3 = ((void*)0);

 return 0;
}
