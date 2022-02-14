
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
typedef enum temp_type { ____Placeholder_temp_type } temp_type ;
typedef enum rw_hint { ____Placeholder_rw_hint } rw_hint ;
typedef enum page_type { ____Placeholder_page_type } page_type ;
struct TYPE_2__ {scalar_t__ whint_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

enum rw_hint FUNC_1(struct f2fs_sb_info *VAR_14,
    enum page_type VAR_15, enum temp_type VAR_16)
{
 if (FUNC_0(VAR_14).whint_mode == VAR_7) {
  if (VAR_15 == VAR_1) {
   if (VAR_16 == VAR_5)
    return VAR_12;
   else if (VAR_16 == VAR_2)
    return VAR_13;
   else if (VAR_16 == VAR_0)
    return VAR_8;
  } else {
   return VAR_12;
  }
 } else if (FUNC_0(VAR_14).whint_mode == VAR_6) {
  if (VAR_15 == VAR_1) {
   if (VAR_16 == VAR_5)
    return VAR_9;
   else if (VAR_16 == VAR_2)
    return VAR_13;
   else if (VAR_16 == VAR_0)
    return VAR_8;
  } else if (VAR_15 == VAR_4) {
   if (VAR_16 == VAR_5 || VAR_16 == VAR_2)
    return VAR_12;
   else if (VAR_16 == VAR_0)
    return VAR_11;
  } else if (VAR_15 == VAR_3) {
   return VAR_10;
  }
 }
 return VAR_12;
}
