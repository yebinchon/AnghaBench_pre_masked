
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_ir_parameters {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct cx25840_state {struct cx25840_ir_state* ir_state; TYPE_1__* c; } ;
struct cx25840_ir_state {int tx_params_lock; int rx_params_lock; TYPE_1__* c; int rx_kfifo; int rx_kfifo_lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 struct v4l2_subdev_ir_parameters VAR_5 ;
 struct v4l2_subdev_ir_parameters VAR_6 ;
 struct cx25840_ir_state* FUNC_1 (int *,int,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct cx25840_state*) ;
 scalar_t__ FUNC_3 (struct cx25840_state*) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 struct cx25840_state* FUNC_7 (struct v4l2_subdev*) ;
 int VAR_9 ;
 int FUNC_8 (struct v4l2_subdev*,int ,int ,struct v4l2_subdev_ir_parameters*) ;

int FUNC_9(struct v4l2_subdev *VAR_10)
{
 struct cx25840_state *VAR_11 = FUNC_7(VAR_10);
 struct cx25840_ir_state *VAR_12;
 struct v4l2_subdev_ir_parameters VAR_13;


 if (!(FUNC_2(VAR_11) || FUNC_3(VAR_11)))
  return 0;

 VAR_12 = FUNC_1(&VAR_11->c->dev, sizeof(*VAR_12), VAR_3);
 if (VAR_12 == ((void*)0))
  return -VAR_2;

 FUNC_6(&VAR_12->rx_kfifo_lock);
 if (FUNC_4(&VAR_12->rx_kfifo,
   VAR_1, VAR_3))
  return -VAR_2;

 VAR_12->c = VAR_11->c;
 VAR_11->ir_state = VAR_12;


 if (FUNC_2(VAR_11) || FUNC_3(VAR_11))
  FUNC_0(VAR_12->c, VAR_0, VAR_4);
 else
  FUNC_0(VAR_12->c, VAR_0, 0);

 FUNC_5(&VAR_12->rx_params_lock);
 VAR_13 = VAR_5;
 FUNC_8(VAR_10, VAR_7, VAR_8, &VAR_13);

 FUNC_5(&VAR_12->tx_params_lock);
 VAR_13 = VAR_6;
 FUNC_8(VAR_10, VAR_7, VAR_9, &VAR_13);

 return 0;
}
