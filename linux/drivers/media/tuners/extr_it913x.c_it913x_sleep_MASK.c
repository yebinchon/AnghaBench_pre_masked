
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct it913x_dev {int role; int active; int regmap; struct platform_device* pdev; } ;
struct dvb_frontend {struct it913x_dev* tuner_priv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct it913x_dev *VAR_2 = VAR_1->tuner_priv;
 struct platform_device *VAR_3 = VAR_2->pdev;
 int VAR_4, VAR_5;

 FUNC_0(&VAR_3->dev, "role %u\n", VAR_2->role);

 VAR_2->active = 0;

 VAR_4 = FUNC_1(VAR_2->regmap, 0x80ec40, "\x00", 1);
 if (VAR_4)
  goto err;





 if (VAR_2->role == VAR_0)
  VAR_5 = 4;
 else
  VAR_5 = 15;

 FUNC_0(&VAR_3->dev, "role %u, len %d\n", VAR_2->role, VAR_5);

 VAR_4 = FUNC_1(VAR_2->regmap, 0x80ec02,
   "\x3f\x1f\x3f\x3e\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
   VAR_5);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_1(VAR_2->regmap, 0x80ec12, "\x00\x00\x00\x00", 4);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_1(VAR_2->regmap, 0x80ec17,
   "\x00\x00\x00\x00\x00\x00\x00\x00\x00", 9);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_1(VAR_2->regmap, 0x80ec22,
   "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 10);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_1(VAR_2->regmap, 0x80ec20, "\x00", 1);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_1(VAR_2->regmap, 0x80ec3f, "\x01", 1);
 if (VAR_4)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_3->dev, "failed %d\n", VAR_4);
 return VAR_4;
}
