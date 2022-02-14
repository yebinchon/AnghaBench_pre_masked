
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (struct i2c_client*,int) ;
 int FUNC_4 (struct i2c_client*) ;
 scalar_t__ FUNC_5 (struct cx25840_state*) ;
 scalar_t__ FUNC_6 (struct cx25840_state*) ;
 scalar_t__ FUNC_7 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_1, u32 VAR_2)
{
 struct cx25840_state *VAR_3 = FUNC_8(FUNC_4(VAR_1));

 if (VAR_2 != 32000 && VAR_2 != 44100 && VAR_2 != 48000)
  return -VAR_0;

 if (FUNC_5(VAR_3))
  return FUNC_0(VAR_1, VAR_2);

 if (FUNC_6(VAR_3))
  return FUNC_1(VAR_1, VAR_2);

 if (FUNC_7(VAR_3))
  return FUNC_2(VAR_1, VAR_2);

 return FUNC_3(VAR_1, VAR_2);
}
