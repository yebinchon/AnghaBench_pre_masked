
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_chip {int io_lock; } ;
struct i2c_client {int dummy; } ;


 struct max8925_chip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int,unsigned char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct i2c_client *VAR_0, int VAR_1,
  int VAR_2, unsigned char *VAR_3)
{
 struct max8925_chip *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;

 FUNC_2(&VAR_4->io_lock);
 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_3(&VAR_4->io_lock);

 return VAR_5;
}
