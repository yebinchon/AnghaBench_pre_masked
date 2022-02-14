
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtv_frontend_properties {int modulation; int symbol_rate; int fec_inner; int bandwidth_hz; int inversion; int frequency; } ;
struct dvb_frontend {struct dst_state* demodulator_priv; struct dtv_frontend_properties dtv_property_cache; } ;
struct dst_state {scalar_t__ dst_type; int type_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct dst_state*,int ) ;
 int FUNC_2 (struct dst_state*,int ) ;
 int FUNC_3 (struct dst_state*,int ) ;
 int FUNC_4 (struct dst_state*,int ) ;
 int FUNC_5 (struct dst_state*,int ) ;
 int FUNC_6 (struct dst_state*) ;
 int FUNC_7 (struct dst_state*,int ) ;
 int FUNC_8 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_5)
{
 struct dtv_frontend_properties *VAR_6 = &VAR_5->dtv_property_cache;
 int VAR_7 = -VAR_4;
 struct dst_state *VAR_8 = VAR_5->demodulator_priv;

 if (VAR_6 != ((void*)0)) {
  VAR_7 = FUNC_3(VAR_8, VAR_6->frequency);
  if(VAR_7 != 0)
   return VAR_7;
  FUNC_0(3, "Set Frequency=[%d]\n", VAR_6->frequency);

  if (VAR_8->dst_type == VAR_2) {
   if (VAR_8->type_flags & VAR_0)
    FUNC_4(VAR_8, VAR_6->inversion);
   FUNC_2(VAR_8, VAR_6->fec_inner);
   FUNC_7(VAR_8, VAR_6->symbol_rate);
   FUNC_6(VAR_8);
   FUNC_0(3, "Set Symbolrate=[%d]\n", VAR_6->symbol_rate);

  } else if (VAR_8->dst_type == VAR_3)
   FUNC_1(VAR_8, VAR_6->bandwidth_hz);
  else if (VAR_8->dst_type == VAR_1) {
   FUNC_2(VAR_8, VAR_6->fec_inner);
   FUNC_7(VAR_8, VAR_6->symbol_rate);
   FUNC_5(VAR_8, VAR_6->modulation);
  }
  VAR_7 = FUNC_8(VAR_5);
 }

 return VAR_7;
}
