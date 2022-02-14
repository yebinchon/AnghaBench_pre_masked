
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {scalar_t__ demodulator_priv; } ;
struct af9005_fe_state {int dummy; } ;


 int FUNC_0 (struct af9005_fe_state*) ;

__attribute__((used)) static void FUNC_1(struct dvb_frontend *VAR_0)
{
 struct af9005_fe_state *VAR_1 =
     (struct af9005_fe_state *)VAR_0->demodulator_priv;
 FUNC_0(VAR_1);
}
