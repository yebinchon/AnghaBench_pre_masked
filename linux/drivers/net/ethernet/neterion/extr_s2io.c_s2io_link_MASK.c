
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct swStat {scalar_t__ link_up_cnt; void* link_down_time; scalar_t__ link_down_cnt; void* link_up_time; } ;
struct TYPE_4__ {TYPE_1__* stats_info; } ;
struct s2io_nic {int last_link_state; void* start_time; TYPE_2__ mac_control; struct net_device* dev; } ;
struct net_device {int name; } ;
struct TYPE_3__ {struct swStat sw_stat; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct s2io_nic*,int) ;
 void* VAR_2 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct s2io_nic*) ;
 int FUNC_5 (struct s2io_nic*) ;

__attribute__((used)) static void FUNC_6(struct s2io_nic *VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = VAR_3->dev;
 struct swStat *VAR_6 = &VAR_3->mac_control.stats_info->sw_stat;

 if (VAR_4 != VAR_3->last_link_state) {
  FUNC_1(VAR_3, VAR_4);
  if (VAR_4 == VAR_1) {
   FUNC_0(VAR_0, "%s: Link down\n", VAR_5->name);
   FUNC_4(VAR_3);
   FUNC_2(VAR_5);
   if (VAR_6->link_up_cnt)
    VAR_6->link_up_time =
     VAR_2 - VAR_3->start_time;
   VAR_6->link_down_cnt++;
  } else {
   FUNC_0(VAR_0, "%s: Link Up\n", VAR_5->name);
   if (VAR_6->link_down_cnt)
    VAR_6->link_down_time =
     VAR_2 - VAR_3->start_time;
   VAR_6->link_up_cnt++;
   FUNC_3(VAR_5);
   FUNC_5(VAR_3);
  }
 }
 VAR_3->last_link_state = VAR_4;
 VAR_3->start_time = VAR_2;
}
