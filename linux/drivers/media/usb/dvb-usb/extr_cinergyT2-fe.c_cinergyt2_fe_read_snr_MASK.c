
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dvb_frontend {struct cinergyt2_fe_state* demodulator_priv; } ;
struct TYPE_2__ {int snr; } ;
struct cinergyt2_fe_state {TYPE_1__ status; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_0, u16 *VAR_1)
{
 struct cinergyt2_fe_state *VAR_2 = VAR_0->demodulator_priv;

 *VAR_1 = (VAR_2->status.snr << 8) | VAR_2->status.snr;
 return 0;
}
