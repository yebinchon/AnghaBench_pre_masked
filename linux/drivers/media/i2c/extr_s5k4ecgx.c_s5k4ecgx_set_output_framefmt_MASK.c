
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s5k4ecgx {TYPE_1__* curr_pixfmt; TYPE_3__* curr_frmsize; int sd; } ;
struct i2c_client {int dummy; } ;
struct TYPE_5__ {int height; int width; } ;
struct TYPE_6__ {TYPE_2__ size; } ;
struct TYPE_4__ {int reg_p_format; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 struct i2c_client* FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct s5k4ecgx *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_4(&VAR_0->sd);
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1, FUNC_2(0),
        VAR_0->curr_frmsize->size.width);
 if (!VAR_2)
  VAR_2 = FUNC_3(VAR_1, FUNC_1(0),
         VAR_0->curr_frmsize->size.height);
 if (!VAR_2)
  VAR_2 = FUNC_3(VAR_1, FUNC_0(0),
         VAR_0->curr_pixfmt->reg_p_format);
 return VAR_2;
}
