
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5k5baf_gpio {int gpio; scalar_t__ level; } ;
struct s5k5baf {struct s5k5baf_gpio* gpios; int sd; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,char const* const) ;
 int FUNC_1 (struct i2c_client*,char*,char const* const) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct s5k5baf *VAR_3)
{
 static const char * const VAR_4[] = { "S5K5BAF_STBY", "S5K5BAF_RST" };
 struct i2c_client *VAR_5 = FUNC_2(&VAR_3->sd);
 struct s5k5baf_gpio *VAR_6 = VAR_3->gpios;
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
  int VAR_9 = VAR_0;
  if (VAR_6[VAR_8].level)
   VAR_9 |= VAR_1;
  VAR_7 = FUNC_0(&VAR_5->dev, VAR_6[VAR_8].gpio, VAR_9, VAR_4[VAR_8]);
  if (VAR_7 < 0) {
   FUNC_1(VAR_5, "failed to request gpio %s\n", VAR_4[VAR_8]);
   return VAR_7;
  }
 }
 return 0;
}
