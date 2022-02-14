
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxl5007t_state {int dummy; } ;
struct dvb_frontend {struct mxl5007t_state* tuner_priv; } ;


 int FUNC_0 (struct mxl5007t_state*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_1)
{
 struct mxl5007t_state *VAR_2 = VAR_1->tuner_priv;

 FUNC_1(&VAR_0);

 if (VAR_2)
  FUNC_0(VAR_2);

 FUNC_2(&VAR_0);

 VAR_1->tuner_priv = ((void*)0);
}
