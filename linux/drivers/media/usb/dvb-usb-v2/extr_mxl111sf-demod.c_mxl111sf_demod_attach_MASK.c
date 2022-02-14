
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl111sf_state {int dummy; } ;
struct dvb_frontend {struct mxl111sf_demod_state* demodulator_priv; int ops; } ;
struct mxl111sf_demod_state {struct dvb_frontend fe; struct mxl111sf_demod_config const* cfg; struct mxl111sf_state* mxl_state; } ;
struct mxl111sf_demod_config {int dummy; } ;
struct dvb_frontend_ops {int dummy; } ;


 int VAR_0 ;
 struct mxl111sf_demod_state* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

struct dvb_frontend *FUNC_3(struct mxl111sf_state *VAR_2,
       const struct mxl111sf_demod_config *VAR_3)
{
 struct mxl111sf_demod_state *VAR_4 = ((void*)0);

 FUNC_2("()");

 VAR_4 = FUNC_0(sizeof(struct mxl111sf_demod_state), VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_4->mxl_state = VAR_2;
 VAR_4->cfg = VAR_3;

 FUNC_1(&VAR_4->fe.ops, &VAR_1,
        sizeof(struct dvb_frontend_ops));

 VAR_4->fe.demodulator_priv = VAR_4;
 return &VAR_4->fe;
}
