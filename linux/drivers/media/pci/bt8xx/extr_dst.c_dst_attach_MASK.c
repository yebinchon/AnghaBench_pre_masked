
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend_ops {int dummy; } ;
struct dvb_adapter {int dummy; } ;
struct TYPE_2__ {struct dst_state* demodulator_priv; int ops; } ;
struct dst_state {int dst_type; TYPE_1__ frontend; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dst_state*) ;
 int FUNC_1 (struct dst_state*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*) ;

struct dst_state *FUNC_4(struct dst_state *VAR_4, struct dvb_adapter *VAR_5)
{

 if (FUNC_0(VAR_4) < 0) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }


 switch (VAR_4->dst_type) {
 case 128:
  FUNC_2(&VAR_4->frontend.ops, &VAR_3, sizeof(struct dvb_frontend_ops));
  break;
 case 130:
  FUNC_2(&VAR_4->frontend.ops, &VAR_1, sizeof(struct dvb_frontend_ops));
  break;
 case 129:
  FUNC_2(&VAR_4->frontend.ops, &VAR_2, sizeof(struct dvb_frontend_ops));
  break;
 case 131:
  FUNC_2(&VAR_4->frontend.ops, &VAR_0, sizeof(struct dvb_frontend_ops));
  break;
 default:
  FUNC_3("unknown DST type. please report to the LinuxTV.org DVB mailinglist.\n");
  FUNC_1(VAR_4);
  return ((void*)0);
 }
 VAR_4->frontend.demodulator_priv = VAR_4;

 return VAR_4;
}
