
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* remove_frontend ) (TYPE_1__*,int *) ;} ;
struct TYPE_5__ {TYPE_1__ dmx; } ;
struct mantis_pci {int dvb_adapter; TYPE_3__ demux; int dmxdev; int fe_hw; int fe_mem; int dvbnet; int tasklet; scalar_t__ fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,...) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct mantis_pci*) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct mantis_pci *VAR_2)
{
 int VAR_3;

 if (VAR_2->fe) {

  VAR_3 = FUNC_7(VAR_2);
  if (VAR_3 != 0)
   FUNC_0(VAR_1, 1, "Frontend exit while POWER ON! <%d>", VAR_3);
  FUNC_6(VAR_2->fe);
  FUNC_3(VAR_2->fe);
 }

 FUNC_10(&VAR_2->tasklet);
 FUNC_4(&VAR_2->dvbnet);

 VAR_2->demux.dmx.remove_frontend(&VAR_2->demux.dmx, &VAR_2->fe_mem);
 VAR_2->demux.dmx.remove_frontend(&VAR_2->demux.dmx, &VAR_2->fe_hw);

 FUNC_2(&VAR_2->dmxdev);
 FUNC_1(&VAR_2->demux);

 FUNC_0(VAR_0, 1, "dvb_unregister_adapter");
 FUNC_5(&VAR_2->dvb_adapter);

 return 0;
}
