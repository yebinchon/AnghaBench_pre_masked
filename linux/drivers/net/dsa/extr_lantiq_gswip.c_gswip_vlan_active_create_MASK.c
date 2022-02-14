
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct net_device {int dummy; } ;
struct gswip_priv {TYPE_2__* vlans; int dev; TYPE_1__* hw_info; } ;
struct gswip_pce_table_entry {int index; int* val; int valid; void** key; int table; int member_0; } ;
struct TYPE_4__ {int fid; void* vid; struct net_device* bridge; } ;
struct TYPE_3__ {unsigned int max_ports; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct gswip_priv*,struct gswip_pce_table_entry*) ;

__attribute__((used)) static int FUNC_3(struct gswip_priv *VAR_2,
        struct net_device *VAR_3,
        int VAR_4, u16 VAR_5)
{
 struct gswip_pce_table_entry VAR_6 = {0,};
 unsigned int VAR_7 = VAR_2->hw_info->max_ports;
 int VAR_8 = -1;
 int VAR_9;
 int VAR_10;


 for (VAR_10 = VAR_7; VAR_10 < FUNC_0(VAR_2->vlans); VAR_10++) {
  if (!VAR_2->vlans[VAR_10].bridge) {
   VAR_8 = VAR_10;
   break;
  }
 }

 if (VAR_8 == -1)
  return -VAR_0;

 if (VAR_4 == -1)
  VAR_4 = VAR_8;

 VAR_6.index = VAR_8;
 VAR_6.table = VAR_1;
 VAR_6.key[0] = VAR_5;
 VAR_6.val[0] = VAR_4;
 VAR_6.valid = 1;

 VAR_9 = FUNC_2(VAR_2, &VAR_6);
 if (VAR_9) {
  FUNC_1(VAR_2->dev, "failed to write active VLAN: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_2->vlans[VAR_8].bridge = VAR_3;
 VAR_2->vlans[VAR_8].vid = VAR_5;
 VAR_2->vlans[VAR_8].fid = VAR_4;

 return VAR_8;
}
