
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gswip_priv {int dev; TYPE_1__* hw_info; } ;
struct gswip_pce_table_entry {int index; int* val; int valid; int table; scalar_t__* key; int member_0; } ;
struct TYPE_2__ {unsigned int cpu_port; unsigned int max_ports; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct gswip_priv*,struct gswip_pce_table_entry*) ;

__attribute__((used)) static int FUNC_3(struct gswip_priv *VAR_3, int VAR_4, bool VAR_5)
{
 struct gswip_pce_table_entry VAR_6 = {0,};
 struct gswip_pce_table_entry VAR_7 = {0,};
 unsigned int VAR_8 = VAR_3->hw_info->cpu_port;
 unsigned int VAR_9 = VAR_3->hw_info->max_ports;
 int VAR_10;

 if (VAR_4 >= VAR_9) {
  FUNC_1(VAR_3->dev, "single port for %i supported\n", VAR_4);
  return -VAR_0;
 }

 VAR_6.index = VAR_4 + 1;
 VAR_6.table = VAR_1;
 VAR_6.key[0] = 0;
 VAR_6.val[0] = VAR_4 + 1 ;
 VAR_6.valid = VAR_5;
 VAR_10 = FUNC_2(VAR_3, &VAR_6);
 if (VAR_10) {
  FUNC_1(VAR_3->dev, "failed to write active VLAN: %d\n", VAR_10);
  return VAR_10;
 }

 if (!VAR_5)
  return 0;

 VAR_7.index = VAR_4 + 1;
 VAR_7.table = VAR_2;
 VAR_7.val[0] = 0 ;
 VAR_7.val[1] = FUNC_0(VAR_4) | FUNC_0(VAR_8);
 VAR_7.val[2] = 0;
 VAR_10 = FUNC_2(VAR_3, &VAR_7);
 if (VAR_10) {
  FUNC_1(VAR_3->dev, "failed to write VLAN mapping: %d\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
