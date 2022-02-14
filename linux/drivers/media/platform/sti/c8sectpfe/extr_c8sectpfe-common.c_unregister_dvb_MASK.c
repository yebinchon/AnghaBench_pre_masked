
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* remove_frontend ) (TYPE_1__*,int *) ;} ;
struct TYPE_5__ {TYPE_1__ dmx; } ;
struct stdemux {TYPE_3__ dvb_demux; int dmxdev; int hw_frontend; int mem_frontend; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_4(struct stdemux *VAR_0)
{

 VAR_0->dvb_demux.dmx.remove_frontend(&VAR_0->dvb_demux.dmx,
           &VAR_0->mem_frontend);

 VAR_0->dvb_demux.dmx.remove_frontend(&VAR_0->dvb_demux.dmx,
           &VAR_0->hw_frontend);

 FUNC_1(&VAR_0->dmxdev);

 FUNC_0(&VAR_0->dvb_demux);
}
