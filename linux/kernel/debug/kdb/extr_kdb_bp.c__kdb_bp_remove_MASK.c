
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bp_installed; int bp_type; int bph_length; int bp_addr; } ;
typedef TYPE_1__ kdb_bp_t ;
struct TYPE_5__ {int (* remove_hw_breakpoint ) (int ,int ,int ) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(kdb_bp_t *VAR_1)
{
 int VAR_2 = 1;
 if (!VAR_1->bp_installed)
  return VAR_2;
 if (!VAR_1->bp_type)
  VAR_2 = FUNC_0(VAR_1->bp_addr);
 else
  VAR_2 = VAR_0.remove_hw_breakpoint(VAR_1->bp_addr,
    VAR_1->bph_length,
    VAR_1->bp_type);
 if (VAR_2 == 0)
  VAR_1->bp_installed = 0;
 return VAR_2;
}
