
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct ttusbdecfe_state* demodulator_priv; int ops; } ;
struct ttusbdecfe_state {struct dvb_frontend frontend; struct ttusbdecfe_config const* config; } ;
struct ttusbdecfe_config {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 struct ttusbdecfe_state* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_1 ;

struct dvb_frontend* FUNC_2(const struct ttusbdecfe_config* VAR_2)
{
 struct ttusbdecfe_state* VAR_3 = ((void*)0);


 VAR_3 = FUNC_0(sizeof(struct ttusbdecfe_state), VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);


 VAR_3->config = VAR_2;


 FUNC_1(&VAR_3->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
 VAR_3->frontend.demodulator_priv = VAR_3;
 return &VAR_3->frontend;
}
