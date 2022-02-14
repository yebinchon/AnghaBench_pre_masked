
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int shutdown; } ;
struct cx25840_ir_state {int tx_params_lock; TYPE_1__ tx_params; struct i2c_client* c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct cx25840_ir_state* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_3)
{
 struct cx25840_ir_state *VAR_4 = FUNC_6(VAR_3);
 struct i2c_client *VAR_5;

 if (VAR_4 == ((void*)0))
  return -VAR_1;

 VAR_5 = VAR_4->c;
 FUNC_4(&VAR_4->tx_params_lock);


 FUNC_3(VAR_3, 0);
 FUNC_0(VAR_5, 0);
 FUNC_1(VAR_5, 0);
 FUNC_2(VAR_5, VAR_0, VAR_2);

 VAR_4->tx_params.shutdown = 1;

 FUNC_5(&VAR_4->tx_params_lock);
 return 0;
}
