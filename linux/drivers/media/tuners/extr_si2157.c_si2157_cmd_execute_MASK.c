
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si2157_dev {int i2c_mutex; } ;
struct si2157_cmd {int wlen; int* args; int rlen; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 struct si2157_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int*,int) ;
 int FUNC_3 (struct i2c_client*,int*,int) ;
 unsigned long VAR_3 ;
 int FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_4, struct si2157_cmd *VAR_5)
{
 struct si2157_dev *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;
 unsigned long VAR_8;

 FUNC_6(&VAR_6->i2c_mutex);

 if (VAR_5->wlen) {

  VAR_7 = FUNC_3(VAR_4, VAR_5->args, VAR_5->wlen);
  if (VAR_7 < 0) {
   goto err_mutex_unlock;
  } else if (VAR_7 != VAR_5->wlen) {
   VAR_7 = -VAR_0;
   goto err_mutex_unlock;
  }
 }

 if (VAR_5->rlen) {


  VAR_8 = VAR_3 + FUNC_5(80);
  while (!FUNC_8(VAR_3, VAR_8)) {
   VAR_7 = FUNC_2(VAR_4, VAR_5->args, VAR_5->rlen);
   if (VAR_7 < 0) {
    goto err_mutex_unlock;
   } else if (VAR_7 != VAR_5->rlen) {
    VAR_7 = -VAR_0;
    goto err_mutex_unlock;
   }


   if ((VAR_5->args[0] >> 7) & 0x01)
    break;
  }

  FUNC_0(&VAR_4->dev, "cmd execution took %d ms\n",
    FUNC_4(VAR_3) -
    (FUNC_4(VAR_8) - 80));

  if (!((VAR_5->args[0] >> 7) & 0x01)) {
   VAR_7 = -VAR_1;
   goto err_mutex_unlock;
  }
 }

 FUNC_7(&VAR_6->i2c_mutex);
 return 0;

err_mutex_unlock:
 FUNC_7(&VAR_6->i2c_mutex);
 FUNC_0(&VAR_4->dev, "failed=%d\n", VAR_7);
 return VAR_7;
}
