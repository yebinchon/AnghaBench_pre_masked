
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bp_installed; int bp_type; int bp_addr; scalar_t__ bp_enabled; } ;
typedef TYPE_1__ kdb_bp_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_3(kdb_bp_t *VAR_1, int VAR_2)
{
 FUNC_1("%s ", FUNC_0(VAR_1));
 FUNC_1("BP #%d at ", VAR_2);
 FUNC_2(VAR_1->bp_addr, ((void*)0), VAR_0);

 if (VAR_1->bp_enabled)
  FUNC_1("\n    is enabled ");
 else
  FUNC_1("\n    is disabled");

 FUNC_1("  addr at %016lx, hardtype=%d installed=%d\n",
     VAR_1->bp_addr, VAR_1->bp_type, VAR_1->bp_installed);

 FUNC_1("\n");
}
