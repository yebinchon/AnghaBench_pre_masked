
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct dvb_frontend {struct cinergyt2_fe_state* demodulator_priv; } ;
struct TYPE_2__ {int gain; } ;
struct cinergyt2_fe_state {TYPE_1__ status; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
      u16 *VAR_1)
{
 struct cinergyt2_fe_state *VAR_2 = VAR_0->demodulator_priv;

 *VAR_1 = (0xffff - FUNC_0(VAR_2->status.gain));
 return 0;
}
