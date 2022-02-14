
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct em28xx_dvb {int i2c_client_demod; int i2c_client_tuner; int i2c_client_sec; TYPE_3__** fe; } ;
struct TYPE_4__ {int has_dvb; } ;
struct em28xx {int ref; struct em28xx_dvb* dvb; scalar_t__ disconnected; TYPE_2__* intf; TYPE_1__ board; scalar_t__ is_audio_only; } ;
struct TYPE_6__ {void* exit; int ops; } ;
struct TYPE_5__ {int dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct em28xx*,int ) ;
 int FUNC_3 (struct em28xx_dvb*) ;
 int FUNC_4 (struct em28xx_dvb*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct em28xx *VAR_3)
{
 struct em28xx_dvb *VAR_4;

 if (VAR_3->is_audio_only) {

  return 0;
 }

 if (!VAR_3->board.has_dvb) {

  return 0;
 }

 if (!VAR_3->dvb)
  return 0;

 FUNC_0(&VAR_3->intf->dev, "Closing DVB extension\n");

 VAR_4 = VAR_3->dvb;

 FUNC_2(VAR_3, VAR_1);

 if (VAR_3->disconnected) {




  if (VAR_4->fe[0]) {
   FUNC_6(&VAR_4->fe[0]->ops);
   VAR_4->fe[0]->exit = VAR_0;
  }
  if (VAR_4->fe[1]) {
   FUNC_6(&VAR_4->fe[1]->ops);
   VAR_4->fe[1]->exit = VAR_0;
  }
 }

 FUNC_3(VAR_4);


 FUNC_1(VAR_4->i2c_client_sec);
 FUNC_1(VAR_4->i2c_client_tuner);
 FUNC_1(VAR_4->i2c_client_demod);

 FUNC_4(VAR_4);
 VAR_3->dvb = ((void*)0);
 FUNC_5(&VAR_3->ref, VAR_2);

 return 0;
}
