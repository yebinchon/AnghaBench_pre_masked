
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dst_state {scalar_t__ dst_ca; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dst_state*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_1)
{
 struct dst_state *VAR_2 = VAR_1->demodulator_priv;
 if (VAR_2->dst_ca) {
  FUNC_0(VAR_2->dst_ca);



 }
 FUNC_1(VAR_2);
}
