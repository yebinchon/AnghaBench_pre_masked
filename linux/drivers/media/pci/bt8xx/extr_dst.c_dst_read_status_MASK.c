
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dst_state {int diseq_flags; scalar_t__ decode_lock; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_6, enum fe_status *VAR_7)
{
 struct dst_state *VAR_8 = VAR_6->demodulator_priv;

 *VAR_7 = 0;
 if (VAR_8->diseq_flags & VAR_5) {

  if (VAR_8->decode_lock)
   *VAR_7 |= VAR_1 | VAR_2 | VAR_0 | VAR_3 | VAR_4;
 }

 return 0;
}
