
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct it913x_dev {struct dvb_frontend* fe; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {int * tuner_priv; TYPE_1__ ops; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct it913x_dev*) ;
 int FUNC_2 (int *,int ,int) ;
 struct it913x_dev* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct it913x_dev *VAR_1 = FUNC_3(VAR_0);
 struct dvb_frontend *VAR_2 = VAR_1->fe;

 FUNC_0(&VAR_0->dev, "\n");

 FUNC_2(&VAR_2->ops.tuner_ops, 0, sizeof(struct dvb_tuner_ops));
 VAR_2->tuner_priv = ((void*)0);
 FUNC_1(VAR_1);

 return 0;
}
