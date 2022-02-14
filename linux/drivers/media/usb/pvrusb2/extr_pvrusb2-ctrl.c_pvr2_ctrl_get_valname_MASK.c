
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_5__* hdw; TYPE_4__* info; } ;
struct TYPE_10__ {int big_lock; } ;
struct TYPE_7__ {char** bit_names; int valid_bits; } ;
struct TYPE_6__ {char** value_names; } ;
struct TYPE_8__ {TYPE_2__ type_bitmask; TYPE_1__ type_enum; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_3__ def; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct pvr2_ctrl*,int) ;
 unsigned int FUNC_3 (char*,unsigned int,char*,char const*) ;

int FUNC_4(struct pvr2_ctrl *VAR_3,int VAR_4,
     char *VAR_5,unsigned int VAR_6,
     unsigned int *VAR_7)
{
 int VAR_8 = -VAR_0;
 if (!VAR_3) return 0;
 *VAR_7 = 0;
 FUNC_1(VAR_3->hdw->big_lock); do {
  if (VAR_3->info->type == VAR_2) {
   const char * const *VAR_9;
   VAR_9 = VAR_3->info->def.type_enum.value_names;
   if (FUNC_2(VAR_3,VAR_4) == 0) {
    if (VAR_9[VAR_4]) {
     *VAR_7 = FUNC_3(
      VAR_5,VAR_6,"%s",
      VAR_9[VAR_4]);
    } else {
     *VAR_7 = 0;
    }
    VAR_8 = 0;
   }
  } else if (VAR_3->info->type == VAR_1) {
   const char **VAR_10;
   unsigned int VAR_11;
   int VAR_12;
   VAR_10 = VAR_3->info->def.type_bitmask.bit_names;
   VAR_4 &= VAR_3->info->def.type_bitmask.valid_bits;
   for (VAR_11 = 0, VAR_12 = 1; VAR_4; VAR_11++, VAR_12 <<= 1) {
    if (VAR_4 & VAR_12) {
     *VAR_7 = FUNC_3(VAR_5,VAR_6,"%s",
         VAR_10[VAR_11]);
     VAR_8 = 0;
     break;
    }
   }
  }
 } while(0); FUNC_0(VAR_3->hdw->big_lock);
 return VAR_8;
}
