
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qm1d1b0004_state {int cfg; } ;
struct dvb_frontend {struct qm1d1b0004_state* tuner_priv; } ;


 int FUNC_0 (int *,void*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, void *VAR_1)
{
 struct qm1d1b0004_state *VAR_2;

 VAR_2 = VAR_0->tuner_priv;
 FUNC_0(&VAR_2->cfg, VAR_1, sizeof(VAR_2->cfg));
 return 0;
}
