
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct gswip_priv {int dev; TYPE_2__* vlans; TYPE_1__* hw_info; } ;
struct gswip_pce_table_entry {int index; int * val; void* table; int member_0; } ;
struct TYPE_4__ {struct net_device* bridge; } ;
struct TYPE_3__ {unsigned int max_ports; unsigned int cpu_port; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 void* VAR_0 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct gswip_priv*,struct gswip_pce_table_entry*) ;
 int FUNC_5 (struct gswip_priv*,struct gswip_pce_table_entry*) ;
 int FUNC_6 (struct gswip_priv*,int ,int ) ;
 int FUNC_7 (struct gswip_priv*,struct net_device*,int,int ) ;
 int FUNC_8 (struct gswip_priv*,int) ;

__attribute__((used)) static int FUNC_9(struct gswip_priv *VAR_1,
      struct net_device *VAR_2, int VAR_3)
{
 struct gswip_pce_table_entry VAR_4 = {0,};
 unsigned int VAR_5 = VAR_1->hw_info->max_ports;
 unsigned int VAR_6 = VAR_1->hw_info->cpu_port;
 bool VAR_7 = 0;
 int VAR_8 = -1;
 int VAR_9;
 int VAR_10;


 for (VAR_9 = VAR_5; VAR_9 < FUNC_0(VAR_1->vlans); VAR_9++) {
  if (VAR_1->vlans[VAR_9].bridge == VAR_2) {
   VAR_8 = VAR_9;
   break;
  }
 }




 if (VAR_8 == -1) {
  VAR_8 = FUNC_7(VAR_1, VAR_2, -1, 0);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_7 = 1;

  VAR_4.index = VAR_8;
  VAR_4.table = VAR_0;

  VAR_4.val[0] = 0;
 } else {

  VAR_4.index = VAR_8;
  VAR_4.table = VAR_0;
  VAR_10 = FUNC_4(VAR_1, &VAR_4);
  if (VAR_10) {
   FUNC_3(VAR_1->dev, "failed to read VLAN mapping: %d\n",
    VAR_10);
   return VAR_10;
  }
 }


 VAR_4.val[1] |= FUNC_1(VAR_6);
 VAR_4.val[1] |= FUNC_1(VAR_3);
 VAR_10 = FUNC_5(VAR_1, &VAR_4);
 if (VAR_10) {
  FUNC_3(VAR_1->dev, "failed to write VLAN mapping: %d\n", VAR_10);

  if (VAR_7)
   FUNC_8(VAR_1, VAR_8);
  return VAR_10;
 }

 FUNC_6(VAR_1, 0, FUNC_2(VAR_3));
 return 0;
}
