
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;
struct dvb_frontend {struct cinergyt2_fe_state* demodulator_priv; int ops; } ;
struct cinergyt2_fe_state {struct dvb_frontend fe; int data_mutex; struct dvb_usb_device* d; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cinergyt2_fe_state* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;

struct dvb_frontend *FUNC_3(struct dvb_usb_device *VAR_2)
{
 struct cinergyt2_fe_state *VAR_3 = FUNC_0(sizeof(
     struct cinergyt2_fe_state), VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_3->d = VAR_2;
 FUNC_1(&VAR_3->fe.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_3->fe.demodulator_priv = VAR_3;
 FUNC_2(&VAR_3->data_mutex);
 return &VAR_3->fe;
}
