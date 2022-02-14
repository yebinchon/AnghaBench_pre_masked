
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65010_board {int (* teardown ) (struct i2c_client*,int ) ;int context; } ;
struct tps65010 {int file; int work; } ;
struct i2c_client {scalar_t__ irq; int name; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char*,int ,int) ;
 struct tps65010_board* FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,struct tps65010*) ;
 struct tps65010* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_1)
{
 struct tps65010 *VAR_2 = FUNC_5(VAR_1);
 struct tps65010_board *VAR_3 = FUNC_3(&VAR_1->dev);

 if (VAR_3 && VAR_3->teardown) {
  int VAR_4 = VAR_3->teardown(VAR_1, VAR_3->context);
  if (VAR_4 < 0)
   FUNC_2(&VAR_1->dev, "board %s %s err %d\n",
    "teardown", VAR_1->name, VAR_4);
 }
 if (VAR_1->irq > 0)
  FUNC_4(VAR_1->irq, VAR_2);
 FUNC_0(&VAR_2->work);
 FUNC_1(VAR_2->file);
 VAR_0 = ((void*)0);
 return 0;
}
