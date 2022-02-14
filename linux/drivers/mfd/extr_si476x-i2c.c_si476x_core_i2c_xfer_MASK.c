
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si476x_core {int client; } ;
typedef enum si476x_i2c_type { ____Placeholder_si476x_i2c_type } si476x_i2c_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct si476x_core*) ;

int FUNC_3(struct si476x_core *VAR_2,
      enum si476x_i2c_type VAR_3,
      char *VAR_4, int VAR_5)
{
 static int VAR_6;
 int VAR_7;
 if (VAR_3 == VAR_0)
  VAR_7 = FUNC_1(VAR_2->client, VAR_4, VAR_5);
 else
  VAR_7 = FUNC_0(VAR_2->client, VAR_4, VAR_5);

 if (VAR_7 < 0) {
  if (VAR_6++ > VAR_1)
   FUNC_2(VAR_2);
 } else {
  VAR_6 = 0;
 }

 return VAR_7;
}
