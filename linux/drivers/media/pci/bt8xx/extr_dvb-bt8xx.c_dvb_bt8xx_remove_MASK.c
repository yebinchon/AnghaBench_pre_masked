
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* remove_frontend ) (TYPE_1__*,int *) ;} ;
struct TYPE_6__ {TYPE_1__ dmx; } ;
struct dvb_bt8xx_card {int dvb_adapter; scalar_t__ fe; TYPE_3__ demux; int dmxdev; int fe_hw; int fe_mem; int dvbnet; TYPE_4__* bt; int bttv_nr; } ;
struct bttv_sub_device {int dev; } ;
struct TYPE_7__ {int tasklet; } ;


 int FUNC_0 (TYPE_4__*) ;
 struct dvb_bt8xx_card* FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct dvb_bt8xx_card*) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct bttv_sub_device *VAR_0)
{
 struct dvb_bt8xx_card *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_2("dvb_bt8xx: unloading card%d\n", VAR_1->bttv_nr);

 FUNC_0(VAR_1->bt);
 FUNC_12(&VAR_1->bt->tasklet);
 FUNC_6(&VAR_1->dvbnet);
 VAR_1->demux.dmx.remove_frontend(&VAR_1->demux.dmx, &VAR_1->fe_mem);
 VAR_1->demux.dmx.remove_frontend(&VAR_1->demux.dmx, &VAR_1->fe_hw);
 FUNC_4(&VAR_1->dmxdev);
 FUNC_3(&VAR_1->demux);
 if (VAR_1->fe) {
  FUNC_8(VAR_1->fe);
  FUNC_5(VAR_1->fe);
 }
 FUNC_7(&VAR_1->dvb_adapter);

 FUNC_9(VAR_1);
}
