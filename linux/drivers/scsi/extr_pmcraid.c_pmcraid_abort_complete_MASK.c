
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pmcraid_resource_entry {int sync_reqd; } ;
struct pmcraid_cmd {TYPE_2__* ioa_cb; struct pmcraid_resource_entry* res; int wait_for_completion; } ;
struct TYPE_3__ {int ioasc; } ;
struct TYPE_4__ {TYPE_1__ ioasa; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pmcraid_cmd*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct pmcraid_cmd *VAR_4)
{
 struct pmcraid_resource_entry *VAR_5;
 u32 VAR_6;

 FUNC_3(&VAR_4->wait_for_completion);
 VAR_5 = VAR_4->res;
 VAR_4->res = ((void*)0);
 VAR_6 = FUNC_1(VAR_4->ioa_cb->ioasa.ioasc);






 if (VAR_6 == VAR_2 ||
     VAR_6 == VAR_1) {
  if (VAR_6 == VAR_1)
   VAR_5->sync_reqd = 1;
  VAR_6 = 0;
 }


 FUNC_2(VAR_4);
 return FUNC_0(VAR_6) ? VAR_0 : VAR_3;
}
