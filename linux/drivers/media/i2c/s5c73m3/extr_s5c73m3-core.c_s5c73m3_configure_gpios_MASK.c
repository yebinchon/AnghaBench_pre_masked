
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5c73m3_gpio {int gpio; scalar_t__ level; } ;
struct s5c73m3 {struct s5c73m3_gpio* gpio; struct i2c_client* i2c_client; } ;
struct i2c_client {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,unsigned int,char const* const) ;
 int FUNC_1 (struct i2c_client*,char*,char const* const) ;

__attribute__((used)) static int FUNC_2(struct s5c73m3 *VAR_3)
{
 static const char * const VAR_4[] = {
  "S5C73M3_STBY", "S5C73M3_RST"
 };
 struct i2c_client *VAR_5 = VAR_3->i2c_client;
 struct s5c73m3_gpio *VAR_6 = VAR_3->gpio;
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  unsigned int VAR_9 = VAR_0;
  if (VAR_6[VAR_8].level)
   VAR_9 |= VAR_1;
  VAR_7 = FUNC_0(&VAR_5->dev, VAR_6[VAR_8].gpio, VAR_9,
         VAR_4[VAR_8]);
  if (VAR_7) {
   FUNC_1(VAR_5, "failed to request gpio %s\n",
     VAR_4[VAR_8]);
   return VAR_7;
  }
 }
 return 0;
}
