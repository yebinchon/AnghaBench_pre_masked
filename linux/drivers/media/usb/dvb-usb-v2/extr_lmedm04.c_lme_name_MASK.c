
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lme2510_state {size_t tuner_config; } ;
struct dvb_usb_device {char* name; } ;
struct dvb_usb_adapter {TYPE_3__** fe; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;


 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct lme2510_state* FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (char*,char const* const,int) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_0)
{
 struct dvb_usb_device *VAR_1 = FUNC_0(VAR_0);
 struct lme2510_state *VAR_2 = FUNC_1(VAR_0);
 const char *VAR_3 = VAR_1->name;
 static const char * const VAR_4[] = {
  "", " LG TDQY-P001F", " SHARP:BS2F7HZ7395",
  " SHARP:BS2F7HZ0194", " RS2000"};
 char *VAR_5 = VAR_0->fe[0]->ops.info.name;

 FUNC_3(VAR_5, VAR_3, 128);
 FUNC_2(VAR_5, VAR_4[VAR_2->tuner_config], 128);

 return 0;
}
