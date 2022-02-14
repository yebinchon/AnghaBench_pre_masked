
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxl111sf_tuner_state {struct mxl111sf_tuner_config const* cfg; struct mxl111sf_state* mxl_state; } ;
struct mxl111sf_tuner_config {int dummy; } ;
struct mxl111sf_state {int dummy; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {struct mxl111sf_tuner_state* tuner_priv; TYPE_1__ ops; } ;


 int VAR_0 ;
 struct mxl111sf_tuner_state* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

struct dvb_frontend *FUNC_3(struct dvb_frontend *VAR_2,
    struct mxl111sf_state *VAR_3,
    const struct mxl111sf_tuner_config *VAR_4)
{
 struct mxl111sf_tuner_state *VAR_5 = ((void*)0);

 FUNC_2("()");

 VAR_5 = FUNC_0(sizeof(struct mxl111sf_tuner_state), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->mxl_state = VAR_3;
 VAR_5->cfg = VAR_4;

 FUNC_1(&VAR_2->ops.tuner_ops, &VAR_1,
        sizeof(struct dvb_tuner_ops));

 VAR_2->tuner_priv = VAR_5;
 return VAR_2;
}
