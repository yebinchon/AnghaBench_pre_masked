
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int num_frontends; TYPE_5__* fe; } ;
struct dvb_usb_adapter {int dvb_adap; int num_frontends_initialized; TYPE_6__ props; TYPE_4__* fe_adap; TYPE_2__* dev; int id; } ;
struct TYPE_11__ {int sleep; int init; } ;
struct TYPE_15__ {int id; TYPE_3__ ops; } ;
struct TYPE_13__ {int (* frontend_attach ) (struct dvb_usb_adapter*) ;int (* tuner_attach ) (struct dvb_usb_adapter*) ;} ;
struct TYPE_12__ {TYPE_7__* fe; int fe_sleep; int fe_init; } ;
struct TYPE_10__ {TYPE_1__* desc; } ;
struct TYPE_9__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct dvb_usb_adapter*) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (struct dvb_usb_adapter*) ;
 int FUNC_6 (struct dvb_usb_adapter*) ;

int FUNC_7(struct dvb_usb_adapter *VAR_3)
{
 int VAR_4, VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_3->props.num_frontends; VAR_5++) {

  if (VAR_3->props.fe[VAR_5].frontend_attach == ((void*)0)) {
   FUNC_4("strange: '%s' #%d,%d doesn't want to attach a frontend.",
       VAR_3->dev->desc->name, VAR_3->id, VAR_5);

   return 0;
  }

  VAR_4 = VAR_3->props.fe[VAR_5].frontend_attach(VAR_3);
  if (VAR_4 || VAR_3->fe_adap[VAR_5].fe == ((void*)0)) {

   if (VAR_5 == 0)
    FUNC_4("no frontend was attached by '%s'",
     VAR_3->dev->desc->name);

   return 0;
  }

  VAR_3->fe_adap[VAR_5].fe->id = VAR_5;


  VAR_3->fe_adap[VAR_5].fe_init = VAR_3->fe_adap[VAR_5].fe->ops.init;
  VAR_3->fe_adap[VAR_5].fe->ops.init = VAR_2;
  VAR_3->fe_adap[VAR_5].fe_sleep = VAR_3->fe_adap[VAR_5].fe->ops.sleep;
  VAR_3->fe_adap[VAR_5].fe->ops.sleep = VAR_1;

  if (FUNC_2(&VAR_3->dvb_adap, VAR_3->fe_adap[VAR_5].fe)) {
   FUNC_4("Frontend %d registration failed.", VAR_5);
   FUNC_1(VAR_3->fe_adap[VAR_5].fe);
   VAR_3->fe_adap[VAR_5].fe = ((void*)0);


   if (VAR_5 == 0)
    return -VAR_0;
   else
    return 0;
  }


  if (VAR_3->props.fe[VAR_5].tuner_attach != ((void*)0))
   VAR_3->props.fe[VAR_5].tuner_attach(VAR_3);

  VAR_3->num_frontends_initialized++;
 }

 VAR_4 = FUNC_0(&VAR_3->dvb_adap, 1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_3);

 return VAR_4;
}
