
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ale_entries; } ;
struct cpsw_ale {int vlan_field_bits; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct cpsw_ale*,int,int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct cpsw_ale*,int,int *) ;

void FUNC_7(struct cpsw_ale *VAR_3, int VAR_4, int VAR_5)
{
 u32 VAR_6[VAR_0];
 int VAR_7 = 0;
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_3->params.ale_entries; VAR_9++) {
  int VAR_10;

  FUNC_4(VAR_3, VAR_9, VAR_6);
  VAR_8 = FUNC_1(VAR_6);
  if (VAR_8 != VAR_2)
   continue;
  VAR_10 =
   FUNC_2(VAR_6,
            VAR_3->vlan_field_bits);

  if (VAR_5 != -1 && !(VAR_10 & FUNC_0(VAR_5)))
   continue;

  VAR_7 =
   FUNC_3(VAR_6,
            VAR_3->vlan_field_bits);
  if (VAR_4)
   VAR_7 |= VAR_1;
  else
   VAR_7 &= ~VAR_1;
  FUNC_5(VAR_6, VAR_7,
           VAR_3->vlan_field_bits);
  FUNC_6(VAR_3, VAR_9, VAR_6);
 }
}
