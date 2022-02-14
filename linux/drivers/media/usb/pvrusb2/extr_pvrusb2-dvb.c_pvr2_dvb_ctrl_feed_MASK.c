
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_dvb_adapter {scalar_t__ feedcount; int lock; } ;
struct dvb_demux_feed {TYPE_1__* demux; } ;
struct TYPE_2__ {struct pvr2_dvb_adapter* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pvr2_dvb_adapter*) ;
 int FUNC_3 (struct pvr2_dvb_adapter*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct dvb_demux_feed *VAR_2, int VAR_3)
{
 struct pvr2_dvb_adapter *VAR_4 = VAR_2->demux->priv;
 int VAR_5 = 0;

 if (VAR_4 == ((void*)0)) return -VAR_0;

 FUNC_0(&VAR_4->lock);
 do {
  if (VAR_3) {
   if (!VAR_4->feedcount) {
    FUNC_4(VAR_1,
        "start feeding demux");
    VAR_5 = FUNC_3(VAR_4);
    if (VAR_5 < 0) break;
   }
   (VAR_4->feedcount)++;
  } else if (VAR_4->feedcount > 0) {
   (VAR_4->feedcount)--;
   if (!VAR_4->feedcount) {
    FUNC_4(VAR_1,
        "stop feeding demux");
    FUNC_2(VAR_4);
   }
  }
 } while (0);
 FUNC_1(&VAR_4->lock);

 return VAR_5;
}
