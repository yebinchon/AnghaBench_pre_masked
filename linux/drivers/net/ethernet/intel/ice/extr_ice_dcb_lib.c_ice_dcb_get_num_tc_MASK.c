
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* prio_table; } ;
struct ice_dcbx_cfg {TYPE_1__ etscfg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

u8 FUNC_2(struct ice_dcbx_cfg *VAR_2)
{
 bool VAR_3 = 0;
 u8 VAR_4 = 0;
 u8 VAR_5 = 0;
 int VAR_6;




 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_4 |= FUNC_0(VAR_2->etscfg.prio_table[VAR_6]);


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_4 & FUNC_0(VAR_6)) {
   if (!VAR_3) {
    VAR_5++;
   } else {
    FUNC_1("Non-contiguous TCs - Disabling DCB\n");
    return 1;
   }
  } else {
   VAR_3 = 1;
  }
 }


 if (!VAR_5)
  VAR_5 = 1;

 return VAR_5;
}
