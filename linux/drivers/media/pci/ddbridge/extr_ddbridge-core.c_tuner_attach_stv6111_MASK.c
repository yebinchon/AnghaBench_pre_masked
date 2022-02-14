
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend {int dummy; } ;
struct device {int dummy; } ;
struct ddb_input {int nr; TYPE_2__* port; } ;
struct ddb_dvb {int fe; } ;
struct TYPE_6__ {struct i2c_adapter adap; } ;
struct TYPE_5__ {TYPE_1__* dev; struct ddb_dvb* dvb; TYPE_3__* i2c; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct dvb_frontend* FUNC_1 (int ,int ,struct i2c_adapter*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct ddb_input *VAR_2, int VAR_3)
{
 struct i2c_adapter *VAR_4 = &VAR_2->port->i2c->adap;
 struct ddb_dvb *VAR_5 = &VAR_2->port->dvb[VAR_2->nr & 1];
 struct device *VAR_6 = VAR_2->port->dev->dev;
 struct dvb_frontend *VAR_7;
 u8 VAR_8 = (VAR_3 ? 0 : 4) + ((VAR_2->nr & 1) ? 0x63 : 0x60);

 VAR_7 = FUNC_1(VAR_1, VAR_5->fe, VAR_4, VAR_8);
 if (!VAR_7) {
  VAR_7 = FUNC_1(VAR_1, VAR_5->fe, VAR_4, VAR_8 & ~4);
  if (!VAR_7) {
   FUNC_0(VAR_6, "No STV6111 found at 0x%02x!\n", VAR_8);
   return -VAR_0;
  }
 }
 return 0;
}
