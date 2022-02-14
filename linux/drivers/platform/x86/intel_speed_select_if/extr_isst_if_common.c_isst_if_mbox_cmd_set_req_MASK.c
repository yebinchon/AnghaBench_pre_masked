
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct isst_if_mbox_cmd {scalar_t__ command; scalar_t__ sub_command; scalar_t__ parameter; } ;
struct TYPE_3__ {scalar_t__ cmd; scalar_t__ sub_cmd; scalar_t__ param; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

bool FUNC_1(struct isst_if_mbox_cmd *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {
  if (VAR_1->command == VAR_0[VAR_2].cmd &&
      VAR_1->sub_command == VAR_0[VAR_2].sub_cmd &&
      VAR_1->parameter == VAR_0[VAR_2].param) {
   return 1;
  }
 }

 return 0;
}
