
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device_id {int driver_data; } ;
struct TYPE_6__ {struct it913x_platform_data* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct it913x_platform_data {int role; struct dvb_frontend* fe; int regmap; } ;
struct it913x_dev {int chip_ver; int role; struct dvb_frontend* fe; int regmap; struct platform_device* pdev; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_5__ {int tuner_ops; } ;
struct dvb_frontend {TYPE_1__ ops; struct it913x_dev* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int,...) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 int VAR_2 ;
 struct it913x_dev* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 struct platform_device_id* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,struct it913x_dev*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct it913x_platform_data *VAR_4 = VAR_3->dev.platform_data;
 struct dvb_frontend *VAR_5 = VAR_4->fe;
 struct it913x_dev *VAR_6;
 const struct platform_device_id *VAR_7 = FUNC_5(VAR_3);
 int VAR_8;
 char *VAR_9;

 VAR_6 = FUNC_3(sizeof(struct it913x_dev), VAR_1);
 if (VAR_6 == ((void*)0)) {
  VAR_8 = -VAR_0;
  FUNC_1(&VAR_3->dev, "kzalloc() failed\n");
  goto err;
 }

 VAR_6->pdev = VAR_3;
 VAR_6->regmap = VAR_4->regmap;
 VAR_6->fe = VAR_4->fe;
 VAR_6->chip_ver = VAR_7->driver_data;
 VAR_6->role = VAR_4->role;

 VAR_5->tuner_priv = VAR_6;
 FUNC_4(&VAR_5->ops.tuner_ops, &VAR_2,
   sizeof(struct dvb_tuner_ops));
 FUNC_6(VAR_3, VAR_6);

 if (VAR_6->chip_ver == 1)
  VAR_9 = "AX";
 else if (VAR_6->chip_ver == 2)
  VAR_9 = "BX";
 else
  VAR_9 = "??";

 FUNC_2(&VAR_3->dev, "ITE IT913X %s successfully attached\n",
   VAR_9);
 FUNC_0(&VAR_3->dev, "chip_ver %u, role %u\n", VAR_6->chip_ver, VAR_6->role);
 return 0;
err:
 FUNC_0(&VAR_3->dev, "failed %d\n", VAR_8);
 return VAR_8;
}
