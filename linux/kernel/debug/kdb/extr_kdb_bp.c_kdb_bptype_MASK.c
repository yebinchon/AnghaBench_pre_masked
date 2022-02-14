
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bp_type; } ;
typedef TYPE_1__ kdb_bp_t ;


 char** VAR_0 ;

__attribute__((used)) static char *FUNC_0(kdb_bp_t *VAR_1)
{
 if (VAR_1->bp_type < 0 || VAR_1->bp_type > 4)
  return "";

 return VAR_0[VAR_1->bp_type];
}
