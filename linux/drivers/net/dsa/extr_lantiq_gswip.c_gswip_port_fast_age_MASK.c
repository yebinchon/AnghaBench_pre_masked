
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gswip_priv {int dev; } ;
struct gswip_pce_table_entry {int index; int valid; int* val; int table; int member_0; } ;
struct dsa_switch {struct gswip_priv* priv; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct gswip_priv*,struct gswip_pce_table_entry*) ;
 int FUNC_3 (struct gswip_priv*,struct gswip_pce_table_entry*) ;

__attribute__((used)) static void FUNC_4(struct dsa_switch *VAR_2, int VAR_3)
{
 struct gswip_priv *VAR_4 = VAR_2->priv;
 struct gswip_pce_table_entry VAR_5 = {0,};
 int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < 2048; VAR_6++) {
  VAR_5.table = VAR_0;
  VAR_5.index = VAR_6;

  VAR_7 = FUNC_2(VAR_4, &VAR_5);
  if (VAR_7) {
   FUNC_1(VAR_4->dev, "failed to read mac bridge: %d\n",
    VAR_7);
   return;
  }

  if (!VAR_5.valid)
   continue;

  if (VAR_5.val[1] & VAR_1)
   continue;

  if (((VAR_5.val[0] & FUNC_0(7, 4)) >> 4) != VAR_3)
   continue;

  VAR_5.valid = 0;
  VAR_7 = FUNC_3(VAR_4, &VAR_5);
  if (VAR_7) {
   FUNC_1(VAR_4->dev, "failed to write mac bridge: %d\n",
    VAR_7);
   return;
  }
 }
}
