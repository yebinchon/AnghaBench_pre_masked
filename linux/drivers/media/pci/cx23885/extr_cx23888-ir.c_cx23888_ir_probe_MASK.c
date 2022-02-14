
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_ir_parameters {int dummy; } ;
struct v4l2_subdev {int grp_id; int name; } ;
struct cx23888_ir_state {int rx_kfifo; int tx_params_lock; int rx_params_lock; struct v4l2_subdev sd; struct cx23885_dev* dev; int rx_kfifo_lock; } ;
struct cx23885_dev {char* name; int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cx23885_dev*,int ,int ) ;
 struct v4l2_subdev_ir_parameters VAR_6 ;
 struct v4l2_subdev_ir_parameters VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 struct cx23888_ir_state* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int FUNC_5 (int ,int,char*,char*) ;
 int FUNC_6 (int *) ;
 int VAR_10 ;
 int FUNC_7 (int *,struct v4l2_subdev*) ;
 int FUNC_8 (struct v4l2_subdev*,struct cx23888_ir_state*) ;
 int FUNC_9 (struct v4l2_subdev*,int ,int ,struct v4l2_subdev_ir_parameters*) ;
 int FUNC_10 (struct v4l2_subdev*,int *) ;

int FUNC_11(struct cx23885_dev *VAR_11)
{
 struct cx23888_ir_state *VAR_12;
 struct v4l2_subdev *VAR_13;
 struct v4l2_subdev_ir_parameters VAR_14;
 int VAR_15;

 VAR_12 = FUNC_3(sizeof(struct cx23888_ir_state), VAR_4);
 if (VAR_12 == ((void*)0))
  return -VAR_3;

 FUNC_6(&VAR_12->rx_kfifo_lock);
 if (FUNC_1(&VAR_12->rx_kfifo, VAR_2, VAR_4))
  return -VAR_3;

 VAR_12->dev = VAR_11;
 VAR_13 = &VAR_12->sd;

 FUNC_10(VAR_13, &VAR_5);
 FUNC_8(VAR_13, VAR_12);

 FUNC_5(VAR_13->name, sizeof(VAR_13->name), "%s/888-ir", VAR_11->name);
 VAR_13->grp_id = VAR_0;

 VAR_15 = FUNC_7(&VAR_11->v4l2_dev, VAR_13);
 if (VAR_15 == 0) {





  FUNC_0(VAR_11, VAR_1, 0);

  FUNC_4(&VAR_12->rx_params_lock);
  VAR_14 = VAR_6;
  FUNC_9(VAR_13, VAR_8, VAR_9, &VAR_14);

  FUNC_4(&VAR_12->tx_params_lock);
  VAR_14 = VAR_7;
  FUNC_9(VAR_13, VAR_8, VAR_10, &VAR_14);
 } else {
  FUNC_2(&VAR_12->rx_kfifo);
 }
 return VAR_15;
}
