
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_ir_parameters {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct cx25840_ir_state {int tx_params_lock; int tx_params; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev_ir_parameters*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cx25840_ir_state* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1,
          struct v4l2_subdev_ir_parameters *VAR_2)
{
 struct cx25840_ir_state *VAR_3 = FUNC_3(VAR_1);

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_3->tx_params_lock);
 FUNC_0(VAR_2, &VAR_3->tx_params,
          sizeof(struct v4l2_subdev_ir_parameters));
 FUNC_2(&VAR_3->tx_params_lock);
 return 0;
}
