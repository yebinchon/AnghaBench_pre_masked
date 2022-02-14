
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_dvb_adapter {int channel; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_2__ {struct pvr2_dvb_adapter* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, int VAR_2)
{
 struct pvr2_dvb_adapter *VAR_3 = VAR_1->dvb->priv;
 return FUNC_0(
     &VAR_3->channel,
     (VAR_2 ? (1 << VAR_0) : 0));
}
