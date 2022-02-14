
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dst_state {int voltage; scalar_t__ dst_type; int diseq_flags; int* tx_tuna; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (struct dst_state*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_6, enum fe_sec_voltage VAR_7)
{
 int VAR_8, VAR_9 = 0;
 struct dst_state *VAR_10 = VAR_6->demodulator_priv;

 VAR_10->voltage = VAR_7;
 if (VAR_10->dst_type != VAR_1)
  return -VAR_3;

 VAR_8 = 0;

 switch (VAR_7) {
 case 130:
 case 129:
  if ((VAR_10->diseq_flags & VAR_5) == 0)
   VAR_8 = 1;
  VAR_10->diseq_flags |= VAR_5;
  VAR_10->tx_tuna[4] = 0x01;
  break;
 case 128:
  VAR_8 = 1;
  VAR_10->diseq_flags &= ~(VAR_5 | VAR_4 | VAR_0);
  VAR_10->tx_tuna[4] = 0x00;
  break;
 default:
  return -VAR_2;
 }

 if (VAR_8)
  VAR_9 = FUNC_0(VAR_10);

 return VAR_9;
}
