
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dtv_frontend_properties {int modulation; void* fec_inner; int symbol_rate; int bandwidth_hz; int inversion; int frequency; } ;
struct dst_state {scalar_t__ dst_type; int type_flags; int symbol_rate; int bandwidth; int inversion; int decode_freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (struct dst_state*) ;
 int FUNC_1 (struct dst_state*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_4,
       struct dtv_frontend_properties *VAR_5)
{
 struct dst_state *VAR_6 = VAR_4->demodulator_priv;

 VAR_5->frequency = VAR_6->decode_freq;
 if (VAR_6->dst_type == VAR_2) {
  if (VAR_6->type_flags & VAR_0)
   VAR_5->inversion = VAR_6->inversion;
  VAR_5->symbol_rate = VAR_6->symbol_rate;
  VAR_5->fec_inner = FUNC_0(VAR_6);
 } else if (VAR_6->dst_type == VAR_3) {
  VAR_5->bandwidth_hz = VAR_6->bandwidth;
 } else if (VAR_6->dst_type == VAR_1) {
  VAR_5->symbol_rate = VAR_6->symbol_rate;
  VAR_5->fec_inner = FUNC_0(VAR_6);
  VAR_5->modulation = FUNC_1(VAR_6);
 }

 return 0;
}
