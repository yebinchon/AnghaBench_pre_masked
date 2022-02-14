
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {TYPE_1__* gain; TYPE_2__* exposure; } ;
struct s5k6aa {TYPE_3__ ctrls; int sd; } ;
struct i2c_client {int dummy; } ;
struct TYPE_5__ {unsigned int val; } ;
struct TYPE_4__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ,int*) ;
 int FUNC_1 (struct i2c_client*,unsigned int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int,int ,struct i2c_client*,char*,unsigned int,int,int) ;
 struct i2c_client* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct s5k6aa *VAR_5, int VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_5(&VAR_5->sd);
 unsigned int VAR_8 = VAR_5->ctrls.exposure->val;
 u16 VAR_9;

 int VAR_10 = FUNC_0(VAR_7, VAR_2, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_4(1, VAR_4, VAR_7, "man_exp: %d, auto_exp: %d, a_alg: 0x%x\n",
   VAR_8, VAR_6, VAR_9);

 if (VAR_6 == VAR_3) {
  VAR_9 |= VAR_0 | VAR_1;
 } else {
  VAR_10 = FUNC_1(VAR_7, VAR_8);
  if (VAR_10)
   return VAR_10;
  VAR_10 = FUNC_2(VAR_7, VAR_5->ctrls.gain->val);
  if (VAR_10)
   return VAR_10;
  VAR_9 &= ~(VAR_0 | VAR_1);
 }

 return FUNC_3(VAR_7, VAR_2, VAR_9);
}
