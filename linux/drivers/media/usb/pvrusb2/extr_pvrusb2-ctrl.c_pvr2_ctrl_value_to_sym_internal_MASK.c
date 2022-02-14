
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_4__* info; } ;
struct TYPE_6__ {int valid_bits; int bit_names; } ;
struct TYPE_5__ {char** value_names; int count; } ;
struct TYPE_7__ {TYPE_2__ type_bitmask; TYPE_1__ type_enum; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_3__ def; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int ,int,int ,char*,unsigned int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_1 (char*,unsigned int,char*,...) ;

int FUNC_2(struct pvr2_ctrl *VAR_5,
        int VAR_6,int VAR_7,
        char *VAR_8,unsigned int VAR_9,
        unsigned int *VAR_10)
{
 int VAR_11 = -VAR_0;

 *VAR_10 = 0;
 if (VAR_5->info->type == VAR_4) {
  *VAR_10 = FUNC_1(VAR_8,VAR_9,"%d",VAR_7);
  VAR_11 = 0;
 } else if (VAR_5->info->type == VAR_2) {
  *VAR_10 = FUNC_1(VAR_8,VAR_9,"%s",VAR_7 ? "true" : "false");
  VAR_11 = 0;
 } else if (VAR_5->info->type == VAR_3) {
  const char * const *VAR_12;
  VAR_12 = VAR_5->info->def.type_enum.value_names;
  if ((VAR_7 >= 0) &&
      (VAR_7 < VAR_5->info->def.type_enum.count)) {
   if (VAR_12[VAR_7]) {
    *VAR_10 = FUNC_1(
     VAR_8,VAR_9,"%s",
     VAR_12[VAR_7]);
   } else {
    *VAR_10 = 0;
   }
   VAR_11 = 0;
  }
 } else if (VAR_5->info->type == VAR_1) {
  *VAR_10 = FUNC_0(
   VAR_7 & VAR_6 & VAR_5->info->def.type_bitmask.valid_bits,
   ~0,!0,
   VAR_5->info->def.type_bitmask.bit_names,
   VAR_8,VAR_9);
 }
 return VAR_11;
}
