
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mt9m111 {TYPE_2__* current_mode; TYPE_3__* ctx; int hdl; TYPE_1__* fmt; int height; int width; int rect; int subdev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_6__ {int read_mode; } ;
struct TYPE_5__ {int reg_mask; int reg_val; } ;
struct TYPE_4__ {int code; } ;


 int FUNC_0 (struct i2c_client*,int ,int ,int ) ;
 int FUNC_1 (struct mt9m111*,TYPE_3__*) ;
 int FUNC_2 (struct mt9m111*,int ) ;
 int FUNC_3 (struct mt9m111*,int *,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 struct i2c_client* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mt9m111 *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_5(&VAR_0->subdev);

 FUNC_1(VAR_0, VAR_0->ctx);
 FUNC_2(VAR_0, VAR_0->fmt->code);
 FUNC_3(VAR_0, &VAR_0->rect,
   VAR_0->width, VAR_0->height, VAR_0->fmt->code);
 FUNC_4(&VAR_0->hdl);
 FUNC_0(VAR_1, VAR_0->ctx->read_mode,
    VAR_0->current_mode->reg_val,
    VAR_0->current_mode->reg_mask);
}
