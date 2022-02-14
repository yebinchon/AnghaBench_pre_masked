
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; int adapter; } ;
struct et8ek8_reg {scalar_t__ type; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,struct et8ek8_reg const*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_6,
     const struct et8ek8_reg *VAR_7)
{
 int VAR_8, VAR_9 = 0;
 const struct et8ek8_reg *VAR_10;

 if (!VAR_6->adapter)
  return -VAR_1;

 if (!VAR_7)
  return -VAR_0;


 VAR_10 = VAR_7;

 do {




  while (VAR_10->type != VAR_5 &&
         VAR_10->type != VAR_4) {




   if (FUNC_0(VAR_10->type != VAR_3 &&
     VAR_10->type != VAR_2,
     "Invalid type = %d", VAR_10->type)) {
    return -VAR_0;
   }




   VAR_9++;
   VAR_10++;
  }


  VAR_8 = FUNC_2(VAR_6, VAR_7, VAR_9);


  if (VAR_8 < 0) {
   FUNC_1(&VAR_6->dev, "i2c transfer error!\n");
   return VAR_8;
  }





  if (VAR_10->type == VAR_4) {
   FUNC_3(VAR_10->val);




   VAR_10++;
   VAR_7 = VAR_10;
   VAR_9 = 0;
  }
 } while (VAR_10->type != VAR_5);

 return 0;
}
