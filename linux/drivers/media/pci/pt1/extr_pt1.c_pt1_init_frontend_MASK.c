
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt1_adapter {struct dvb_frontend* fe; int adap; int orig_init; int orig_sleep; int orig_set_voltage; } ;
struct TYPE_2__ {int init; int sleep; int set_voltage; } ;
struct dvb_frontend {TYPE_1__ ops; } ;


 int FUNC_0 (int *,struct dvb_frontend*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct pt1_adapter *VAR_3, struct dvb_frontend *VAR_4)
{
 int VAR_5;

 VAR_3->orig_set_voltage = VAR_4->ops.set_voltage;
 VAR_3->orig_sleep = VAR_4->ops.sleep;
 VAR_3->orig_init = VAR_4->ops.init;
 VAR_4->ops.set_voltage = VAR_0;
 VAR_4->ops.sleep = VAR_1;
 VAR_4->ops.init = VAR_2;

 VAR_5 = FUNC_0(&VAR_3->adap, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3->fe = VAR_4;
 return 0;
}
