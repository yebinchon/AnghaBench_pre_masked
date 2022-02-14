
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct isst_if_mbox_cmd {scalar_t__ logical_cpu; scalar_t__ command; scalar_t__ sub_command; } ;
struct TYPE_3__ {scalar_t__ cmd; scalar_t__ sub_cmd_beg; scalar_t__ sub_cmd_end; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;

bool FUNC_1(struct isst_if_mbox_cmd *VAR_2)
{
 int VAR_3;

 if (VAR_2->logical_cpu >= VAR_1)
  return 1;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
  if (VAR_2->command == VAR_0[VAR_3].cmd &&
      (VAR_2->sub_command >= VAR_0[VAR_3].sub_cmd_beg &&
       VAR_2->sub_command <= VAR_0[VAR_3].sub_cmd_end)) {
   return 0;
  }
 }

 return 1;
}
