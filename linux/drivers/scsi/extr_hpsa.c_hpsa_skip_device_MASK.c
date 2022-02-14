
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ext_report_lun_entry {int device_flags; int device_type; } ;
struct ctlr_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ctlr_info*,int*) ;

__attribute__((used)) static bool FUNC_2(struct ctlr_info *VAR_4, u8 *VAR_5,
    struct ext_report_lun_entry *VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;

 if (!FUNC_0(VAR_5))
  return 0;

 VAR_7 = VAR_6->device_flags;
 VAR_8 = VAR_6->device_type;

 if (VAR_7 & VAR_1) {
  if (VAR_8 == VAR_0)
   return 0;
  return 1;
 }

 if (!(VAR_7 & VAR_3))
  return 0;

 if (VAR_7 & VAR_2)
  return 0;
 if (FUNC_1(VAR_4, VAR_5))
  return 1;

 return 0;
}
