
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* connect_frontend ) (TYPE_1__*,struct dmx_frontend*) ;int (* add_frontend ) (TYPE_1__*,struct dmx_frontend*) ;} ;
struct dvb_demux {TYPE_1__ dmx; } ;
struct dvb_adapter {int dummy; } ;
struct dmxdev {int filternum; scalar_t__ capabilities; TYPE_1__* demux; } ;
struct dmx_frontend {int source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dmxdev*,struct dvb_adapter*) ;
 int FUNC_1 (TYPE_1__*,struct dmx_frontend*) ;
 int FUNC_2 (TYPE_1__*,struct dmx_frontend*) ;
 int FUNC_3 (TYPE_1__*,struct dmx_frontend*) ;

__attribute__((used)) static int FUNC_4(struct dmxdev *VAR_2,
          struct dvb_demux *VAR_3,
          struct dmx_frontend *VAR_4,
          struct dmx_frontend *VAR_5,
          struct dvb_adapter *VAR_6)
{
 int VAR_7;

 VAR_2->filternum = 256;
 VAR_2->demux = &VAR_3->dmx;
 VAR_2->capabilities = 0;
 VAR_7 = FUNC_0(VAR_2, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_4->source = VAR_0;
 VAR_3->dmx.add_frontend(&VAR_3->dmx, VAR_4);
 VAR_5->source = VAR_1;
 VAR_3->dmx.add_frontend(&VAR_3->dmx, VAR_5);
 return VAR_3->dmx.connect_frontend(&VAR_3->dmx, VAR_4);
}
