
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtv_frontend_properties {int modulation; int symbol_rate; int fec_inner; int bandwidth_hz; int inversion; int frequency; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct dst_state* demodulator_priv; } ;
struct dst_state {scalar_t__ dst_type; int type_flags; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct dvb_frontend*,int*) ;
 int FUNC_2 (struct dst_state*,int ) ;
 int FUNC_3 (struct dst_state*,int ) ;
 int FUNC_4 (struct dst_state*,int ) ;
 int FUNC_5 (struct dst_state*,int ) ;
 int FUNC_6 (struct dst_state*,int ) ;
 int FUNC_7 (struct dst_state*) ;
 int FUNC_8 (struct dst_state*,int ) ;
 int FUNC_9 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend* VAR_6,
       bool VAR_7,
       unsigned int VAR_8,
       unsigned int *VAR_9,
       enum fe_status *VAR_10)
{
 struct dst_state *VAR_11 = VAR_6->demodulator_priv;
 struct dtv_frontend_properties *VAR_12 = &VAR_6->dtv_property_cache;

 if (VAR_7) {
  FUNC_4(VAR_11, VAR_12->frequency);
  FUNC_0(3, "Set Frequency=[%d]\n", VAR_12->frequency);

  if (VAR_11->dst_type == VAR_2) {
   if (VAR_11->type_flags & VAR_0)
    FUNC_5(VAR_11, VAR_12->inversion);
   FUNC_3(VAR_11, VAR_12->fec_inner);
   FUNC_8(VAR_11, VAR_12->symbol_rate);
   FUNC_7(VAR_11);
   FUNC_0(3, "Set Symbolrate=[%d]\n", VAR_12->symbol_rate);

  } else if (VAR_11->dst_type == VAR_3)
   FUNC_2(VAR_11, VAR_12->bandwidth_hz);
  else if (VAR_11->dst_type == VAR_1) {
   FUNC_3(VAR_11, VAR_12->fec_inner);
   FUNC_8(VAR_11, VAR_12->symbol_rate);
   FUNC_6(VAR_11, VAR_12->modulation);
  }
  FUNC_9(VAR_6);
 }

 if (!(VAR_8 & VAR_4))
  FUNC_1(VAR_6, VAR_10);

 *VAR_9 = VAR_5/10;
 return 0;
}
