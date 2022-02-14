
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuner {scalar_t__ mode; unsigned int radio_freq; unsigned int tv_freq; int sd; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i2c_client*,unsigned int) ;
 int FUNC_1 (struct i2c_client*,unsigned int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tuner *VAR_1, unsigned int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(&VAR_1->sd);

 if (VAR_1->mode == VAR_0) {
  if (!VAR_2)
   VAR_2 = VAR_1->radio_freq;
  FUNC_0(VAR_3, VAR_2);
 } else {
  if (!VAR_2)
   VAR_2 = VAR_1->tv_freq;
  FUNC_1(VAR_3, VAR_2);
 }
}
