
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct spmi_pmic_arb {size_t* ppid_to_apid; TYPE_1__* apid_data; scalar_t__ cnfg; int mapping_table_valid; int * mapping_table; } ;
struct TYPE_2__ {size_t ppid; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_2 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct spmi_pmic_arb *VAR_3, u16 VAR_4)
{
 u32 *VAR_5 = VAR_3->mapping_table;
 int VAR_6 = 0, VAR_7;
 u16 VAR_8;
 u16 VAR_9;
 u32 VAR_10;

 VAR_8 = VAR_3->ppid_to_apid[VAR_4];
 if (VAR_8 & VAR_1) {
  VAR_9 = VAR_8 & ~VAR_1;
  return VAR_9;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  if (!FUNC_8(VAR_6, VAR_3->mapping_table_valid))
   VAR_5[VAR_6] = FUNC_7(VAR_3->cnfg +
      FUNC_6(VAR_6));

  VAR_10 = VAR_5[VAR_6];

  if (VAR_4 & FUNC_0(FUNC_1(VAR_10))) {
   if (FUNC_4(VAR_10)) {
    VAR_6 = FUNC_5(VAR_10);
   } else {
    VAR_9 = FUNC_5(VAR_10);
    VAR_3->ppid_to_apid[VAR_4]
     = VAR_9 | VAR_1;
    VAR_3->apid_data[VAR_9].ppid = VAR_4;
    return VAR_9;
   }
  } else {
   if (FUNC_2(VAR_10)) {
    VAR_6 = FUNC_3(VAR_10);
   } else {
    VAR_9 = FUNC_3(VAR_10);
    VAR_3->ppid_to_apid[VAR_4]
     = VAR_9 | VAR_1;
    VAR_3->apid_data[VAR_9].ppid = VAR_4;
    return VAR_9;
   }
  }
 }

 return -VAR_0;
}
