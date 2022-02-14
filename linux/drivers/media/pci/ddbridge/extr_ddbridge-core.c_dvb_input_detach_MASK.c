
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* remove_frontend ) (TYPE_2__*,int *) ;} ;
struct dvb_demux {TYPE_2__ dmx; } ;
struct ddb_input {int nr; TYPE_1__* port; } ;
struct ddb_dvb {int attached; struct dvb_demux demux; int dmxdev; int mem_frontend; int hw_frontend; int dvbnet; int * fe2; int * fe; int ** i2c_client; } ;
struct TYPE_4__ {struct ddb_dvb* dvb; } ;


 int FUNC_0 (struct dvb_demux*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_8(struct ddb_input *VAR_0)
{
 struct ddb_dvb *VAR_1 = &VAR_0->port->dvb[VAR_0->nr & 1];
 struct dvb_demux *VAR_2 = &VAR_1->demux;

 switch (VAR_1->attached) {
 case 0x31:
  if (VAR_1->fe2)
   FUNC_5(VAR_1->fe2);
  if (VAR_1->fe)
   FUNC_5(VAR_1->fe);

 case 0x30:
  FUNC_3(VAR_1->i2c_client[0]);
  VAR_1->i2c_client[0] = ((void*)0);

  if (VAR_1->fe2)
   FUNC_2(VAR_1->fe2);
  if (VAR_1->fe)
   FUNC_2(VAR_1->fe);
  VAR_1->fe = ((void*)0);
  VAR_1->fe2 = ((void*)0);

 case 0x20:
  FUNC_4(&VAR_1->dvbnet);

 case 0x12:
  VAR_2->dmx.remove_frontend(&VAR_2->dmx,
           &VAR_1->hw_frontend);
  VAR_2->dmx.remove_frontend(&VAR_2->dmx,
           &VAR_1->mem_frontend);

 case 0x11:
  FUNC_1(&VAR_1->dmxdev);

 case 0x10:
  FUNC_0(&VAR_1->demux);

 case 0x01:
  break;
 }
 VAR_1->attached = 0x00;
}
