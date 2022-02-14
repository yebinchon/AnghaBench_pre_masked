
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct cx25840_state {int dummy; } ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_0 (struct i2c_client*) ;
 scalar_t__ FUNC_1 (struct cx25840_state*) ;
 scalar_t__ FUNC_2 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_3 (int ) ;

__attribute__((used)) static const char *FUNC_4(struct i2c_client *VAR_4)
{
 struct cx25840_state *VAR_5 = FUNC_3(FUNC_0(VAR_4));

 if (VAR_3[0])
  return VAR_3;
 if (FUNC_2(VAR_5))
  return VAR_1;
 if (FUNC_1(VAR_5))
  return VAR_0;
 return VAR_2;
}
