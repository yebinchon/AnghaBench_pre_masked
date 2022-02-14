
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct i2c_client {int dummy; } ;
struct ddb_port {TYPE_3__* dev; scalar_t__ en_freedata; TYPE_2__* dvb; TYPE_1__* i2c; int en; } ;
struct cxd2099_cfg {int * en; int bitrate; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct i2c_client** i2c_client; } ;
struct TYPE_4__ {int adap; } ;


 int VAR_0 ;
 struct cxd2099_cfg VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct i2c_client* FUNC_1 (char*,int *,int *,int,struct cxd2099_cfg*) ;

__attribute__((used)) static int FUNC_2(struct ddb_port *VAR_2, u32 VAR_3)
{
 struct cxd2099_cfg VAR_4 = VAR_1;
 struct i2c_client *VAR_5;

 VAR_4.bitrate = VAR_3;
 VAR_4.en = &VAR_2->en;

 VAR_5 = FUNC_1("cxd2099", ((void*)0), &VAR_2->i2c->adap,
      0x40, &VAR_4);
 if (!VAR_5)
  goto err;

 VAR_2->dvb[0].i2c_client[0] = VAR_5;
 VAR_2->en_freedata = 0;
 return 0;

err:
 FUNC_0(VAR_2->dev->dev, "CXD2099AR attach failed\n");
 return -VAR_0;
}
