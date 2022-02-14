
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lme2510_state {int (* fe_read_ber ) (struct dvb_frontend*,scalar_t__*) ;int stream_on; } ;
struct dvb_frontend {int dummy; } ;


 struct lme2510_state* FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct lme2510_state *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->fe_read_ber && !VAR_2->stream_on)
  return VAR_2->fe_read_ber(VAR_0, VAR_1);

 *VAR_1 = 0;

 return 0;
}
