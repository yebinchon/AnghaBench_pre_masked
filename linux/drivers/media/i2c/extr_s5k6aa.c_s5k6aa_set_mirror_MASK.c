
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* vflip; } ;
struct s5k6aa {unsigned int inv_vflip; int inv_hflip; TYPE_3__ ctrls; TYPE_1__* preset; int sd; } ;
struct i2c_client {int dummy; } ;
struct TYPE_5__ {unsigned int val; } ;
struct TYPE_4__ {int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int ,unsigned int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct s5k6aa *VAR_0, int VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_2(&VAR_0->sd);
 int VAR_3 = VAR_0->preset->index;

 unsigned int VAR_4 = VAR_0->ctrls.vflip->val ^ VAR_0->inv_vflip;
 unsigned int VAR_5 = (VAR_1 ^ VAR_0->inv_hflip) | (VAR_4 << 1);

 return FUNC_1(VAR_2, FUNC_0(VAR_3), VAR_5);
}
