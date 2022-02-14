
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tunertype {int count; struct tuner_params* params; } ;
struct tuner_simple_priv {int type; struct tunertype* tun; } ;
struct tuner_params {int type; } ;
struct dvb_frontend {struct tuner_simple_priv* tuner_priv; } ;
typedef enum param_type { ____Placeholder_param_type } param_type ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static struct tuner_params *FUNC_2(struct dvb_frontend *VAR_0,
      enum param_type VAR_1)
{
 struct tuner_simple_priv *VAR_2 = VAR_0->tuner_priv;
 struct tunertype *VAR_3 = VAR_2->tun;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++)
  if (VAR_1 == VAR_3->params[VAR_4].type)
   break;


 if (VAR_4 == VAR_3->count) {
  FUNC_0("desired params (%s) undefined for tuner %d\n",
     FUNC_1(VAR_1), VAR_2->type);
  VAR_4 = 0;
 }

 FUNC_0("using tuner params #%d (%s)\n", VAR_4,
    FUNC_1(VAR_3->params[VAR_4].type));

 return &VAR_3->params[VAR_4];
}
