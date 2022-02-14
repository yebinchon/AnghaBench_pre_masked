
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* prioritytable; } ;
struct i40e_dcbx_config {TYPE_1__ etscfg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static u8 FUNC_2(struct i40e_dcbx_config *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 u8 VAR_5 = 0;
 u8 VAR_6 = 0;





 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_5 |= FUNC_0(VAR_2->etscfg.prioritytable[VAR_3]);




 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_5 & FUNC_0(VAR_3)) {
   if (!VAR_4) {
    VAR_6++;
   } else {
    FUNC_1("Non-contiguous TC - Disabling DCB\n");
    return 1;
   }
  } else {
   VAR_4 = 1;
  }
 }


 if (!VAR_6)
  VAR_6 = 1;

 return VAR_6;
}
