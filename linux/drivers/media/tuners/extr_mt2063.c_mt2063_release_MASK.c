
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt2063_state {int dummy; } ;
struct dvb_frontend {struct mt2063_state* tuner_priv; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mt2063_state*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_0)
{
 struct mt2063_state *VAR_1 = VAR_0->tuner_priv;

 FUNC_0(2, "\n");

 VAR_0->tuner_priv = ((void*)0);
 FUNC_1(VAR_1);
}
