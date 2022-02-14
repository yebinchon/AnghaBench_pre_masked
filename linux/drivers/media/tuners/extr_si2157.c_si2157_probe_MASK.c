
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_10__ {int function; int name; } ;
struct si2157_dev {scalar_t__ chiptype; int if_frequency; TYPE_2__ ent; TYPE_3__* pad; scalar_t__ mdev; int stat_work; int i2c_mutex; int if_port; int inversion; struct dvb_frontend* fe; } ;
struct si2157_config {scalar_t__ mdev; int if_port; int inversion; struct dvb_frontend* fe; } ;
struct si2157_cmd {int rlen; scalar_t__ wlen; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_12__ {struct si2157_config* platform_data; } ;
struct i2c_client {TYPE_6__ dev; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_9__ {int tuner_ops; } ;
struct dvb_frontend {struct i2c_client* tuner_priv; TYPE_1__ ops; } ;
struct TYPE_11__ {void* sig_type; void* flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int FUNC_1 (TYPE_6__*,char*,int) ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (TYPE_6__*,char*,char*) ;
 int FUNC_4 (struct i2c_client*,struct si2157_dev*) ;
 int FUNC_5 (struct si2157_dev*) ;
 struct si2157_dev* FUNC_6 (int,int ) ;
 int FUNC_7 (scalar_t__,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct i2c_client*,struct si2157_cmd*) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_16,
   const struct i2c_device_id *VAR_17)
{
 struct si2157_config *VAR_18 = VAR_16->dev.platform_data;
 struct dvb_frontend *VAR_19 = VAR_18->fe;
 struct si2157_dev *VAR_20;
 struct si2157_cmd VAR_21;
 int VAR_22;

 VAR_20 = FUNC_6(sizeof(*VAR_20), VAR_1);
 if (!VAR_20) {
  VAR_22 = -VAR_0;
  FUNC_2(&VAR_16->dev, "kzalloc() failed\n");
  goto err;
 }

 FUNC_4(VAR_16, VAR_20);
 VAR_20->fe = VAR_18->fe;
 VAR_20->inversion = VAR_18->inversion;
 VAR_20->if_port = VAR_18->if_port;
 VAR_20->chiptype = (u8)VAR_17->driver_data;
 VAR_20->if_frequency = 5000000;
 FUNC_11(&VAR_20->i2c_mutex);
 FUNC_0(&VAR_20->stat_work, VAR_15);


 VAR_21.wlen = 0;
 VAR_21.rlen = 1;
 VAR_22 = FUNC_12(VAR_16, &VAR_21);
 if (VAR_22)
  goto err_kfree;

 FUNC_10(&VAR_19->ops.tuner_ops, &VAR_14, sizeof(struct dvb_tuner_ops));
 VAR_19->tuner_priv = VAR_16;
 FUNC_3(&VAR_16->dev, "Silicon Labs %s successfully attached\n",
   VAR_20->chiptype == VAR_8 ? "Si2141" :
   VAR_20->chiptype == VAR_9 ?
   "Si2146" : "Si2147/2148/2157/2158");

 return 0;

err_kfree:
 FUNC_5(VAR_20);
err:
 FUNC_1(&VAR_16->dev, "failed=%d\n", VAR_22);
 return VAR_22;
}
