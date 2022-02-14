
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qm1d1b0004_state {struct i2c_client* i2c; } ;
struct qm1d1b0004_config {struct dvb_frontend* fe; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {struct qm1d1b0004_config* platform_data; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct TYPE_3__ {int tuner_ops; } ;
struct dvb_frontend {struct qm1d1b0004_state* tuner_priv; TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct i2c_client*,struct dvb_frontend*) ;
 int FUNC_2 (struct qm1d1b0004_state*) ;
 struct qm1d1b0004_state* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int VAR_2 ;
 int FUNC_5 (struct dvb_frontend*,struct qm1d1b0004_config*) ;

__attribute__((used)) static int
FUNC_6(struct i2c_client *VAR_3, const struct i2c_device_id *VAR_4)
{
 struct dvb_frontend *VAR_5;
 struct qm1d1b0004_config *VAR_6;
 struct qm1d1b0004_state *VAR_7;
 int VAR_8;

 VAR_6 = VAR_3->dev.platform_data;
 VAR_5 = VAR_6->fe;
 FUNC_1(VAR_3, VAR_5);

 VAR_5->tuner_priv = FUNC_3(sizeof(struct qm1d1b0004_state), VAR_1);
 if (!VAR_5->tuner_priv) {
  VAR_8 = -VAR_0;
  goto err_mem;
 }

 FUNC_4(&VAR_5->ops.tuner_ops, &VAR_2, sizeof(VAR_5->ops.tuner_ops));

 VAR_7 = VAR_5->tuner_priv;
 VAR_7->i2c = VAR_3;
 VAR_8 = FUNC_5(VAR_5, VAR_6);
 if (VAR_8 != 0)
  goto err_priv;

 FUNC_0(&VAR_3->dev, "Sharp QM1D1B0004 attached.\n");
 return 0;

err_priv:
 FUNC_2(VAR_5->tuner_priv);
err_mem:
 VAR_5->tuner_priv = ((void*)0);
 return VAR_8;
}
