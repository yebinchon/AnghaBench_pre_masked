
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct s5k6aa_ctrls {TYPE_3__* gain_blue; TYPE_2__* gain_green; TYPE_1__* gain_red; } ;
struct s5k6aa {struct s5k6aa_ctrls ctrls; int sd; } ;
struct i2c_client {int dummy; } ;
struct TYPE_6__ {int val; } ;
struct TYPE_5__ {int val; } ;
struct TYPE_4__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i2c_client*,int ,int*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct s5k6aa *VAR_8, int VAR_9)
{
 struct i2c_client *VAR_10 = FUNC_2(&VAR_8->sd);
 struct s5k6aa_ctrls *VAR_11 = &VAR_8->ctrls;
 u16 VAR_12;

 int VAR_13 = FUNC_0(VAR_10, VAR_1, &VAR_12);

 if (!VAR_13 && !VAR_9) {
  VAR_13 = FUNC_1(VAR_10, VAR_6, VAR_11->gain_red->val);
  if (!VAR_13)
   VAR_13 = FUNC_1(VAR_10, VAR_7, 1);
  if (VAR_13)
   return VAR_13;

  VAR_13 = FUNC_1(VAR_10, VAR_4, VAR_11->gain_green->val);
  if (!VAR_13)
   VAR_13 = FUNC_1(VAR_10, VAR_5, 1);
  if (VAR_13)
   return VAR_13;

  VAR_13 = FUNC_1(VAR_10, VAR_2, VAR_11->gain_blue->val);
  if (!VAR_13)
   VAR_13 = FUNC_1(VAR_10, VAR_3, 1);
 }
 if (!VAR_13) {
  VAR_12 = VAR_9 ? VAR_12 | VAR_0 : VAR_12 & ~VAR_0;
  VAR_13 = FUNC_1(VAR_10, VAR_1, VAR_12);
 }

 return VAR_13;
}
