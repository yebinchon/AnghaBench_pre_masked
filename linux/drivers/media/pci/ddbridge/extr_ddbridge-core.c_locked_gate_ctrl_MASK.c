
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct ddb_input* sec_priv; } ;
struct ddb_port {int i2c_gate_lock; struct ddb_dvb* dvb; } ;
struct ddb_input {int nr; struct ddb_port* port; } ;
struct ddb_dvb {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct ddb_input *VAR_2 = VAR_0->sec_priv;
 struct ddb_port *VAR_3 = VAR_2->port;
 struct ddb_dvb *VAR_4 = &VAR_3->dvb[VAR_2->nr & 1];
 int VAR_5;

 if (VAR_1) {
  FUNC_0(&VAR_3->i2c_gate_lock);
  VAR_5 = VAR_4->i2c_gate_ctrl(VAR_0, 1);
 } else {
  VAR_5 = VAR_4->i2c_gate_ctrl(VAR_0, 0);
  FUNC_1(&VAR_3->i2c_gate_lock);
 }
 return VAR_5;
}
