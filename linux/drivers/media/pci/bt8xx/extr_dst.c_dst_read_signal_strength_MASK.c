
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dst_state {int decode_strength; } ;


 int FUNC_0 (struct dst_state*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u16 *VAR_1)
{
 struct dst_state *VAR_2 = VAR_0->demodulator_priv;

 int VAR_3 = FUNC_0(VAR_2);
 *VAR_1 = VAR_2->decode_strength;

 return VAR_3;
}
