
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gswip_priv {TYPE_1__* vlans; int dev; } ;
struct gswip_pce_table_entry {int index; int valid; int table; int member_0; } ;
struct TYPE_2__ {int * bridge; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct gswip_priv*,struct gswip_pce_table_entry*) ;

__attribute__((used)) static int FUNC_2(struct gswip_priv *VAR_1, int VAR_2)
{
 struct gswip_pce_table_entry VAR_3 = {0,};
 int VAR_4;

 VAR_3.index = VAR_2;
 VAR_3.table = VAR_0;
 VAR_3.valid = 0;
 VAR_4 = FUNC_1(VAR_1, &VAR_3);
 if (VAR_4)
  FUNC_0(VAR_1->dev, "failed to delete active VLAN: %d\n", VAR_4);
 VAR_1->vlans[VAR_2].bridge = ((void*)0);

 return VAR_4;
}
