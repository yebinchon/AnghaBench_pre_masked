
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {int heartbeat_sample_interval; int firmware_flash_in_progress; } ;
struct TYPE_2__ {int CDB; } ;
struct CommandList {TYPE_1__ Request; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ctlr_info *VAR_1,
  struct CommandList *VAR_2)
{
 if (FUNC_1(VAR_2->Request.CDB) &&
  FUNC_0(&VAR_1->firmware_flash_in_progress))
  VAR_1->heartbeat_sample_interval = VAR_0;
}
