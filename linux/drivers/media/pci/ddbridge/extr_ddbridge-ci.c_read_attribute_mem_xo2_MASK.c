
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct dvb_ca_en50221 {struct ddb_ci* data; } ;
struct ddb_ci {TYPE_2__* port; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__* i2c; } ;
struct TYPE_3__ {struct i2c_adapter adap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,int,int,int*) ;

__attribute__((used)) static int FUNC_1(struct dvb_ca_en50221 *VAR_1,
      int VAR_2, int VAR_3)
{
 struct ddb_ci *VAR_4 = VAR_1->data;
 struct i2c_adapter *VAR_5 = &VAR_4->port->i2c->adap;
 u8 VAR_6 = (VAR_4->port->type == VAR_0) ? 0x12 : 0x13;
 int VAR_7;
 u8 VAR_8;

 VAR_7 = FUNC_0(VAR_5, VAR_6, 0x8000 | VAR_3, &VAR_8);
 return VAR_7 ? VAR_7 : VAR_8;
}
