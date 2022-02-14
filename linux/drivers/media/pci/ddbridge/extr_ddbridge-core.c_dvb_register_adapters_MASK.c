
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dvb_adapter {int dummy; } ;
struct ddb_port {int class; TYPE_2__* dvb; TYPE_1__* dev; } ;
struct ddb {int port_num; struct ddb_port* port; } ;
struct TYPE_4__ {int adap_registered; struct dvb_adapter* adap; } ;
struct TYPE_3__ {int dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_adapter*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ddb *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct ddb_port *VAR_6;
 struct dvb_adapter *VAR_7;

 if (VAR_1 == 3) {
  VAR_6 = &VAR_3->port[0];
  VAR_7 = VAR_6->dvb[0].adap;
  VAR_5 = FUNC_0(VAR_7, "DDBridge", VAR_0,
        VAR_6->dev->dev,
        VAR_2);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_6->dvb[0].adap_registered = 1;
  for (VAR_4 = 0; VAR_4 < VAR_3->port_num; VAR_4++) {
   VAR_6 = &VAR_3->port[VAR_4];
   VAR_6->dvb[0].adap = VAR_7;
   VAR_6->dvb[1].adap = VAR_7;
  }
  return 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->port_num; VAR_4++) {
  VAR_6 = &VAR_3->port[VAR_4];
  switch (VAR_6->class) {
  case 128:
   VAR_7 = VAR_6->dvb[0].adap;
   VAR_5 = FUNC_0(VAR_7, "DDBridge",
         VAR_0,
         VAR_6->dev->dev,
         VAR_2);
   if (VAR_5 < 0)
    return VAR_5;
   VAR_6->dvb[0].adap_registered = 1;

   if (VAR_1 > 0) {
    VAR_6->dvb[1].adap = VAR_6->dvb[0].adap;
    break;
   }
   VAR_7 = VAR_6->dvb[1].adap;
   VAR_5 = FUNC_0(VAR_7, "DDBridge",
         VAR_0,
         VAR_6->dev->dev,
         VAR_2);
   if (VAR_5 < 0)
    return VAR_5;
   VAR_6->dvb[1].adap_registered = 1;
   break;

  case 130:
  case 129:
   VAR_7 = VAR_6->dvb[0].adap;
   VAR_5 = FUNC_0(VAR_7, "DDBridge",
         VAR_0,
         VAR_6->dev->dev,
         VAR_2);
   if (VAR_5 < 0)
    return VAR_5;
   VAR_6->dvb[0].adap_registered = 1;
   break;
  default:
   if (VAR_1 < 2)
    break;
   VAR_7 = VAR_6->dvb[0].adap;
   VAR_5 = FUNC_0(VAR_7, "DDBridge",
         VAR_0,
         VAR_6->dev->dev,
         VAR_2);
   if (VAR_5 < 0)
    return VAR_5;
   VAR_6->dvb[0].adap_registered = 1;
   break;
  }
 }
 return VAR_5;
}
