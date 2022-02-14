
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si2157_dev {int active; int stat_work; } ;
struct si2157_cmd {int wlen; int rlen; int args; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct i2c_client* tuner_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 struct si2157_dev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct i2c_client*,struct si2157_cmd*) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_0)
{
 struct i2c_client *VAR_1 = VAR_0->tuner_priv;
 struct si2157_dev *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;
 struct si2157_cmd VAR_4;

 FUNC_1(&VAR_1->dev, "\n");

 VAR_2->active = 0;


 FUNC_0(&VAR_2->stat_work);


 FUNC_3(VAR_4.args, "\x16\x00", 2);
 VAR_4.wlen = 2;
 VAR_4.rlen = 1;
 VAR_3 = FUNC_4(VAR_1, &VAR_4);
 if (VAR_3)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_1->dev, "failed=%d\n", VAR_3);
 return VAR_3;
}
