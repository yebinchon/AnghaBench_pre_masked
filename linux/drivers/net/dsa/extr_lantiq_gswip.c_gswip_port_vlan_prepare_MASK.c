
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; } ;
struct net_device {int dummy; } ;
struct gswip_priv {TYPE_3__* vlans; TYPE_1__* hw_info; } ;
struct dsa_switch {struct gswip_priv* priv; } ;
struct TYPE_6__ {scalar_t__ vid; struct net_device* bridge; } ;
struct TYPE_5__ {struct net_device* bridge_dev; } ;
struct TYPE_4__ {unsigned int max_ports; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dsa_switch*,int) ;
 TYPE_2__* FUNC_2 (struct dsa_switch*,int) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_2, int VAR_3,
       const struct switchdev_obj_port_vlan *VAR_4)
{
 struct gswip_priv *VAR_5 = VAR_2->priv;
 struct net_device *VAR_6 = FUNC_2(VAR_2, VAR_3)->bridge_dev;
 unsigned int VAR_7 = VAR_5->hw_info->max_ports;
 u16 VAR_8;
 int VAR_9;
 int VAR_10 = VAR_7;


 if (!FUNC_1(VAR_2, VAR_3) && !VAR_6)
  return -VAR_1;

 for (VAR_8 = VAR_4->vid_begin; VAR_8 <= VAR_4->vid_end; ++VAR_8) {
  int VAR_11 = -1;


  for (VAR_9 = VAR_7; VAR_9 < FUNC_0(VAR_5->vlans); VAR_9++) {
   if (VAR_5->vlans[VAR_9].bridge == VAR_6 &&
       VAR_5->vlans[VAR_9].vid == VAR_8) {
    VAR_11 = VAR_9;
    break;
   }
  }





  if (VAR_11 == -1) {

   for (; VAR_10 < FUNC_0(VAR_5->vlans); VAR_10++) {
    if (!VAR_5->vlans[VAR_10].bridge) {
     VAR_11 = VAR_10;
     VAR_10++;
     break;
    }
   }

   if (VAR_11 == -1)
    return -VAR_0;
  }
 }

 return 0;
}
