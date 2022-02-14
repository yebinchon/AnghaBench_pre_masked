
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_dcb_info {size_t dcb_version; TYPE_1__* app_priority; } ;
struct port_info {struct port_dcb_info dcb; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct dcb_app {int selector; scalar_t__ protocol; scalar_t__ priority; } ;
struct adapter {int pdev_dev; } ;
struct TYPE_2__ {int sel_field; scalar_t__ user_prio_map; scalar_t__ protocolid; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct net_device*,struct dcb_app*) ;
 int FUNC_1 (struct net_device*,struct dcb_app*) ;
 int * VAR_2 ;
 int FUNC_2 (int ,char*,int ,int,scalar_t__,int) ;
 struct port_info* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3)
{
 struct port_info *VAR_4 = FUNC_3(VAR_3);
 struct adapter *VAR_5 = VAR_4->adapter;
 struct port_dcb_info *VAR_6 = &VAR_4->dcb;
 struct dcb_app VAR_7;
 int VAR_8, VAR_9;


 VAR_7.priority = 0;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {

  if (!VAR_6->app_priority[VAR_8].protocolid)
   break;

  VAR_7.protocol = VAR_6->app_priority[VAR_8].protocolid;

  if (VAR_6->dcb_version == VAR_1) {
   VAR_7.priority = VAR_6->app_priority[VAR_8].user_prio_map;
   VAR_7.selector = VAR_6->app_priority[VAR_8].sel_field + 1;
   VAR_9 = FUNC_0(VAR_3, &VAR_7);
  } else {
   VAR_7.selector = !!(VAR_6->app_priority[VAR_8].sel_field);
   VAR_9 = FUNC_1(VAR_3, &VAR_7);
  }

  if (VAR_9) {
   FUNC_2(VAR_5->pdev_dev,
    "Failed DCB Clear %s Application Priority: sel=%d, prot=%d, , err=%d\n",
    VAR_2[VAR_6->dcb_version], VAR_7.selector,
    VAR_7.protocol, -VAR_9);
   break;
  }
 }
}
