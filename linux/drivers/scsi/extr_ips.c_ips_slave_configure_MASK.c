
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {scalar_t__ type; int skip_ms_page_8; int skip_ms_page_3f; scalar_t__ tagged_supported; int host; } ;
struct TYPE_5__ {int max_cmds; TYPE_1__* enq; } ;
typedef TYPE_2__ ips_ha_t ;
struct TYPE_4__ {int ucLogDriveCount; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct scsi_device*,int) ;

__attribute__((used)) static int
FUNC_2(struct scsi_device * VAR_1)
{
 ips_ha_t *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1->host);
 if (VAR_1->tagged_supported && VAR_1->type == VAR_0) {
  VAR_3 = VAR_2->max_cmds / 2;
  if (VAR_2->enq->ucLogDriveCount <= 2)
   VAR_3 = VAR_2->max_cmds - 1;
  FUNC_1(VAR_1, VAR_3);
 }

 VAR_1->skip_ms_page_8 = 1;
 VAR_1->skip_ms_page_3f = 1;
 return 0;
}
