
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; } ;
struct s5k6aa_preset {int index; TYPE_1__ mbus_fmt; } ;
struct s5k6aa {int sd; } ;
struct i2c_client {int dummy; } ;
struct TYPE_4__ {int reg_p_fmt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (struct s5k6aa*,TYPE_1__*) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 struct i2c_client* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct s5k6aa *VAR_1,
          struct s5k6aa_preset *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_5(&VAR_1->sd);
 int VAR_4 = FUNC_3(VAR_1, &VAR_2->mbus_fmt);
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3, FUNC_2(VAR_2->index),
      VAR_2->mbus_fmt.width);
 if (!VAR_5)
  VAR_5 = FUNC_4(VAR_3, FUNC_1(VAR_2->index),
       VAR_2->mbus_fmt.height);
 if (!VAR_5)
  VAR_5 = FUNC_4(VAR_3, FUNC_0(VAR_2->index),
       VAR_0[VAR_4].reg_p_fmt);
 return VAR_5;
}
