
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl111sf_tuner_state {int dummy; } ;
struct dvb_frontend {struct mxl111sf_tuner_state* tuner_priv; } ;


 int FUNC_0 (struct mxl111sf_tuner_state*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct mxl111sf_tuner_state *VAR_1 = VAR_0->tuner_priv;
 FUNC_1("()");
 FUNC_0(VAR_1);
 VAR_0->tuner_priv = ((void*)0);
}
